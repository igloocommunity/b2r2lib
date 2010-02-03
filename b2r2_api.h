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



#ifndef __B2R2_API_H
#define __B2R2_API_H

#ifdef __cplusplus
extern "C" {
#endif /* _cplusplus */


/***************************** b2r2 library basic opertaions *************************/


/**

	b2r2 library instance handler

	Type : Structure

	Usage: Any task which uses B2R2 should this handler.
		   Multiple B2R2 operations can be invoked from
		   same library handler.

	Member: file_pointer: This is a handler to B2R2 driver.

*/

typedef struct b2r2_library
{
    int   file_pointer;


}b2r2_library;


/**

	b2r2 library memory handler

	Type : Structure

	Usage: Any task which wants to allocate memory should use
		   this structure.size of memory field should be populated.
		   and in turn from b2r2_library_allocate function
		   physical_address and logical address will be populated.

	Member: physical_address: physical address in unsigned int format
			logical_address : logical address in unsigned int format
			size_of_memory  : size of the memory in bytes.

*/

typedef struct b2r2_buffer_memory
{

	unsigned int physical_address;
	unsigned int logical_address;
	unsigned int size_of_memory;

}b2r2_buffer_memory;


/** b2r2 library instance API */

/**

	b2r2 library init

	Type : Public API

	Usage: Task should invoke this function before call
		   to any other function.This will initilize
		   one library instance.

	Parameters: In/Out : b2r2_library :b2r2 library instance handler

*/

void b2r2_library_init(b2r2_library*);

/**

	b2r2 library close

	Type : Public API

	Usage: Task should invoke this function after completed
		   all B2R2 operations to terminate.

	Parameters: In/Out : b2r2_library :b2r2 library instance handler

*/


void b2r2_library_close(b2r2_library*);


/** b2r2 library memory API */


/**

	b2r2 library allocate

	Type : Public API

	Usage: Task should invoke this function for
		   allocating the memory from kernel space
		   This memory in general can be used for input/output
		   buffers

	Parameters: In : b2r2_library :b2r2 library instance handler
				In/Out : b2r2_buffer_memory :b2r2 library memory handler

*/

void b2r2_library_allocate(b2r2_library*,b2r2_buffer_memory*);


/**

	b2r2 library deallocate

	Type : Public API

	Usage: Task should invoke this function for
		   deallocating the memory from kernel space

	Parameters: In : b2r2_library :b2r2 library instance handler
				In/Out : b2r2_buffer_memory :b2r2 library memory handler
*/


void b2r2_library_deallocate(b2r2_library*,b2r2_buffer_memory*);

/**************************************************************************************/


/************************ b2r2 operations *********************************************/

/**

	b2r2 gfx color format

	Type : Enumeration

	Usage: This enum is used to identify the color format used.

*/




typedef enum
{
	B2R2_RGB565     	= 0,
	B2R2_RGB888			= 1,
	B2R2_ARGB8565		= 4,
	B2R2_ARGB8888		= 5,
	B2R2_ARGB1555		= 6,
	B2R2_ARGB4444		= 7,
	B2R2_YCBCR888		= 16,
	B2R2_YCBCR422R		= 18,
    B2R2_AYCBCR8888		= 21,
    B2R2_YCBCR42XMB		= 20,
    B2R2_YCBCR42XR2B	= 22,
    B2R2_YCBCR42XMBN	= 14,
    B2R2_CLUT1			= 8,
    B2R2_CLUT2			= 9,
    B2R2_CLUT4			= 10,
    B2R2_CLUT8			= 11,
    B2R2_ACLUT44		= 12,
    B2R2_ACLUT88		= 13,
    B2R2_A1				= 24,
    B2R2_A8				= 25,
	B2R2_YUV			= 30

}b2r2_gfx_color_form;


/**

	b2r2 postprocessor rot type

	Type : Enumeration

	Usage: This enum is used to identify the type of rotation

*/



typedef enum
{
	B2R2_ROT_0  =0,
	B2R2_ROT_90 = 1,
	B2R2_ROT_180 = 2,
	B2R2_ROT_270 = 3,
	B2R2_CLOCKWISE_ROT_270=B2R2_ROT_90,
	B2R2_CLOCKWISE_ROT_90=B2R2_ROT_270,
	B2R2_CLOCKWISE_ROT_180=B2R2_ROT_180

}b2r2_postprocessor_rot_type;


/**

	b2r2 colour fill

	Type : Enumeration

	Usage: This enum is used to identify the color fill

*/


typedef enum
{
	B2R2_COLOUR_FILL_DISABLE = 0,
	B2R2_COLOUR_FILL_ENABLE  = 1

}B2R2_COLOUR_FILL;


/**

	b2r2 colour key

	Type : Enumeration

	Usage: This enum is used to identify the color key

*/

typedef enum
{
	B2R2_COLOUR_KEY_DISABLE = 0,
	B2R2_COLOUR_KEY_ENABLE  = 1

}B2R2_COLOUR_KEY;


/**

	b2r2 alpha blending

	Type : Enumeration

	Usage: This enum is used to identify the alpha blending

*/

typedef enum
{
	B2R2_ALPHA_BLENDING_DISABLE = 0,
	B2R2_ALPHA_BLENDING_ENABLE  = 1

}B2R2_ALPHA_BLENDING;


/**

	b2r2 rectangular clip

	Type : Enumeration

	Usage: This enum is used to identify the rectangular clipping

*/

typedef enum
{
	B2R2_RECTANGULAR_CLIP_DISABLE = 0,
	B2R2_RECTANGULAR_CLIP_ENABLE  = 1

}B2R2_RECTANGULAR_CLIP;


/**

	b2r2 rop

	Type : Enumeration

	Usage: This enum is used to identify the boolean operations

*/


typedef enum
{
	B2R2_ROP_DISABLE = 0,
	B2R2_ROP_ENABLE  = 1

}B2R2_ROP;


/**

	b2r2 color key sel

	Type : Enumeration

	Usage: This enum is used to identify the color key selection

*/


typedef enum
{
	B2R2_DEST_COLOR_KEY = 0,
	B2R2_SRC_COLOR_KEY_BEFORE_CLUT = 1,
	B2R2_SRC_COLOR_KEY_AFTER_CLUT = 2,
	B2R2_BLANKING_SRC_ALPHA = 3
}B2R2_COLOR_KEY_SEL;


/**

	b2r2 blend swap fg bg

	Type : Enumeration

	Usage: This enum is used to identify foreground or background

*/



typedef enum
{
	B2R2_BLEND_SWAP_FG_BG_DISABLE=0,
	B2R2_BLEND_SWAP_FG_BG_ENABLE=1

}B2R2_BLEND_SWAP_FG_BG;


/**

	b2r2 blend fg premultiplier

	Type : Enumeration

	Usage: This enum is used to identify foreground premultiplier

*/



typedef enum
{
	B2R2_BLENDING_FG_NOT_PREMULT = 2,
	B2R2_BLENDING_FG_PREMULT	 = 3

}B2R2_BLEND_FG_PREMULTIPLIER;



/**

	b2r2 blend alpha range

	Type : Enumeration

	Usage: This enum is used to identify blending alpha range

*/


typedef enum
{
	B2R2_ALPHA_RANGE_0_128 = 0,
	B2R2_ALPHA_RANGE_0_255 = 1

}B2R2_BLEND_ALPHA_RANGE;


/**

	b2r2 logical op

	Type : Enumeration

	Usage: This enum is used to identify logical operations

*/


typedef enum
{
    B2R2_ALU_CLEAR            = 0,
    B2R2_ALU_AND              = 1,
    B2R2_ALU_AND_REV          = 2,
    B2R2_ALU_COPY             = 3,
    B2R2_ALU_AND_INVERT       = 4,
    B2R2_ALU_NOOP             = 5,
    B2R2_ALU_XOR              = 6,
    B2R2_ALU_OR               = 7,
    B2R2_ALU_NOR              = 8,
    B2R2_ALU_EQUIV            = 9,
    B2R2_ALU_INVERT           = 10,
    B2R2_ALU_OR_REVERSE       = 11,
    B2R2_ALU_COPY_INVERT      = 12,
    B2R2_ALU_OR_INVERT        = 13,
    B2R2_ALU_NAND             = 14,
    B2R2_ALU_SET              = 15,
    B2R2_ALU_ALPHA_BLEND      = 16

} b2r2_logical_op;


/**

	b2r2 update params

	Type : Enumeration

	Usage: This enum is used to identify update parameters

*/

typedef enum
{
	B2R2_FILL_COLOR_OP_PARAMS 	=0,
	B2R2_ALPHA_BLEND_OP_PARAMS  =1,
	B2R2_COLOR_KEY_OP_PARMS     =2,
	B2R2_ROTATION_OP_PARAMS     =3,
	B2R2_CLIP_OP_PARAMS         =4,
	B2R2_RESIZE_OP_PARAMS       =5,
	B2R2_ROP_OP_PARAMS          =6,
	B2R2_COLOR_CONVERSION_OF_PARAMS = 7,
	B2R2_DESTINATION_ADDRESS_OF_PARAMS = 8,
	B2R2_SOURCE_ADDRESS_OF_PARAMS	= 9

}B2R2_UPDATE_PARAMS;


/**

	b2r2 clip mode

	Type : Enumeration

	Usage: This enum is used to identify clip mode

*/


typedef enum
{
	B2R2_INSIDE_CLIP   = 0,
	B2R2_OUTSIDE_CLIP  = 1

}B2R2_CLIP_MODE;


/**

	b2r2 job prority

	Type : Enumeration

	Usage: This enum is used to identify priority of b2r2 job

*/



typedef enum
{

B2R2_PRIORITY_1=0x1,
B2R2_PRIORITY_2=0x2,
B2R2_PRIORITY_3=0x4,
B2R2_PRIORITY_4=0x8,
B2R2_PRIORITY_5=0xc,
B2R2_PRIORITY_6=0x10,
B2R2_PRIORITY_7=0x20

}b2r2_job_priority;



/**

	b2r2 rect

	Type : Structure

	Usage: This structure is used to define a
	       rectangular position.This will
	       start from top & left location of a frame.

	Member: left: left location
	        top : top location
	        width: width of rectangle
	        height: height of rectangle
*/



typedef struct
{
	unsigned int left;
	unsigned int top;
	unsigned int width;
	unsigned int height;

}B2R2_RECT,*PB2R2_RECT;



/**

	b2r2 point

	Type : Structure

	Usage: This structure is used to define
	       a pixel location in a frame

	Member: xpos : x-axis position
            ypos : y-axis position
*/


typedef struct
{
	unsigned int xpos;
	unsigned int ypos;

}B2R2_POINT,*PB2R2_POINT;



/**

	b2r2 job params

	Type : Structure

	Usage: This structure is used to define
	       job parameters of B2R2

	Member: job_logical_address: job logical address
            job_physical_address: job physical address
            job_pace_lna_physical_address: job last node physical address
            job_size: job size
            jobid:  job ID
*/



typedef struct
{
	unsigned int  job_logical_address;
	unsigned int  job_physical_address;
	unsigned int  job_pace_lna_physical_address;
	unsigned int  job_size;
	unsigned int  jobid;
	b2r2_job_priority priority;
}B2R2_JOB_PARAMS;



/**

	b2r2 colour fill params

	Type : Structure

	Usage: This structure is used to define
	       color fill parameters

	Member: enable : enable
	        color  : color
*/



typedef struct
{
	unsigned char enable;
	unsigned int color;

}B2R2_COLOUR_FILL_PARAMS;


/**

	b2r2 color key config

	Type : Structure

	Usage: This structure is used to define
	       color configfuration

	Member: color :red,green and blue color configurations.
*/



typedef struct
{
	union
	{
		unsigned char red:2;
		unsigned char green:2;
		unsigned char blue:2;
		unsigned char resv:2;

		unsigned char val;
	}color;

}B2R2_COLOR_KEY_CONFIG;



/**

	b2r2 colour key params

	Type : Structure

	Usage: This structure is used to define
	       color key parameters

	Member: enable :color key enable
	        val    :color key value
	        config :color key configuration
	        color  :color
*/



typedef struct
{
	unsigned char enable;
	B2R2_COLOR_KEY_SEL sel;
	B2R2_COLOR_KEY_CONFIG config;
	unsigned int color;

}B2R2_COLOUR_KEY_PARAMS;


/**

	b2r2 blend params

	Type : Structure

	Usage: This structure is used to define
	       blending parameters

	Member: enable :blending enable
	        val    :blending value
	        range : blending range
	        swap_fg_bg  :foreground or background
	        premuliplier : premultiplier
*/


typedef struct
{
	unsigned char       enable;
	unsigned char       val;
	B2R2_BLEND_ALPHA_RANGE       range;
	B2R2_BLEND_SWAP_FG_BG        swap_fg_bg;
	B2R2_BLEND_FG_PREMULTIPLIER  premuliplier;

}B2R2_BLEND_PARAMS;



/**

	b2r2 rectangular clip params

	Type : Structure

	Usage: This structure is used to define
	       rectangular clipping parameters

	Member: enable :rectangular clipping enable
	        clip_mode  : cliping mode
	        rect : cliping rectangle

*/




typedef struct
{
	unsigned char enable;
	B2R2_CLIP_MODE    clip_mode;
	B2R2_RECT         rect;

}B2R2_RECTANGULAR_CLIP_PARAMS;




/**

	b2r2 rop params

	Type : Structure

	Usage: This structure is used to define
	       rop parameters

	Member: enable :rop enable
            logi_op : logical operatiion

*/



typedef struct
{
	unsigned char enable;
	b2r2_logical_op   logi_op;

}B2R2_ROP_PARAMS;



/**

	b2r2 image data

	Type : Structure

	Usage: This structure is used to define
	       image data

	Member: color_format : color format
	        physical_address : physical address
	        width : width of the image
	        height : height of the image


*/



typedef struct
{
	b2r2_gfx_color_form   color_format;
	unsigned int          physical_address;
	unsigned int          width;
	unsigned int          height;
}B2R2_IMAGE_DATA,*PB2R2_IMAGE_DATA;



/**

	b2r2 postprocessor conf

	Type : Structure

	Usage: This structure is used to define
	       postprocessor configuration

	Member: source_chroma_address : chroma address
	        source_chroma2_address : chroma 2 address
	        source_luma_address : luma address

*/



typedef struct {

	unsigned int  source_chroma_address;
	unsigned int  source_chroma2_address;
	unsigned int  source_luma_address;

} b2r2_postprocessor_conf;


/**

	b2r2 window params

	Type : Structure

	Usage: This structure is used to define
	       window parameters

	Member: src_window : source window
	        dst_window : destination window
	        clip_window : clip window

*/


typedef struct
{
	B2R2_RECT             src_window;
	B2R2_RECT             dst_window;
	B2R2_RECT             clip_window;

}B2R2_WINDOW_PARAMS;



/**

	b2r2 update params val

	Type : Structure

	Usage: This structure is used to define
	       update parameters

	Member: val : val parameter
	        window_params : window parameters
	        ppp_params : post processor parameters

*/



typedef struct
{
	unsigned int val;

	B2R2_WINDOW_PARAMS window_params;
	b2r2_postprocessor_conf ppp_params;

}B2R2_UPDATE_PARAMS_VAL;



/**

	b2r2 configuration

	Type : Structure

	Usage: This structure is used to define
	       b2r2 configuraion.Multiple configuartions can be
	       used for implementing multiple B2R2 operations

	Member: src_image :	source image data
	        dst_image :	destination image data
	        src_window : source window
	        dst_window : destination window

	        rotation:   rotation parameters
	        ppp_conf:	post-processor parameters
	        color_fill:	color fill parameters
	        color_key:	color key parameters
	        alpha_blend:alpha blending parameters
	        rect_clip:	rectangular clipping parameters
	        rop:		rop parameters
	        job:		job parameters

	        NodeAdress:	node addess of configuration
	        NodePhysicalAdress: node physical addess of configuration
	        last_nodeAdress:  last-node addess of configuration
	        no_of_nodes: number of nodes of the configuration

	        is_resize: is resize operation there in configuration
	        is_rotation: is rotation operation there in configuration
	        is_color_conversion: is color conversion operation there in configuration
	        is_color_key_en: is color_key operation there in configuration
	        is_alpha_blend_en: is alpha_blend operation there in configuration
	        is_rect_clip_en: is rect_clip operation there in configuration
	        is_color_fill_en: is color_fill operation there in configuration
	        is_rop_ops_en: is rop_ops operation there in configuration

*/




typedef struct
{
	B2R2_IMAGE_DATA       src_image;
	B2R2_IMAGE_DATA       dst_image;
	B2R2_RECT             src_window;
	B2R2_RECT             dst_window;

	/** Rotation mode */
	b2r2_postprocessor_rot_type rotation;
	/** post processor configuration */
	b2r2_postprocessor_conf ppp_conf;
	/** Color fill*/
	B2R2_COLOUR_FILL_PARAMS  color_fill;
	/** Color key*/
	B2R2_COLOUR_KEY_PARAMS color_key;
	 /** Alpha blending*/
	B2R2_BLEND_PARAMS alpha_blend;
	 /** Rectangular clipping*/
	B2R2_RECTANGULAR_CLIP_PARAMS rect_clip;
	/** Rop Operations params*/
	B2R2_ROP_PARAMS  rop;

	B2R2_JOB_PARAMS     job;


    unsigned int   NodeAdress;
    unsigned int   NodePhysicalAdress;
    unsigned int   last_nodeAdress;
    unsigned char  no_of_nodes;
    unsigned char  is_resize;
    unsigned char  is_rotation;
    unsigned char  is_color_conversion;
    unsigned char  is_color_key_en;
    unsigned char  is_alpha_blend_en;
    unsigned char  is_rect_clip_en;
    unsigned char  is_color_fill_en;
    unsigned char  is_rop_ops_en;


}b2r2_configuration;



/**

	b2r2 library operation configure

	Type : Public API

	Usage: Task should invoke this function for one B2R2 configuration
	       Libary will make job linked list for the corresponding operation.
	       Memory for that particular job is allocated in library itself.

	Parameters: In/Out : b2r2_library :b2r2 library instance handler
	            In/Out : b2r2_configuration :b2r2 library configuration

*/



int b2r2_library_operation_configure(b2r2_library *library,b2r2_configuration *config);


/**

	b2r2 library operation deconfigure

	Type : Public API

	Usage: Task should invoke this function after B2R2 configuraion is no
	       more used.It will internal memory deallocation.

	Parameters: In/Out : b2r2_library :b2r2 library instance handler
	            In/Out : b2r2_configuration :b2r2 library configuration

*/



int b2r2_library_operation_deconfigure(b2r2_library *library,b2r2_configuration *config);



/**

	b2r2 library update params

	Type : Public API

	Usage: Task should invoke this function if parameter in b2r2 configuartion
	       need to be changed without creating a new configuration.

	Parameters: In/Out : b2r2_library :b2r2 library instance handler
	            In/Out : b2r2_configuration :b2r2 library configuration
	            In     : b2r2_update_params : Update parameters
	            In     : b2r2_update_params_val: Updated value

*/

void b2r2_library_update_params(b2r2_library *library,b2r2_configuration *config,
                                B2R2_UPDATE_PARAMS params,B2R2_UPDATE_PARAMS_VAL *pVal);


/**

	b2r2 library do operation

	Type : Public API

	Usage: Task should invoke this function to execute the job with configuration.
	       This call will not wait till the job is finished.(non-blocking call)

	Parameters: In/Out : b2r2_library :b2r2 library instance handler
	            In/Out : b2r2_configuration :b2r2 library configuration

*/


void b2r2_library_do_operation(b2r2_library *library,b2r2_configuration *config
                   );


/**

	b2r2 library operation done

	Type : Public API

	Usage: Task should invoke this function to remove the job finshed with configuration.
	       This call will self-suspend the called task unless job is finished.(blocking call on suspend)

	Parameters: In/Out : b2r2_library :b2r2 library instance handler
	            In/Out : b2r2_configuration :b2r2 library configuration

*/

void b2r2_library_operation_done(b2r2_library *library,b2r2_configuration *config);



#ifdef __cplusplus
}
#endif /* _cplusplus */

#endif /* !defined(__B2R2_API_H) */

