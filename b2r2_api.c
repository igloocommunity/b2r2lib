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


/**  Include files */


/** Linux includes */

#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>
//#include <sys/fcntl.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/fb.h>
#include <linux/kd.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>

/** Driver include file */

#include "b2r2_driver_usr_api.h"

/** b2r2 API file */

#include "b2r2_api.h"
#include "b2r2_global.h"

static unsigned int compute_the_horizontal_scale_factor(B2R2_RECT *psrc_window, \
                                 B2R2_RECT *pdst_window,int *x_out_width);
static unsigned int compute_the_vertical_scale_factor(B2R2_RECT *psrc_window,\
                                 B2R2_RECT *pdst_window);

 static void configure_node_for_b2r2_op(b2r2_library *library,b2r2_configuration *config);

#define DEBUG_NODE_DATA (0)
#define DEBUG_PRINTF    (0)
#define PERFORMANCE_MEASUREMENT (1)

/**
 *   It opens the b2r2 driver instance
 *   and returns NONE.
 *   @param[in] library The library instance.
 *   @return NONE
 */
void b2r2_library_init(b2r2_library* library)
{

   /** Open one driver instance */
#if DEBUG_PRINTF
   printf("%s\n",__FUNCTION__);
#endif

   library->file_pointer=open("/dev/b2r2",O_RDWR);

}

/**
 *   Close the b2r2 driver instance
 *   and returns NONE.
 *   @param[in] library The library instance.
 *   @return NONE
 */
void b2r2_library_close(b2r2_library* library)
{

   /** Close the driver instance */
#if DEBUG_PRINTF
   printf("%s\n",__FUNCTION__);
#endif

   close(library->file_pointer);

}

/**
 *   It allocates the kernal memory
 *   and returns NONE.
 *   @param[in] library The library instance.
 *   @param[out] memory Physical address of the kernal buffer.
 *   @return NONE
 */

void b2r2_library_allocate(b2r2_library* library,b2r2_buffer_memory* memory)
{

  b2r2_driver_memory driver_memory;

#if DEBUG_PRINTF
  printf("%s\n",__FUNCTION__);
#endif
  /**  Assign the size of memory */
  driver_memory.size_of_memory=memory->size_of_memory;

  /** Get the physical address of that memory */
  ioctl(library->file_pointer,B2R2_ALLOCATE_MEMORY,&driver_memory);

  memory->physical_address=driver_memory.physical_address;

  /** Get the virtual address of that memory */
  memory->logical_address= mmap (NULL,memory->size_of_memory,PROT_READ|PROT_WRITE,MAP_SHARED,
                                 library->file_pointer,0);


}

/**
 *   It deallocates the kernal memory
 *   and returns NONE.
 *   @param[in] library The library instance.
 *   @param[out] memory Physical address of the kernal buffer.
 *   @return NONE
 */
void b2r2_library_deallocate(b2r2_library* library,b2r2_buffer_memory* memory)
{

  b2r2_driver_memory driver_memory;

#if DEBUG_PRINTF
  printf("%s\n",__FUNCTION__);
#endif

  /**  Assign the size of memory */
  driver_memory.size_of_memory=memory->size_of_memory;
  driver_memory.physical_address=memory->physical_address;

  /** Get the physical address of that memory */
  ioctl(library->file_pointer,B2R2_DEALLOCATE_MEMORY,&driver_memory);

  /** need to remove the virtual address */
  munmap(memory->logical_address,memory->size_of_memory);


}





void do_pixmap_pitch(b2r2_color_form color_format,unsigned short pic_width,unsigned short *pixmap_pitch)
{
    switch(color_format)
    {
    	case A1:
    				*pixmap_pitch = pic_width/8;
    				if( 0!=pic_width%8)
    				{
    					*pixmap_pitch +=1;
    				}

    				break;

    	case CLUT1:
    				*pixmap_pitch = pic_width/8;
    				if( 0!=pic_width%8)
    				{
    					*pixmap_pitch +=1;
    				}

    				break;
    	case CLUT2:
    				*pixmap_pitch = pic_width/4;
    				if( 0!=pic_width%4)
    				{
    					*pixmap_pitch +=1;
    				}

    				break;

    	case CLUT4:
    				*pixmap_pitch = pic_width/2;
    				if( 0!=pic_width%2)
    				{
    					*pixmap_pitch +=1;
    				}

    				break;
    	case CLUT8:
    				*pixmap_pitch = pic_width;
    				break;

    	case ACLUT44:
    				*pixmap_pitch = pic_width;
    				break;
    	case ACLUT88:
    				*pixmap_pitch = pic_width*2;
    				break;
    	case A8:
    				*pixmap_pitch = pic_width;
    				break;
    	case RGB565:
    				*pixmap_pitch = pic_width*2;
    				break;
    	case ARGB4444:
    				*pixmap_pitch = pic_width*2;
    				break;
    	case ARGB1555:
    				*pixmap_pitch = pic_width*2;
    				break;
    	case ARGB8565:
    				*pixmap_pitch = pic_width*3;
    				break;
    	case RGB888:
    				*pixmap_pitch = pic_width*3;
    				break;
    	case YCBCR888:
    				*pixmap_pitch = pic_width*3;
    				break;
    	case ARGB8888:
    				*pixmap_pitch = pic_width*4;
    				break;
    	case AYCBCR8888:
    				*pixmap_pitch = pic_width*4;
    				break;
    	case YCBCR422R:
    				*pixmap_pitch = pic_width*2;
    				break;
    	case YCBCR42XMB:
    				*pixmap_pitch = pic_width;
    				break;
    	case YUV:
    				*pixmap_pitch = pic_width;
    				break;
    	case YCBCR42XMBN:
    				*pixmap_pitch = pic_width;
    				break;
    	case YCBCR42XR2B:
    				*pixmap_pitch = pic_width;
    				break;
    }

}


////////////////////////////////////////////////////////////////////////////////////////////

