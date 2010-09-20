/*
 * Copyright (C) ST-Ericsson AB 2009 - All rights reserved
 * Reproduction and Communication of this document is strictly prohibited
 * unless specifically authorized in writing by ST-Ericsson
 *
 * \file    blt_b2r2.c
 * \brief   Android driver for B2R2 hardware
 * \author  ST-Ericsson
 *
 */

#include <blt_api.h>

#include <sys/ioctl.h>
#include <fcntl.h>
#include <errno.h>
#include <pthread.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <video/b2r2_blt.h>

#define LOG_TAG "libblt_hw"

#ifdef ANDROID
#  include <cutils/log.h>
#  define LOGE2(...) LOGE(__VA_ARGS__)
#  define LOGI2(...) LOGI(__VA_ARGS__)
#else
#  define LOGE(format) fprintf(stderr, LOG_TAG format "\n")
#  define LOGE2(format, ...) fprintf(stderr, LOG_TAG format "\n", __VA_ARGS__)
#  define LOGI2(format, ...) printf(LOG_TAG format "\n", __VA_ARGS__)
#endif

#define B2R2_BLT_DEV "/dev/b2r2_blt"

struct blt_b2r2_data {
    int fd;
    pthread_t callback_thread;
};

#define DATAS_START_SIZE 10
#define DATAS_GROW_SIZE 5
static struct blt_b2r2_data **datas = NULL;
static int data_count = 0;

static int grow_datas(void)
{
    struct blt_b2r2_data **new_datas = NULL;
    int new_data_count = data_count + DATAS_GROW_SIZE;

    new_datas = malloc(new_data_count*sizeof(*new_datas));
    if (new_datas == NULL) {
        LOGE("Out of memory!");
        errno = -ENOMEM;
        goto error;
    }

    memset(new_datas, 0, new_data_count*sizeof(*new_datas));
    memcpy(new_datas, datas, data_count*sizeof(*datas));

    free(datas);

    data_count = new_data_count;
    datas = new_datas;

    return 0;

error:
    return -1;
}

static int get_handle(struct blt_b2r2_data *data) {
    int handle;

    if (datas == NULL) {

        datas = malloc(DATAS_START_SIZE*sizeof(*datas));
        if (datas == NULL) {
            LOGE("Out of memory!\n");
            errno = -ENOMEM;
            goto error;
        }

        data_count = DATAS_START_SIZE;
        memset(datas, 0, data_count*sizeof(*datas));
    }

    for (handle = 0; handle < data_count; handle++) {
        if (datas[handle] == NULL) {
            datas[handle] = data;
            break;
        }

        if (handle == data_count - 1) {
            if (grow_datas() < 0)
                goto error;
        }
    }

    return handle;

error:
    return -1;
}

static struct blt_b2r2_data *get_data(int handle) {
    if (handle >= data_count || handle < 0)
        return NULL;
    else
        return datas[handle];
}

static void free_handle(int handle) {
    if (handle < data_count && handle > 0) {
        datas[handle] = NULL;
    }
}

static void *callback_thread_run(void *arg)
{
    while (1) {
        struct pollfd fds;
        struct b2r2_blt_report report;

        fds.fd = (int)arg;
        fds.events = POLLIN;

        if (poll(&fds, 1, -1) <= 0) {
            /* We assume that this is because the device was closed */
            pthread_exit(NULL);
            break;
        } else {
            ssize_t count;

            memset(&report, 0, sizeof(report));
            count = read(fds.fd, &report, sizeof(report));
            if (count < 0) {
                LOGE2("Could not read report from b2r2 device (%s)",
                        strerror(errno));
            } else if (report.report1 != 0) {
                void (*callback)(int, uint32_t) = (void*)report.report1;
                callback(report.request_id, (uint32_t)report.report2);
            }
        }
    }
    return NULL;
}

int blt_open(void)
{
    struct blt_b2r2_data *data = NULL;
    int fd;
    int handle;

    fd = open(B2R2_BLT_DEV, O_RDWR);
    if (fd < 0) {
        LOGE2("Could not open device %s", B2R2_BLT_DEV);
        goto error;
    }

    data = malloc(sizeof(struct blt_b2r2_data));
    if (data == NULL) {
        LOGE("Out of memory");
        goto error;
    }

    memset(data, 0, sizeof(*data));

    data->fd = fd;
    data->callback_thread = -1;

    handle = get_handle(data);
    if (handle < 0)
        goto error_free;

    LOGI2("Library opened (handle = %d)", handle);

    return handle;

error_free:
    free(data);
error:
    return -1;
}

void blt_close(int blt_handle)
{
    struct blt_b2r2_data *data = get_data(blt_handle);

    if (data == NULL)
        goto out;

    close(data->fd);
    free(data);

out:
    return;
}

int blt_request(int blt_handle, struct blt_req *req)
{
    struct blt_b2r2_data *data = get_data(blt_handle);
    int ret;

    if (data == NULL) {
        errno = EINVAL;
        ret = -1;
        goto out;
    }

    if (req->callback != NULL) {
        req->flags |= B2R2_BLT_FLAG_REPORT_WHEN_DONE;
#ifdef BLT_B2R2_DEBUG_PERFORMANCE
        req->flags |= B2R2_BLT_FLAG_REPORT_PERFORMANCE;
#endif

        if (data->callback_thread != -1) {
            /* Start a thread to wait for the requests to complete */
            pthread_create(&data->callback_thread, NULL, callback_thread_run,
                        (void *)data->fd);
        }
    }

    ret = ioctl(data->fd, B2R2_BLT_IOC, (struct b2r2_blt_req *) req);
    if (ret < 0)
        goto out;

out:
    return ret;
}

int blt_synch(int blt_handle, int request_id)
{
    struct blt_b2r2_data *data = get_data(blt_handle);

    if (data == NULL) {
        errno = EINVAL;
        return -1;
    }

    return ioctl(data->fd, B2R2_BLT_SYNCH_IOC, request_id);
}

int blt_query_cap(int blt_handle,
		enum blt_fmt fmt,
		enum blt_cap capability,
		uint32_t *cap)
{
    LOGE("blt_query_cap not implemented yet");
    errno = ENOSYS;
    return -1;
}
