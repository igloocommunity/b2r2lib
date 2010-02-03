/*---------------------------------------------------------------------------*/
/* © copyright STMicroelectronics(Wireless),2008. All rights reserved. For   */
/* information, STMicroelectronics(Wireless)reserves the right to license    */
/* this software concurrently under separate license conditions.             */
/*                                                                           */
/* This program is free software; you can redistribute it and/or modify it   */
/* under the terms of the GNU Lesser General Public License as published     */
/* by the Free Software Foundation; either version 2.1 of the License,       */
/* or (at your option)any later version.                                     */
/*                                                                           */
/* This program is distributed in the hope that it will be useful, but       */
/* WITHOUT ANY WARRANTY; without even the implied warranty of                */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See                  */
/* the GNU Lesser General Public License for more details.                   */
/*                                                                           */
/* You should have received a copy of the GNU Lesser General Public License  */
/* along with this program. If not, see <http://www.gnu.org/licenses/>.      */
/*---------------------------------------------------------------------------*/


/**

MODULE      :  B2R2 Device Driver

FILE        :  b2r2_driver_usr_api.h

DESCRIPTION :  Defines application user interface for the B2R2 driver

NOTES       :  User application using B2R2 driver should include this
               file and use b2r2_driver instance.

*/


#ifndef __B2R2_DRIVER_USR_API
#define __B2R2_DRIVER_USR_API


#ifdef __cplusplus
extern "C" {
#endif /* _cplusplus */


#include <linux/ioctl.h>


/**
 * enum  b2r2_driver_context - driver context
 *
 * description
 * This enumeration is used for selecting in which
 * b2r2 queue the job to be pushed.
 *
 */

typedef enum b2r2_driver_context
{

B2R2_CQ1_JOB=0x1,
B2R2_CQ2_JOB=0x2,
B2R2_AQ1_JOB=0x4,
B2R2_AQ2_JOB=0x8,
B2R2_AQ3_JOB=0xc,
B2R2_AQ4_JOB=0x10,
B2R2_ERROR_JOB=0x20

}b2r2_driver_context;

/**
 * struct  b2r2_driver - Driver instance handler
 * @context: b2r2 instance
 * @jobid: job index
 * @queue_address: Address of the queue
 * @control: Control Params
 * @pace_control: pace_control
 * @interrupt_status: interrupt status
 * @job_done: status of the job done
 * @interrupt_target: interrupt target
 * @interrupt_context: interrupt context
 *
 * description
 * This structure is used for queuing and dequeueing a job.
 * priority and type of hardware triggering can be selected.
 *
 */

typedef struct  b2r2_driver{

 b2r2_driver_context  context;
 unsigned int jobid;

 unsigned int queue_address;
 unsigned int control;
 unsigned int pace_control;
 unsigned int interrupt_status;

 unsigned int     job_done;
 unsigned int     interrupt_target;
 unsigned int     interrupt_context;

 }b2r2_driver;


/**
 * struct  b2r2_driver_memory - Driver memory handler
 * @physical_address: physical address of the memory
 * @size_of_memory:size of the memory
 *
 * description
 * This structure is used by to define the memory required.
 *
 */


 typedef struct b2r2_driver_memory
 {

  unsigned int   physical_address;
  unsigned int   size_of_memory;

 }b2r2_driver_memory;


/** Maximum size of the structure need to passed to B2R2 */

#define B2R2_MAX_IOCTL_SIZE	   (4 * 1024)

#define B2R2_IOC_MAGIC 0xcc


/** INSTANCE SPECIFIC OPERATIONS */

#define B2R2_QUEUE_JOB             _IOWR(B2R2_IOC_MAGIC,1,b2r2_driver)
#define B2R2_DEQUEUE_JOB           _IOWR(B2R2_IOC_MAGIC,2,b2r2_driver)

#define B2R2_ALLOCATE_MEMORY       _IOWR(B2R2_IOC_MAGIC,4,b2r2_driver_memory)
#define B2R2_DEALLOCATE_MEMORY     _IOWR(B2R2_IOC_MAGIC,5,b2r2_driver_memory)

#define B2R2_IOC_MAXNR (1)


#ifdef _cplusplus
}
#endif /* _cplusplus */

#endif //__B2R2_DRIVER_USR_API