int b2r2_library_operation_configure(b2r2_library *library,b2r2_configuration *config)
{
	b2r2_buffer_memory   memory;
	int no_of_nodes=1;


	config->is_color_key_en   = config->color_key.enable   ? 1:0;
	config->is_alpha_blend_en = config->alpha_blend.enable ? 1:0;
	config->is_rect_clip_en   = config->rect_clip.enable   ? 1:0;
	config->is_color_fill_en  = config->color_fill.enable  ? 1:0;
	config->is_rop_ops_en	   = config->rop.enable         ? 1:0;

	if((config->is_alpha_blend_en||config->is_color_key_en||\
	   config->is_rect_clip_en||config->is_color_fill_en)&config->is_rop_ops_en)
   {
	   //error to be defined
	   return -1;
   }

    if(config->dst_image.physical_address)
    {
		/*check for resize*/
		config->is_resize=((config->src_window.width!=config->dst_window.width)|| \
			   (config->src_window.height!=config->dst_window.height))?1:0;

		config->is_color_conversion = ((config->src_image.color_format == B2R2_YCBCR42XMBN) || \
				(config->src_image.color_format == B2R2_YUV) || \
				(config->src_image.color_format == B2R2_YCBCR888) || \
				(config->src_image.color_format == B2R2_YCBCR422R) || \
				(config->src_image.color_format == B2R2_AYCBCR8888) || \
				(config->src_image.color_format == B2R2_YCBCR42XMB) || \
				(config->src_image.color_format == B2R2_YCBCR42XR2B))?1:0;

		config->is_rotation =(config->rotation!=B2R2_ROT_0)?1:0;

		/*resize or rotation*/
		if(config->is_resize || config->is_rotation || config->is_color_conversion)
		{
			/* Find the Number of nodes*/

			if(config->is_rotation)
			{
					 unsigned char is_src_width_multiple_of_16=1;

					 no_of_nodes = (config->rotation!=B2R2_ROT_180)?(config->src_window.width/16):1;
					 if(config->src_window.width%16)
					 {
						no_of_nodes++;
						is_src_width_multiple_of_16 =0;
					 }
					/** We have to allocate memory for nodes */
					memory.size_of_memory=no_of_nodes*sizeof(b2r2_link_list);
					b2r2_library_allocate(library,&memory);
					configure_rotate(no_of_nodes,is_src_width_multiple_of_16,&memory,config);
					config->NodeAdress=memory.logical_address;
					config->no_of_nodes =no_of_nodes;
					config->last_nodeAdress =config->NodeAdress+(no_of_nodes-1)*sizeof(b2r2_link_list);
					config->NodePhysicalAdress=memory.physical_address;
					#if DEBUG_PRINTF
						printf("%s\n",__FUNCTION__);
						printf("no_of_nodes is %x \n",no_of_nodes);
						printf("config->NodephyAdress is %x \n",memory.physical_address);
					#endif


		    }

			 else
			 {
				 /** resize/color conversion*/
					 unsigned char is_src_width_multiple_of_128=1;
					//printf("config->src_window.width:%d\n",config->src_window.width);
					 no_of_nodes = (config->src_window.width/128);
					 if(config->src_window.width%128)
					 {
						no_of_nodes++;
						is_src_width_multiple_of_128 =0;
					 }
					/** We have to allocate memory for nodes */
					memory.size_of_memory=no_of_nodes*sizeof(b2r2_link_list);
					b2r2_library_allocate(library,&memory);
					//printf("memory.physical_address:%x\n",memory.physical_address);
					if (config->is_color_conversion)
						configure_color_conversion(no_of_nodes,is_src_width_multiple_of_128,&memory,config);
					else if (config->is_resize )
						configure_resize(no_of_nodes,is_src_width_multiple_of_128,&memory,config);
					config->NodeAdress=memory.logical_address;
					config->no_of_nodes =no_of_nodes;
					config->last_nodeAdress =config->NodeAdress+(no_of_nodes-1)*sizeof(b2r2_link_list);
					config->NodePhysicalAdress=memory.physical_address;
					#if DEBUG_PRINTF
						printf("%s\n",__FUNCTION__);
						printf("no_of_nodes is %x \n",no_of_nodes);
						printf("config->NodephyAdress is %x \n",memory.physical_address);
					#endif

			 }
		}
		else
		{

			/** We have to allocate memory for a node */

			memory.size_of_memory=sizeof(b2r2_link_list);
			b2r2_library_allocate(library,&memory);
			config->NodeAdress=memory.logical_address;
			config->no_of_nodes =1;
			config->last_nodeAdress =config->NodeAdress;
			config->NodePhysicalAdress=memory.physical_address;
			configure_node_for_b2r2_op(library,config);
		}
	}
	else
	{
		memory.size_of_memory=sizeof(b2r2_link_list);
		b2r2_library_allocate(library,&memory);
		config->NodeAdress=memory.logical_address;
		config->no_of_nodes =1;
		config->last_nodeAdress =config->NodeAdress;
		config->NodePhysicalAdress=memory.physical_address;
		configure_node_for_b2r2_op(library,config);
	}

	config->job.job_logical_address=memory.logical_address;
	config->job.job_physical_address=memory.physical_address;
	config->job.job_size=no_of_nodes*sizeof(b2r2_link_list);
	config->job.job_pace_lna_physical_address=memory.physical_address+(no_of_nodes-1)*sizeof(b2r2_link_list);

	return 0;
}

void b2r2_library_update_params(b2r2_library *library,b2r2_configuration *config,
                                B2R2_UPDATE_PARAMS params,B2R2_UPDATE_PARAMS_VAL *pVal)
{
	b2r2_link_list *pt_mem;
	unsigned short  pixmap_pitch;
	int i = 0;

	pt_mem=(b2r2_link_list*)(config->NodeAdress);

	switch(params)
	{
		case B2R2_FILL_COLOR_OP_PARAMS:
			pt_mem->GROUP2.B2R2_S1CF = pVal->val;
			pt_mem->GROUP1.B2R2_TXY   =  (pVal->window_params.src_window.top<<B2R2_Y_SHIFT|pVal->window_params.src_window.left);
			pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(pVal->window_params.src_window.width)|(pVal->window_params.src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
			break;

		case B2R2_ALPHA_BLEND_OP_PARAMS:
			pt_mem->GROUP1.B2R2_TXY   =  (pVal->window_params.dst_window.top<<B2R2_Y_SHIFT|(pVal->window_params.dst_window.left));
			pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(pVal->window_params.dst_window.width)|(pVal->window_params.dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
			pt_mem->GROUP3.B2R2_SXY   = pt_mem->GROUP1.B2R2_TXY;
			pt_mem->GROUP3.B2R2_SSZ   = pt_mem->GROUP1.B2R2_TSZ;
			pt_mem->GROUP4.B2R2_SXY  = (pVal->window_params.src_window.top<<B2R2_Y_SHIFT|(pVal->window_params.src_window.left));
			pt_mem->GROUP4.B2R2_SSZ  = (RESVD|(pVal->window_params.src_window.width)|(pVal->window_params.src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
			pt_mem->GROUP0.B2R2_ACK = ((pt_mem->GROUP0.B2R2_ACK & 0xffff00ff) | (pVal->val<<B2R2BLT_ACKGALPHA_ROPIDShift));
			break;

		case B2R2_COLOR_KEY_OP_PARMS:
			pt_mem->GROUP1.B2R2_TXY   =  (pVal->window_params.dst_window.top<<B2R2_Y_SHIFT|(pVal->window_params.dst_window.left));
			pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(pVal->window_params.dst_window.width)|(pVal->window_params.dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
			pt_mem->GROUP3.B2R2_SXY   = pt_mem->GROUP1.B2R2_TXY;
			pt_mem->GROUP3.B2R2_SSZ   = pt_mem->GROUP1.B2R2_TSZ;
			pt_mem->GROUP4.B2R2_SXY  = (pVal->window_params.src_window.top<<B2R2_Y_SHIFT|(pVal->window_params.src_window.left));
			pt_mem->GROUP4.B2R2_SSZ  = (RESVD|(pVal->window_params.src_window.width)|(pVal->window_params.src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
			pt_mem->GROUP12.B2R2_KEY1   =
				 ((((pVal->val&0xFF000000)>>24)<<B2R2BLT_KEY1ALPHA0Shift)| \
				 ((((pVal->val&0xF800)>>11)<<3)<<B2R2BLT_KEY1RED_MINShift)| \
				 ((((pVal->val&0x07E0)>>5)<<2)<<B2R2BLT_KEY1GREEN_MINShift)| \
			 	 ((pVal->val&0x1F)<<3));
			pt_mem->GROUP12.B2R2_KEY2   =
				 ((((pVal->val&0xFF000000)>>24)<<B2R2BLT_KEY1ALPHA0Shift)| \
				 (((((pVal->val&0xF800)>>11)<<3)|0x7)<<B2R2BLT_KEY1RED_MINShift)| \
				 (((((pVal->val&0x07E0)>>5)<<2)|0x3)<<B2R2BLT_KEY1GREEN_MINShift)| \
				 (((pVal->val&0x1F)<<3)|0x7));
			break;

		case B2R2_ROTATION_OP_PARAMS:
			break;

		case B2R2_CLIP_OP_PARAMS:
			pt_mem->GROUP6.B2R2_CWO  =((pVal->window_params.clip_window.top<<B2R2BLT_CWOYDOShift)| \
		        			pVal->window_params.clip_window.left);
			pt_mem->GROUP6.B2R2_CWS  =(((pVal->window_params.clip_window.top+pVal->window_params.clip_window.height)<<B2R2BLT_CWSYDSShift)| \
		        	                 (pVal->window_params.clip_window.left+pVal->window_params.clip_window.width));
			break;

		case B2R2_RESIZE_OP_PARAMS:
			break;

		case B2R2_ROP_OP_PARAMS:
			pt_mem->GROUP0.B2R2_ACK =((pt_mem->GROUP0.B2R2_ACK & 0xffff00ff) | (pVal->val<<B2R2BLT_ACKGALPHA_ROPIDShift));
			break;
		case B2R2_COLOR_CONVERSION_OF_PARAMS:
			for (i=0; i < config->no_of_nodes; i++)
			{
				pt_mem = (b2r2_link_list*)(config->NodeAdress+(i*sizeof(b2r2_link_list)));
				if (pVal->val == B2R2_YCBCR42XMBN)
				{
					/*Source1*/
					pt_mem->GROUP3.B2R2_SBA   = 0;
					/*Source2*/
					pt_mem->GROUP4.B2R2_SBA  = pVal->ppp_params.source_chroma_address;
					/*Source3*/
					pt_mem->GROUP5.B2R2_SBA  = pVal->ppp_params.source_luma_address;
				}
				else if (pVal->val == B2R2_YUV)
				{
					/*Source1*/
					pt_mem->GROUP3.B2R2_SBA   = pVal->ppp_params.source_chroma2_address;
					/*Source2*/
					pt_mem->GROUP4.B2R2_SBA  = pVal->ppp_params.source_chroma_address;
					/*Source3*/
					pt_mem->GROUP5.B2R2_SBA  = pVal->ppp_params.source_luma_address;

}
			}
		break;
		case B2R2_SOURCE_ADDRESS_OF_PARAMS:
			if(config->is_alpha_blend_en || config->is_color_key_en || \
	   			config->is_rect_clip_en || config->is_color_fill_en || config->is_rop_ops_en)
	   			pt_mem->GROUP3.B2R2_SBA   = pVal->val;
	   	break;
	   	case B2R2_DESTINATION_ADDRESS_OF_PARAMS:
			if(config->is_alpha_blend_en || config->is_color_key_en || \
	   			config->is_rect_clip_en || config->is_color_fill_en || config->is_rop_ops_en)
	   		{
	   			pt_mem->GROUP1.B2R2_TBA  = pVal->val;
	   		}
	   		else if(config->is_resize || config->is_rotation || config->is_color_conversion)
	   		{
	   			for (i=0; i < config->no_of_nodes; i++)
	   			{
	   				pt_mem = (b2r2_link_list*)(config->NodeAdress+(i*sizeof(b2r2_link_list)));
	   				pt_mem->GROUP1.B2R2_TBA   = pVal->val;
	   			}
	   		}
	   	break;
		default:
			printf("Inavlid	params to update\n");

	}
}

void b2r2_library_do_operation(b2r2_library *library,b2r2_configuration *config)
{
	b2r2_driver       driver_handler;

	#if DEBUG_PRINTF
		printf("%s\n",__FUNCTION__);
	#endif

    switch(config->job.priority)
    {


	   case B2R2_PRIORITY_1:
				{
					driver_handler.context=B2R2_CQ1_JOB;
					driver_handler.queue_address=config->job.job_physical_address;
					//driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_1);
					driver_handler.pace_control=config->job.job_pace_lna_physical_address;
					driver_handler.interrupt_target=0;
					driver_handler.interrupt_context=(B2R2BLT_ITSCQ1_completed);
				}

		break;

		case B2R2_PRIORITY_2:
				{
					driver_handler.context=B2R2_CQ2_JOB;
					driver_handler.queue_address=config->job.job_physical_address;
					//driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_1);
					driver_handler.pace_control=config->job.job_pace_lna_physical_address;
					driver_handler.interrupt_target=0;
					driver_handler.interrupt_context=(B2R2BLT_ITSCQ2_completed);
				}

		break;


	   case B2R2_PRIORITY_3:
		{
			driver_handler.context=B2R2_AQ1_JOB;
			driver_handler.queue_address=config->job.job_physical_address;
			driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_0);
			driver_handler.pace_control=config->job.job_pace_lna_physical_address;
			driver_handler.interrupt_target=0;
			driver_handler.interrupt_context=(B2R2BLT_ITSAQ1_LNA_Reached)|(B2R2BLT_ITSAQ1_Node_Notif);
		}

		break;

		case B2R2_PRIORITY_4:
				{
					driver_handler.context=B2R2_AQ2_JOB;
					driver_handler.queue_address=config->job.job_physical_address;
					driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_1);
					driver_handler.pace_control=config->job.job_pace_lna_physical_address;
					driver_handler.interrupt_target=0;
					driver_handler.interrupt_context=(B2R2BLT_ITSAQ2_LNA_Reached)|(B2R2BLT_ITSAQ2_Node_Notif);
				}

		break;

		case B2R2_PRIORITY_5:
				{
					driver_handler.context=B2R2_AQ3_JOB;
					driver_handler.queue_address=config->job.job_physical_address;
					driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_2);
					driver_handler.pace_control=config->job.job_pace_lna_physical_address;
					driver_handler.interrupt_target=0;
					driver_handler.interrupt_context=(B2R2BLT_ITSAQ3_LNA_Reached)|(B2R2BLT_ITSAQ3_Node_Notif);
				}

		break;

		case B2R2_PRIORITY_6:
				{
					driver_handler.context=B2R2_AQ4_JOB;
					driver_handler.queue_address=config->job.job_physical_address;
					driver_handler.control=(B2R2_AQ_Enab | B2R2_AQ_PRIOR_3);
					driver_handler.pace_control=config->job.job_pace_lna_physical_address;
					driver_handler.interrupt_target=0;
					driver_handler.interrupt_context=(B2R2BLT_ITSAQ4_LNA_Reached)|(B2R2BLT_ITSAQ4_Node_Notif);
				}

		break;
    }

	/** do a queue call */

	ioctl(library->file_pointer,B2R2_QUEUE_JOB,&driver_handler);

	/** get the job id */

	config->job.jobid=driver_handler.jobid;

	#if DEBUG_NODE_DATA
		debug_print_node_data(config->NodeAdress,5*sizeof(b2r2_link_list));
	#endif

}

void b2r2_library_operation_done(b2r2_library *library,b2r2_configuration *config)
{
	b2r2_driver       driver_handler;

#if DEBUG_PRINTF
	printf("%s\n",__FUNCTION__);
#endif
	/** get the job queue id */

	driver_handler.jobid=config->job.jobid;
	driver_handler.context=B2R2_AQ1_JOB;

	/** do a dequeue call */

	ioctl(library->file_pointer,B2R2_DEQUEUE_JOB,&driver_handler);
}

void configure_resize(unsigned char no_of_nodes,unsigned char is_src_width_multiple_of_128,\
                      b2r2_buffer_memory *pNode_mem,b2r2_configuration *config)
{
	b2r2_link_list *pt_mem;
	int i=0;
	unsigned short dst_pixmap_pitch,src_pixmap_pitch;
	B2R2_RECT src_rsz_inc_rect,dst_rsz_inc_vect;
	int x_in_offset=0,x_out_offset=0;
	int x_in_width=128,x_out_width=0;
	unsigned char no_of_nodes_multiple_of_128=0;
	unsigned int chroma_rsf=0,luma_rsf=0;

	no_of_nodes_multiple_of_128=(is_src_width_multiple_of_128)? \
	              no_of_nodes:no_of_nodes-1;

	pt_mem=  (b2r2_link_list*)(pNode_mem->logical_address);
	do_pixmap_pitch(config->dst_image.color_format,config->dst_image.width,&dst_pixmap_pitch);
	do_pixmap_pitch(config->src_image.color_format,config->src_image.width,&src_pixmap_pitch);

    /*For the nodes whose source width is equal to 128*/

    if(config->src_window.width!=config->dst_window.width)
    {
    	chroma_rsf=compute_the_horizontal_scale_factor(&config->src_window,&config->dst_window,&x_out_width);

    	if(x_out_width == 0)
    	{
    		printf("xoutwidth = %d, \n",x_out_width);
    		while(1);
		}
	}
	else
	{
		chroma_rsf=0x0400;
		x_out_width =128;
	}

	if(config->src_window.height!=config->dst_window.height)
	{
		luma_rsf=compute_the_vertical_scale_factor(&config->src_window,&config->dst_window);
	}
	else
	{
		luma_rsf=0x0400;
	}

	for(i=0;i<no_of_nodes_multiple_of_128;i++)
	{
		pt_mem->GROUP0.B2R2_NIP   = pNode_mem->physical_address+(i+1)*sizeof(b2r2_link_list);
		pt_mem->GROUP0.B2R2_CIC   = 0x1FFF;
		pt_mem->GROUP0.B2R2_INS   = (B2R2_SRC2_FETCH_MEM|B2R2BLT_INS2DRESCALE);
		pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->dst_window.top<<B2R2_Y_SHIFT|(config->dst_window.left+x_out_offset));
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|x_out_width|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		pt_mem->GROUP2.B2R2_S1CF  = 0;
		pt_mem->GROUP2.B2R2_S2CF  = 0;

		/*Source1*/
		pt_mem->GROUP3.B2R2_SBA   = 0;
		pt_mem->GROUP3.B2R2_STY   = 0;
		pt_mem->GROUP3.B2R2_SXY   = 0;
		pt_mem->GROUP3.B2R2_SSZ   = 0;

		/*Source2*/
		pt_mem->GROUP4.B2R2_SBA  = config->src_image.physical_address;
		pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		pt_mem->GROUP4.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|x_in_width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		//printf("iteration= %d,Node addrress is %x \n",i,pt_mem);

		/*Source3*/
		pt_mem->GROUP5.B2R2_SBA  = 0;
		pt_mem->GROUP5.B2R2_STY  = 0;
		pt_mem->GROUP5.B2R2_SXY  = 0;
		pt_mem->GROUP5.B2R2_SSZ  = 0;

		/*Clip*/
		pt_mem->GROUP6.B2R2_CWO  = 0;
		pt_mem->GROUP6.B2R2_CWS  = 0;

		/*Clut*/
		pt_mem->GROUP7.B2R2_CCO  = 0;
		pt_mem->GROUP7.B2R2_CML  = 0;

		pt_mem->GROUP8.B2R2_FCTL=0x22000044;
		pt_mem->GROUP8.B2R2_PMK =0;

		pt_mem->GROUP9.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);//0x08000800;
		pt_mem->GROUP9.B2R2_RZI=0x30003000;
		pt_mem->GROUP9.B2R2_HFP=0;
		pt_mem->GROUP9.B2R2_VFP=0;

		pt_mem->GROUP10.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);//0x08000800;
		pt_mem->GROUP10.B2R2_RZI=0x30003000;
		pt_mem->GROUP10.B2R2_HFP=0;
		pt_mem->GROUP10.B2R2_VFP=0;

		pt_mem->GROUP12.B2R2_KEY1=0;
		pt_mem->GROUP12.B2R2_KEY2=0;

		x_in_offset+=128;
		x_out_offset+=x_out_width;


		if((i==no_of_nodes_multiple_of_128-1)&&(is_src_width_multiple_of_128))
		{
			pt_mem->GROUP0.B2R2_NIP= 0;
			pt_mem->GROUP0.B2R2_INS  |=B2R2BLT_INSBlitCompIRQ ;
		}
		else
		{
			pt_mem++;
		}
	}

    /*For the node whose source width less than 128*/
	if(is_src_width_multiple_of_128==0)
	{
		pt_mem->GROUP0.B2R2_NIP= 0;

		pt_mem->GROUP0.B2R2_CIC   = 0x1FFF;
		pt_mem->GROUP0.B2R2_INS   = (B2R2_SRC2_FETCH_MEM|B2R2BLT_INS2DRESCALE|B2R2BLT_INSBlitCompIRQ);
		pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->dst_window.top<<B2R2_Y_SHIFT|(config->dst_window.left+x_out_offset));
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(config->dst_window.width-x_out_offset)|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		pt_mem->GROUP2.B2R2_S1CF  = 0;
		pt_mem->GROUP2.B2R2_S2CF  = 0;

		/*Source1*/
		pt_mem->GROUP3.B2R2_SBA   = 0;
		pt_mem->GROUP3.B2R2_STY   = 0;
		pt_mem->GROUP3.B2R2_SXY   = 0;
		pt_mem->GROUP3.B2R2_SSZ   = 0;

		/*Source2*/
		pt_mem->GROUP4.B2R2_SBA  = config->src_image.physical_address;
		pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		pt_mem->GROUP4.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));;
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|(config->src_window.width-x_in_offset)|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));


		/*Source3*/
		pt_mem->GROUP5.B2R2_SBA  = 0;
		pt_mem->GROUP5.B2R2_STY  = 0;
		pt_mem->GROUP5.B2R2_SXY  = 0;
		pt_mem->GROUP5.B2R2_SSZ  = 0;

		/*Clip*/
		pt_mem->GROUP6.B2R2_CWO  = 0;
		pt_mem->GROUP6.B2R2_CWS  = 0;

		/*Clut*/
		pt_mem->GROUP7.B2R2_CCO  = 0;
		pt_mem->GROUP7.B2R2_CML  = 0;

		pt_mem->GROUP8.B2R2_FCTL=0x22000044;
		pt_mem->GROUP8.B2R2_PMK =0;

		pt_mem->GROUP9.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);
		pt_mem->GROUP9.B2R2_RZI=0x30003000;
		pt_mem->GROUP9.B2R2_HFP=0;
		pt_mem->GROUP9.B2R2_VFP=0;

		pt_mem->GROUP10.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);
		pt_mem->GROUP10.B2R2_RZI=0x30003000;
		pt_mem->GROUP10.B2R2_HFP=0;
		pt_mem->GROUP10.B2R2_VFP=0;

		pt_mem->GROUP12.B2R2_KEY1=0;
		pt_mem->GROUP12.B2R2_KEY2=0;

	}

}



void configure_rotate(unsigned char no_of_nodes,unsigned char is_src_width_multiple_of_16,\
                      b2r2_buffer_memory *pNode_mem,b2r2_configuration *config)
{
	b2r2_link_list *pt_mem;
	int i=0;
	unsigned short dst_pixmap_pitch,src_pixmap_pitch;
	B2R2_RECT src_rsz_inc_rect,dst_rsz_inc_vect;
	int x_in_offset=0,x_out_offset=0;
	int x_in_width=16,x_out_width=16;
	unsigned char no_of_nodes_multiple_of_16=0;
	unsigned int chroma_rsf=0,luma_rsf=0;

	no_of_nodes_multiple_of_16=(is_src_width_multiple_of_16)? \
	              no_of_nodes:no_of_nodes-1;

	if(config->rotation == B2R2_ROT_180)
	{
		no_of_nodes_multiple_of_16=1;
		is_src_width_multiple_of_16=1;

		if(config->src_window.width<16)
		is_src_width_multiple_of_16=0;
	}



	pt_mem=  (b2r2_link_list*)(pNode_mem->logical_address);

	do_pixmap_pitch(config->dst_image.color_format,config->dst_image.width,&dst_pixmap_pitch);
	do_pixmap_pitch(config->src_image.color_format,config->src_image.width,&src_pixmap_pitch);

	for(i=0;i<no_of_nodes_multiple_of_16;i++)
	{
		pt_mem->GROUP0.B2R2_NIP   = pNode_mem->physical_address+(i+1)*sizeof(b2r2_link_list);
		pt_mem->GROUP0.B2R2_CIC   = 0x1FFF;
		pt_mem->GROUP0.B2R2_INS   = (B2R2_SRC2_FETCH_MEM);
		pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);


		pt_mem->GROUP2.B2R2_S1CF  = 0;
		pt_mem->GROUP2.B2R2_S2CF  = 0;

		/*Source1*/
		pt_mem->GROUP3.B2R2_SBA   = 0;
		pt_mem->GROUP3.B2R2_STY   = 0;
		pt_mem->GROUP3.B2R2_SXY   = 0;
		pt_mem->GROUP3.B2R2_SSZ   = 0;

		/*Source2*/
		pt_mem->GROUP4.B2R2_SBA  = config->src_image.physical_address;
		pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		pt_mem->GROUP4.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|x_in_width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		//printf("iteration= %d,Node addrress is %x \n",i,pt_mem);

		/*Source3*/
		pt_mem->GROUP5.B2R2_SBA  = 0;
		pt_mem->GROUP5.B2R2_STY  = 0;
		pt_mem->GROUP5.B2R2_SXY  = 0;
		pt_mem->GROUP5.B2R2_SSZ  = 0;

		/*Clip*/
		pt_mem->GROUP6.B2R2_CWO  = 0;
		pt_mem->GROUP6.B2R2_CWS  = 0;

		/*Clut*/
		pt_mem->GROUP7.B2R2_CCO  = 0;
		pt_mem->GROUP7.B2R2_CML  = 0;

		pt_mem->GROUP8.B2R2_FCTL=0;
		pt_mem->GROUP8.B2R2_PMK =0;

		pt_mem->GROUP9.B2R2_RSF=0;
		pt_mem->GROUP9.B2R2_RZI=0;
		pt_mem->GROUP9.B2R2_HFP=0;
		pt_mem->GROUP9.B2R2_VFP=0;

		pt_mem->GROUP10.B2R2_RSF=0;
		pt_mem->GROUP10.B2R2_RZI=0;
		pt_mem->GROUP10.B2R2_HFP=0;
		pt_mem->GROUP10.B2R2_VFP=0;

		pt_mem->GROUP12.B2R2_KEY1=0;
		pt_mem->GROUP12.B2R2_KEY2=0;


		if(config->rotation== B2R2_ROT_90)
		{ /** Set rotation enabled bit */
		pt_mem->GROUP0.B2R2_INS  |= B2R2BLT_INSROTATION;
		pt_mem->GROUP1.B2R2_TTY  |= (B2R2BLT_TTYHSO); //Set this bit to start line write operation from bottom to top in target area
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(x_out_width<<B2R2BLT_TSZWIN_HEIGHTShift)|config->src_window.height);
		pt_mem->GROUP1.B2R2_TXY    = ((((config->dst_window.top)+x_out_width*i)<<B2R2_Y_SHIFT)|(config->dst_window.left+config->dst_window.width-1));

		}

		if(config->rotation == B2R2_ROT_180)
		{
		pt_mem->GROUP1.B2R2_TTY   |= (B2R2BLT_TTYVSO|B2R2BLT_TTYHSO);
		pt_mem->GROUP1.B2R2_TXY    = (((config->dst_window.top+config->dst_window.height-1)<<B2R2_Y_SHIFT)|(config->dst_window.left+config->dst_window.width-1));
		pt_mem->GROUP1.B2R2_TSZ    = (RESVD|config->dst_window.width|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
		pt_mem->GROUP4.B2R2_SSZ    = (RESVD|config->src_window.width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));


		}

		if(config->rotation == B2R2_ROT_270)
		{
		pt_mem->GROUP0.B2R2_INS  |= B2R2BLT_INSROTATION;
		pt_mem->GROUP1.B2R2_TTY  |= (B2R2BLT_TTYVSO); //Set this bit to start pixel write operation from right to left in target area
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(x_out_width<<B2R2BLT_TSZWIN_HEIGHTShift)|config->src_window.height);
		pt_mem->GROUP1.B2R2_TXY    = ((config->dst_window.top)+(config->dst_window.height-1)-(x_out_width*i))<<B2R2_Y_SHIFT|config->dst_window.left;

		}

		x_in_offset+=16;
		x_out_offset+=16;


		if((i==no_of_nodes_multiple_of_16-1)&&(is_src_width_multiple_of_16))
		{
			pt_mem->GROUP0.B2R2_NIP= 0;
			pt_mem->GROUP0.B2R2_INS  |=B2R2BLT_INSBlitCompIRQ ;
		}
		else
		{
			pt_mem++;
		}
	}


    /*For the node whose source width less than 128*/
	if(is_src_width_multiple_of_16==0)
	{

		    x_in_width=config->src_window.width-no_of_nodes_multiple_of_16*16;
		    x_out_width=x_in_width;

		    pt_mem->GROUP0.B2R2_NIP= 0;

			pt_mem->GROUP0.B2R2_CIC   = 0x1FFF;
			pt_mem->GROUP0.B2R2_INS   = (B2R2_SRC2_FETCH_MEM);
			pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

			pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
			pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);


			pt_mem->GROUP2.B2R2_S1CF  = 0;
			pt_mem->GROUP2.B2R2_S2CF  = 0;

			/*Source1*/
			pt_mem->GROUP3.B2R2_SBA   = 0;
			pt_mem->GROUP3.B2R2_STY   = 0;
			pt_mem->GROUP3.B2R2_SXY   = 0;
			pt_mem->GROUP3.B2R2_SSZ   = 0;

			/*Source2*/
			pt_mem->GROUP4.B2R2_SBA  = config->src_image.physical_address;
			pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
			pt_mem->GROUP4.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));
			pt_mem->GROUP4.B2R2_SSZ  = (RESVD|x_in_width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));


			/*Source3*/
			pt_mem->GROUP5.B2R2_SBA  = 0;
			pt_mem->GROUP5.B2R2_STY  = 0;
			pt_mem->GROUP5.B2R2_SXY  = 0;
			pt_mem->GROUP5.B2R2_SSZ  = 0;

			/*Clip*/
			pt_mem->GROUP6.B2R2_CWO  = 0;
			pt_mem->GROUP6.B2R2_CWS  = 0;

			/*Clut*/
			pt_mem->GROUP7.B2R2_CCO  = 0;
			pt_mem->GROUP7.B2R2_CML  = 0;

			pt_mem->GROUP8.B2R2_FCTL=0;
			pt_mem->GROUP8.B2R2_PMK =0;

			pt_mem->GROUP9.B2R2_RSF=0;
			pt_mem->GROUP9.B2R2_RZI=0;
			pt_mem->GROUP9.B2R2_HFP=0;
			pt_mem->GROUP9.B2R2_VFP=0;

			pt_mem->GROUP10.B2R2_RSF=0;
			pt_mem->GROUP10.B2R2_RZI=0;
			pt_mem->GROUP10.B2R2_HFP=0;
			pt_mem->GROUP10.B2R2_VFP=0;

			pt_mem->GROUP12.B2R2_KEY1=0;
			pt_mem->GROUP12.B2R2_KEY2=0;


			if(config->rotation== B2R2_ROT_90)
			{ /** Set rotation enabled bit */
			pt_mem->GROUP0.B2R2_INS  |= B2R2BLT_INSROTATION;
			pt_mem->GROUP1.B2R2_TTY  |= (B2R2BLT_TTYHSO); //Set this bit to start line write operation from bottom to top in target area
			pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(x_out_width<<B2R2BLT_TSZWIN_HEIGHTShift)|config->src_window.height);
			pt_mem->GROUP1.B2R2_TXY    = ((((config->dst_window.top)+x_out_width*i)<<B2R2_Y_SHIFT)|(config->dst_window.left+config->dst_window.width-1));

			}

			if(config->rotation == B2R2_ROT_270)
			{
			pt_mem->GROUP0.B2R2_INS  |= B2R2BLT_INSROTATION;
			pt_mem->GROUP1.B2R2_TTY  |= (B2R2BLT_TTYVSO); //Set this bit to start pixel write operation from right to left in target area
			pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(x_out_width<<B2R2BLT_TSZWIN_HEIGHTShift)|config->src_window.height);
			pt_mem->GROUP1.B2R2_TXY    = ((config->dst_window.top)+(config->dst_window.height-1)-(x_out_width*i))<<B2R2_Y_SHIFT|config->dst_window.left;

		   }


		   if(config->rotation == B2R2_ROT_180)
		   		{
		   		pt_mem->GROUP1.B2R2_TTY   |= (B2R2BLT_TTYVSO|B2R2BLT_TTYHSO);
		   		pt_mem->GROUP1.B2R2_TXY    = (((config->dst_window.top+config->dst_window.height-1)<<B2R2_Y_SHIFT)|(config->dst_window.left+config->dst_window.width-1));
		   		pt_mem->GROUP1.B2R2_TSZ    = (RESVD|config->dst_window.width|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));
		   		pt_mem->GROUP4.B2R2_SSZ    = (RESVD|config->src_window.width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));


		        }

	 }

}


void configure_color_conversion(unsigned char no_of_nodes,unsigned char is_src_width_multiple_of_128,\
                      b2r2_buffer_memory *pNode_mem,b2r2_configuration *config)
{
	b2r2_link_list *pt_mem;
	int i=0;
	unsigned short dst_pixmap_pitch,src_pixmap_pitch;
	B2R2_RECT src_rsz_inc_rect,dst_rsz_inc_vect;
	int x_in_offset=0,x_out_offset=0;
	int x_in_width=128,x_out_width=0;
	unsigned char no_of_nodes_multiple_of_128=0;
	unsigned int chroma_rsf=0,luma_rsf=0;

	no_of_nodes_multiple_of_128=(is_src_width_multiple_of_128)? \
	              no_of_nodes:no_of_nodes-1;

	pt_mem=  (b2r2_link_list*)(pNode_mem->logical_address);
	do_pixmap_pitch(config->dst_image.color_format,config->dst_image.width,&dst_pixmap_pitch);
	do_pixmap_pitch(config->src_image.color_format,config->src_image.width,&src_pixmap_pitch);

    /*For the nodes whose source width is equal to 128*/

    if(config->src_window.width!=config->dst_window.width)
    {
    	chroma_rsf=compute_the_horizontal_scale_factor(&config->src_window,&config->dst_window,&x_out_width);

    	if(x_out_width == 0)
    	{
    		printf("xoutwidth = %d, \n",x_out_width);
    		while(1);
		}
	}
	else
	{
		chroma_rsf=0x0400;
		x_out_width =128;
	}

	if(config->src_window.height!=config->dst_window.height)
	{
		luma_rsf=compute_the_vertical_scale_factor(&config->src_window,&config->dst_window);
	}
	else
	{
		luma_rsf=0x0400;
	}
	for(i=0;i<no_of_nodes_multiple_of_128;i++)
	{
		//printf("configure_color_conversion:Node Address:%x\n",pNode_mem->physical_address);
		pt_mem->GROUP0.B2R2_NIP   = pNode_mem->physical_address+(i+1)*sizeof(b2r2_link_list);
		pt_mem->GROUP0.B2R2_CIC   = 0xFFFF;
		if (config->src_image.color_format == B2R2_YCBCR42XMBN)
			pt_mem->GROUP0.B2R2_INS   = (B2R2BLT_INSIVMX|B2R2BLT_INS2DRESCALE|B2R2_SRC2_FETCH_MEM|B2R2_SRC3_FETCH_MEM);
		else if (config->src_image.color_format == B2R2_YUV)
			pt_mem->GROUP0.B2R2_INS   = (B2R2BLT_INSIVMX|B2R2BLT_INS2DRESCALE|B2R2_SRC2_FETCH_MEM|B2R2_SRC3_FETCH_MEM|B2R2_SRC1_FETCH_MEM);
		pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->dst_window.top<<B2R2_Y_SHIFT|(config->dst_window.left+x_out_offset));
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|x_out_width|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		pt_mem->GROUP2.B2R2_S1CF  = 0;
		pt_mem->GROUP2.B2R2_S2CF  = 0;
		if (config->src_image.color_format == B2R2_YCBCR42XMBN)
		{
			/*Source1*/
			pt_mem->GROUP3.B2R2_SBA   = 0;
			pt_mem->GROUP3.B2R2_STY   = 0;
			pt_mem->GROUP3.B2R2_SXY   = 0;
			pt_mem->GROUP3.B2R2_SSZ   = 0;
		}
		else if (config->src_image.color_format == B2R2_YUV)
		{
			pt_mem->GROUP3.B2R2_SBA   = config->ppp_conf.source_chroma2_address;
			pt_mem->GROUP3.B2R2_STY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|(src_pixmap_pitch/2));
			pt_mem->GROUP3.B2R2_SXY   = ((config->src_window.top/2)<<B2R2_Y_SHIFT|((config->src_window.left+x_in_offset)/2));
			pt_mem->GROUP3.B2R2_SSZ   = (RESVD|(x_in_width/2)|(((config->src_window.height)/2)<<B2R2BLT_TSZWIN_HEIGHTShift));
		}
		/*Source2*/
		pt_mem->GROUP4.B2R2_SBA  = config->ppp_conf.source_chroma_address;
		if (config->src_image.color_format == B2R2_YCBCR42XMBN)
			pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		else if (config->src_image.color_format == B2R2_YUV)
			pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|(src_pixmap_pitch/2));
		pt_mem->GROUP4.B2R2_SXY  = ((config->src_window.top/2)<<B2R2_Y_SHIFT|((config->src_window.left+x_in_offset)/2));
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|(x_in_width/2)|(((config->src_window.height)/2)<<B2R2BLT_TSZWIN_HEIGHTShift));

		/*Source3*/
		pt_mem->GROUP5.B2R2_SBA  = config->ppp_conf.source_luma_address;
		pt_mem->GROUP5.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		pt_mem->GROUP5.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));
		pt_mem->GROUP5.B2R2_SSZ  = (RESVD|x_in_width|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		/*Clip*/
		pt_mem->GROUP6.B2R2_CWO  = 0;
		pt_mem->GROUP6.B2R2_CWS  = 0;

		/*Clut*/
		pt_mem->GROUP7.B2R2_CCO  = 0;
		pt_mem->GROUP7.B2R2_CML  = 0;

		pt_mem->GROUP8.B2R2_FCTL=0x22000044;
		pt_mem->GROUP8.B2R2_PMK =0;

		pt_mem->GROUP9.B2R2_RSF=(((luma_rsf/2)<<16)|(chroma_rsf/2));
		pt_mem->GROUP9.B2R2_RZI=0x30003000;
		pt_mem->GROUP9.B2R2_HFP=0;
		pt_mem->GROUP9.B2R2_VFP=0;

		pt_mem->GROUP10.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);
		pt_mem->GROUP10.B2R2_RZI=0x30003000;
		pt_mem->GROUP10.B2R2_HFP=0;
		pt_mem->GROUP10.B2R2_VFP=0;

		pt_mem->GROUP12.B2R2_KEY1=0;
		pt_mem->GROUP12.B2R2_KEY2=0;

		pt_mem->GROUP15.B2R2_VMX0 = 0x2C440000;//0x3324a800;
		pt_mem->GROUP15.B2R2_VMX1 = 0xE9A403AA;//0xe604ab9c;
		pt_mem->GROUP15.B2R2_VMX2 = 0x0004013F;//0x0004a957;
		pt_mem->GROUP15.B2R2_VMX3 = 0x34F21322;//0x32121eeb;

		x_in_offset+=128;
		x_out_offset+=x_out_width;
		if((i==no_of_nodes_multiple_of_128-1)&&(is_src_width_multiple_of_128))
		{
			pt_mem->GROUP0.B2R2_NIP= 0;
			//pt_mem->GROUP0.B2R2_INS  |=B2R2BLT_INSBlitCompIRQ ;
		}
		else
		{
			pt_mem++;
		}
	}

    /*For the node whose source width less than 128*/
	if(is_src_width_multiple_of_128==0)
	{
		pt_mem->GROUP0.B2R2_NIP= 0;

		pt_mem->GROUP0.B2R2_CIC   = 0xFFFF;
		if (config->src_image.color_format == B2R2_YCBCR42XMBN)
			pt_mem->GROUP0.B2R2_INS   = (B2R2BLT_INSIVMX|B2R2BLT_INS2DRESCALE|B2R2_SRC2_FETCH_MEM|B2R2_SRC3_FETCH_MEM);
		else if (config->src_image.color_format == B2R2_YUV)
			pt_mem->GROUP0.B2R2_INS   = (B2R2BLT_INSIVMX|B2R2BLT_INS2DRESCALE|B2R2_SRC2_FETCH_MEM|B2R2_SRC3_FETCH_MEM|B2R2_SRC1_FETCH_MEM);
		pt_mem->GROUP0.B2R2_ACK   =  B2R2_BYPASS_SRC2_SRC3;

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|dst_pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->dst_window.top<<B2R2_Y_SHIFT|(config->dst_window.left+x_out_offset));
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(config->dst_window.width-x_out_offset)|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		pt_mem->GROUP2.B2R2_S1CF  = 0;
		pt_mem->GROUP2.B2R2_S2CF  = 0;

		if (config->src_image.color_format == B2R2_YCBCR42XMBN)
		{
			/*Source1*/
			pt_mem->GROUP3.B2R2_SBA   = 0;
			pt_mem->GROUP3.B2R2_STY   = 0;
			pt_mem->GROUP3.B2R2_SXY   = 0;
			pt_mem->GROUP3.B2R2_SSZ   = 0;
		}
		else if (config->src_image.color_format == B2R2_YUV)
		{
			pt_mem->GROUP3.B2R2_SBA   = config->ppp_conf.source_chroma2_address;
			pt_mem->GROUP3.B2R2_STY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|(src_pixmap_pitch/2));
			pt_mem->GROUP3.B2R2_SXY   = ((config->src_window.top/2)<<B2R2_Y_SHIFT|((config->src_window.left+x_in_offset)/2));
			pt_mem->GROUP3.B2R2_SSZ   = (RESVD|((config->src_window.width-x_in_offset)/2)|((config->src_window.height/2)<<B2R2BLT_TSZWIN_HEIGHTShift));
		}

		/*Source2*/
		pt_mem->GROUP4.B2R2_SBA  = config->ppp_conf.source_chroma_address;
		if(config->src_image.color_format == B2R2_YCBCR42XMBN)
			pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		else if (config->src_image.color_format == B2R2_YUV)
			pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|(src_pixmap_pitch/2));
		pt_mem->GROUP4.B2R2_SXY  = ((config->src_window.top/2)<<B2R2_Y_SHIFT|((config->src_window.left+x_in_offset)/2));
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|((config->src_window.width-x_in_offset)/2)|((config->src_window.height/2)<<B2R2BLT_TSZWIN_HEIGHTShift));

		/*Source3*/
		pt_mem->GROUP5.B2R2_SBA  = config->ppp_conf.source_luma_address;
		pt_mem->GROUP5.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|src_pixmap_pitch);
		pt_mem->GROUP5.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left+x_in_offset));
		pt_mem->GROUP5.B2R2_SSZ  = (RESVD|(config->src_window.width-x_in_offset)|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));


		/*Clip*/
		pt_mem->GROUP6.B2R2_CWO  = 0;
		pt_mem->GROUP6.B2R2_CWS  = 0;

		/*Clut*/
		pt_mem->GROUP7.B2R2_CCO  = 0;
		pt_mem->GROUP7.B2R2_CML  = 0;

		pt_mem->GROUP8.B2R2_FCTL=0x22000044;
		pt_mem->GROUP8.B2R2_PMK =0;

		pt_mem->GROUP9.B2R2_RSF=(((luma_rsf/2)<<16)|(chroma_rsf/2));
		pt_mem->GROUP9.B2R2_RZI=0x30003000;
		pt_mem->GROUP9.B2R2_HFP=0;
		pt_mem->GROUP9.B2R2_VFP=0;

		pt_mem->GROUP10.B2R2_RSF=((luma_rsf<<16)|chroma_rsf);
		pt_mem->GROUP10.B2R2_RZI=0x30003000;
		pt_mem->GROUP10.B2R2_HFP=0;
		pt_mem->GROUP10.B2R2_VFP=0;

		pt_mem->GROUP12.B2R2_KEY1=0;
		pt_mem->GROUP12.B2R2_KEY2=0;

		pt_mem->GROUP15.B2R2_VMX0 = 0x2C440000;//0x3324a800;
		pt_mem->GROUP15.B2R2_VMX1 = 0xE9A403AA;//0xe604ab9c;
		pt_mem->GROUP15.B2R2_VMX2 = 0x0004013F;//0x0004a957;
		pt_mem->GROUP15.B2R2_VMX3 = 0x34F21322;//0x32121eeb;

	}

}

static unsigned int compute_the_horizontal_scale_factor(B2R2_RECT *psrc_window,
                                 B2R2_RECT *pdst_window,int *x_out_width)
{
	unsigned scale_fr=0;/*scale factor in 6.10 format*/

	scale_fr =((psrc_window->width*1024)/pdst_window->width);
	scale_fr&=0xFFFF;
	*x_out_width=(128*1024)/scale_fr;
#if DEBUG_PRINTF
	printf("%s\n",__FUNCTION__);
	printf("Horizontal scale_fr = %d, \n",scale_fr);
	printf("xoutwidth down= %d, \n",*x_out_width);
#endif

	return scale_fr;
}

static unsigned int compute_the_vertical_scale_factor(B2R2_RECT *psrc_window,\
                                 B2R2_RECT *pdst_window)
{
	unsigned scale_fr=0;/*scale factor in 6.10 format*/

	scale_fr =((psrc_window->height*1024)/pdst_window->height);
	scale_fr&=0xFFFF;

	return scale_fr;
}


static void configure_node_for_b2r2_op(b2r2_library *library,b2r2_configuration *config)
{

	b2r2_link_list *pt_mem;
	unsigned short  pixmap_pitch;

	pt_mem=(b2r2_link_list*)(config->NodeAdress);

	memset((unsigned char*)pt_mem,0,sizeof(b2r2_link_list));

	pt_mem->GROUP0.B2R2_NIP   = NEXT_NODE_NULL;
	pt_mem->GROUP0.B2R2_CIC   = 0x1FFF;
	pt_mem->GROUP0.B2R2_INS   = B2R2BLT_INSBlitCompIRQ;

    /*Configure sources and destinations*/
	if(config->dst_image.physical_address == 0)
	{
		pt_mem->GROUP0.B2R2_ACK =B2R2_BYPASS_SRC1;
		pt_mem->GROUP0.B2R2_INS |=B2R2_SRC1_FETCH_MEM;

		do_pixmap_pitch(config->src_image.color_format,config->src_image.width,&pixmap_pitch);

		pt_mem->GROUP1.B2R2_TBA   = config->src_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->src_window.top<<B2R2_Y_SHIFT|config->src_window.left);
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(config->src_window.width)|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		pt_mem->GROUP3.B2R2_SBA   = config->src_image.physical_address;
		pt_mem->GROUP3.B2R2_STY   = pt_mem->GROUP1.B2R2_TTY;
		pt_mem->GROUP3.B2R2_SXY   = pt_mem->GROUP1.B2R2_TXY;
		pt_mem->GROUP3.B2R2_SSZ   = pt_mem->GROUP1.B2R2_TSZ;

		if(config->is_color_fill_en)
		{
			pt_mem->GROUP0.B2R2_INS=B2R2_SRC1_DIRECT_FILL;
			pt_mem->GROUP2.B2R2_S2CF  = 0;
			pt_mem->GROUP2.B2R2_S1CF  = config->color_fill.color;
		}
	}
	else
	{
		do_pixmap_pitch(config->dst_image.color_format,config->dst_image.width,&pixmap_pitch);
		//printf("pixmap pitch is %x \n",pixmap_pitch);

		pt_mem->GROUP1.B2R2_TBA   = config->dst_image.physical_address;
		pt_mem->GROUP1.B2R2_TTY   = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->dst_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|pixmap_pitch);
		pt_mem->GROUP1.B2R2_TXY   =  (config->dst_window.top<<B2R2_Y_SHIFT|(config->dst_window.left));
		pt_mem->GROUP1.B2R2_TSZ   = (RESVD|(config->dst_window.width)|(config->dst_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

		if(config->is_alpha_blend_en)
		{
			pt_mem->GROUP0.B2R2_ACK |=((config->alpha_blend.val<<B2R2BLT_ACKGALPHA_ROPIDShift)|(config->alpha_blend.swap_fg_bg)|(config->alpha_blend.premuliplier));;
			pt_mem->GROUP0.B2R2_INS |=(B2R2_SRC2_FETCH_MEM|B2R2_SRC1_FETCH_MEM);

			pt_mem->GROUP1.B2R2_TTY |=config->alpha_blend.range<<B2R2_ALPHA_RANGE_SHIFT;

			pt_mem->GROUP3.B2R2_SBA   = pt_mem->GROUP1.B2R2_TBA;
			pt_mem->GROUP3.B2R2_STY   = pt_mem->GROUP1.B2R2_TTY;
			pt_mem->GROUP3.B2R2_SXY   = pt_mem->GROUP1.B2R2_TXY;
			pt_mem->GROUP3.B2R2_SSZ   = pt_mem->GROUP1.B2R2_TSZ;
		}
		else if(config->is_rop_ops_en)
		{
			pt_mem->GROUP0.B2R2_INS |=(B2R2_SRC2_FETCH_MEM|B2R2_SRC1_FETCH_MEM);
			pt_mem->GROUP0.B2R2_ACK |=((config->rop.logi_op<<B2R2BLT_ACKGALPHA_ROPIDShift)|B2R2_LOGICAL_OPER);

			pt_mem->GROUP3.B2R2_SBA   = pt_mem->GROUP1.B2R2_TBA;
			pt_mem->GROUP3.B2R2_STY   = pt_mem->GROUP1.B2R2_TTY;
			pt_mem->GROUP3.B2R2_SXY   = pt_mem->GROUP1.B2R2_TXY;
			pt_mem->GROUP3.B2R2_SSZ   = pt_mem->GROUP1.B2R2_TSZ;
		}
		else
		{
				pt_mem->GROUP0.B2R2_ACK |=B2R2_BYPASS_SRC2_SRC3;
				pt_mem->GROUP0.B2R2_INS |=B2R2_SRC2_FETCH_MEM;

				if(config->is_color_fill_en)
				{
					pt_mem->GROUP0.B2R2_INS |=B2R2_SRC2_COLOR_FILL;
					pt_mem->GROUP2.B2R2_S1CF  = 0;
					pt_mem->GROUP2.B2R2_S2CF  = config->color_fill.color;
				}
		}

		do_pixmap_pitch(config->src_image.color_format,config->src_image.width,&pixmap_pitch);

		pt_mem->GROUP4.B2R2_SBA  = config->src_image.physical_address;
		pt_mem->GROUP4.B2R2_STY  = (RESVD|(0<<B2R2_ALPHA_RANGE_SHIFT)|(config->src_image.color_format<<B2R2BLT_TTYCOLOR_FORMShift)|pixmap_pitch);
		pt_mem->GROUP4.B2R2_SXY  = (config->src_window.top<<B2R2_Y_SHIFT|(config->src_window.left));
		pt_mem->GROUP4.B2R2_SSZ  = (RESVD|(config->src_window.width)|(config->src_window.height<<B2R2BLT_TSZWIN_HEIGHTShift));

	}

	if(config->is_rect_clip_en)
	{
		pt_mem->GROUP0.B2R2_INS |=B2R2BLT_INSRECT_CLIP;


		pt_mem->GROUP6.B2R2_CWO  =((config->rect_clip.rect.top<<B2R2BLT_CWOYDOShift)| \
		                           				config->rect_clip.rect.left);
		pt_mem->GROUP6.B2R2_CWS  =(((config->rect_clip.rect.top+config->rect_clip.rect.height)<<B2R2BLT_CWSYDSShift)| \
		                         (config->rect_clip.rect.left+config->rect_clip.rect.width));

		if(config->rect_clip.clip_mode==B2R2_INSIDE_CLIP)
		{
			pt_mem->GROUP6.B2R2_CWO &=0x7FFFFFFF;
		}
		else
		{
		 	pt_mem->GROUP6.B2R2_CWO  |=(0x80000000);
		}
	}

	if(config->is_color_key_en)
	{
		pt_mem->GROUP0.B2R2_INS  |= B2R2BLT_INSCKEY;
		pt_mem->GROUP0.B2R2_ACK  |= (RESVD|(config->color_key.sel<<B2R2BLT_ACKCKEY_SELShift)| \
					((config->color_key.config.color.val & 0x3F)<<B2R2BLT_ACKACK_CKEYShift));   //Fetch from source2

		pt_mem->GROUP12.B2R2_KEY1   =
			 ((((config->color_key.color&0xFF000000)>>24)<<B2R2BLT_KEY1ALPHA0Shift)| \
			 ((((config->color_key.color&0xF800)>>11)<<3)<<B2R2BLT_KEY1RED_MINShift)| \
			 ((((config->color_key.color&0x07E0)>>5)<<2)<<B2R2BLT_KEY1GREEN_MINShift)| \
			 ((config->color_key.color&0x1F)<<3));

		pt_mem->GROUP12.B2R2_KEY2   =
				   ((((config->color_key.color&0xFF000000)>>24)<<B2R2BLT_KEY1ALPHA0Shift)| \
				 (((((config->color_key.color&0xF800)>>11)<<3)|0x7)<<B2R2BLT_KEY1RED_MINShift)| \
				 (((((config->color_key.color&0x07E0)>>5)<<2)|0x3)<<B2R2BLT_KEY1GREEN_MINShift)| \
				(((config->color_key.color&0x1F)<<3)|0x7));
	}
	return;

}

void debug_print_node_data(unsigned int node_addr,unsigned int sizeinwords)
{
	volatile unsigned int *pdata,i,temp;
	pdata =(unsigned int*)node_addr ;

	for(i=0;i<sizeinwords;i++)
	{
		printf("Address =0x%x  ,data=0x%x \n",pdata,*pdata);
		pdata++;
	}
}



int b2r2_library_operation_deconfigure(b2r2_library *library,b2r2_configuration *config)
{

  b2r2_driver_memory driver_memory;
  int size=config->no_of_nodes*sizeof(b2r2_link_list);

#if DEBUG_PRINTF
  printf("%s\n",__FUNCTION__);
#endif

  /**  Assign the size of memory */
  driver_memory.size_of_memory=size;
  driver_memory.physical_address=config->NodePhysicalAdress;

  /** Get the physical address of that memory */
  ioctl(library->file_pointer,B2R2_DEALLOCATE_MEMORY,&driver_memory);

  munmap(config->NodeAdress,size);

  return 0;
}










