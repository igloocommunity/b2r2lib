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



#ifndef __B2R2_GLOBAL_H
#define __B2R2_GLOBAL_H


#ifdef __cplusplus
extern "C" {
#endif



#define PITCH_1BYTE			0x1
#define PITCH_2BYTE			0x2
#define PITCH_3BYTE			0x3
#define PITCH_4BYTE			0x4

#define RESVD				    (0x00000000)
#define NEXT_NODE_NULL			(0x00000000)


/* Register values */

/* - BLT_SSBA17 */
#define	B2R2BLT_SSBA17SSBA17_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA17SSBA17_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA17SSBA17_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA17SSBA17_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA17Mask		(0xffffffff)
#define	B2R2BLT_SSBA17TestMask		(0xffffffff)
#define	B2R2BLT_SSBA17InitialValue	(0x0)
#define	B2R2BLT_SSBA17AccessType	(RW)
#define	B2R2BLT_SSBA17			(0x900)

/* - BLT_SSBA18 */
#define	B2R2BLT_SSBA18SSBA18_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA18SSBA18_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA18SSBA18_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA18SSBA18_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA18Mask		(0xffffffff)
#define	B2R2BLT_SSBA18TestMask		(0xffffffff)
#define	B2R2BLT_SSBA18InitialValue	(0x0)
#define	B2R2BLT_SSBA18AccessType	(RW)
#define	B2R2BLT_SSBA18			(0x904)

/* - BLT_SSBA19 */
#define	B2R2BLT_SSBA19SSBA19_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA19SSBA19_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA19SSBA19_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA19SSBA19_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA19Mask		(0xffffffff)
#define	B2R2BLT_SSBA19TestMask		(0xffffffff)
#define	B2R2BLT_SSBA19InitialValue	(0x0)
#define	B2R2BLT_SSBA19AccessType	(RW)
#define	B2R2BLT_SSBA19			(0x908)

/* - BLT_SSBA20 */
#define	B2R2BLT_SSBA20SSBA20_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA20SSBA20_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA20SSBA20_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA20SSBA20_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA20Mask		(0xffffffff)
#define	B2R2BLT_SSBA20TestMask		(0xffffffff)
#define	B2R2BLT_SSBA20InitialValue	(0x0)
#define	B2R2BLT_SSBA20AccessType	(RW)
#define	B2R2BLT_SSBA20			(0x90c)

/* - BLT_SSBA21 */
#define	B2R2BLT_SSBA21SSBA21_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA21SSBA21_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA21SSBA21_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA21SSBA21_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA21Mask		(0xffffffff)
#define	B2R2BLT_SSBA21TestMask		(0xffffffff)
#define	B2R2BLT_SSBA21InitialValue	(0x0)
#define	B2R2BLT_SSBA21AccessType	(RW)
#define	B2R2BLT_SSBA21			(0x910)

/* - BLT_SSBA22 */
#define	B2R2BLT_SSBA22SSBA22_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA22SSBA22_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA22SSBA22_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA22SSBA22_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA22Mask		(0xffffffff)
#define	B2R2BLT_SSBA22TestMask		(0xffffffff)
#define	B2R2BLT_SSBA22InitialValue	(0x0)
#define	B2R2BLT_SSBA22AccessType	(RW)
#define	B2R2BLT_SSBA22			(0x914)

/* - BLT_SSBA23 */
#define	B2R2BLT_SSBA23SSBA23_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA23SSBA23_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA23SSBA23_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA23SSBA23_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA23Mask		(0xffffffff)
#define	B2R2BLT_SSBA23TestMask		(0xffffffff)
#define	B2R2BLT_SSBA23InitialValue	(0x0)
#define	B2R2BLT_SSBA23AccessType	(RW)
#define	B2R2BLT_SSBA23			(0x918)

/* - BLT_SSBA24 */
#define	B2R2BLT_SSBA24SSBA24_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA24SSBA24_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA24SSBA24_Mem_address	(0x3ffffff)
#define	B2R2BLT_SSBA24SSBA24_Mem_addressShift	(0x0)
#define	B2R2BLT_SSBA24Mask		(0xffffffff)
#define	B2R2BLT_SSBA24TestMask		(0xffffffff)
#define	B2R2BLT_SSBA24InitialValue	(0x0)
#define	B2R2BLT_SSBA24AccessType	(RW)
#define	B2R2BLT_SSBA24			(0x91c)

/* - BLT_STBA5 */
#define	B2R2BLT_STBA5STBA5_bank_num	(0xfc000000)
#define	B2R2BLT_STBA5STBA5_bank_numShift	(0x1a)
#define	B2R2BLT_STBA5STBA5_Mem_address	(0x3ffffff)
#define	B2R2BLT_STBA5STBA5_Mem_addressShift	(0x0)
#define	B2R2BLT_STBA5Mask		(0xffffffff)
#define	B2R2BLT_STBA5TestMask		(0xffffffff)
#define	B2R2BLT_STBA5InitialValue	(0x0)
#define	B2R2BLT_STBA5AccessType		(RW)
#define	B2R2BLT_STBA5			(0x940)

/* - BLT_STBA6 */
#define	B2R2BLT_STBA6STBA6_bank_num	(0xfc000000)
#define	B2R2BLT_STBA6STBA6_bank_numShift	(0x1a)
#define	B2R2BLT_STBA6STBA6_Mem_address	(0x3ffffff)
#define	B2R2BLT_STBA6STBA6_Mem_addressShift	(0x0)
#define	B2R2BLT_STBA6Mask		(0xffffffff)
#define	B2R2BLT_STBA6TestMask		(0xffffffff)
#define	B2R2BLT_STBA6InitialValue	(0x0)
#define	B2R2BLT_STBA6AccessType		(RW)
#define	B2R2BLT_STBA6			(0x944)

/* - BLT_STBA7 */
#define	B2R2BLT_STBA7STBA7_bank_num	(0xfc000000)
#define	B2R2BLT_STBA7STBA7_bank_numShift	(0x1a)
#define	B2R2BLT_STBA7STBA7_Mem_address	(0x3ffffff)
#define	B2R2BLT_STBA7STBA7_Mem_addressShift	(0x0)
#define	B2R2BLT_STBA7Mask		(0xffffffff)
#define	B2R2BLT_STBA7TestMask		(0xffffffff)
#define	B2R2BLT_STBA7InitialValue	(0x0)
#define	B2R2BLT_STBA7AccessType		(RW)
#define	B2R2BLT_STBA7			(0x948)

/* - BLT_STBA8 */
#define	B2R2BLT_STBA8STBA8_bank_num	(0xfc000000)
#define	B2R2BLT_STBA8STBA8_bank_numShift	(0x1a)
#define	B2R2BLT_STBA8STBA8_Mem_address	(0x3ffffff)
#define	B2R2BLT_STBA8STBA8_Mem_addressShift	(0x0)
#define	B2R2BLT_STBA8Mask		(0xffffffff)
#define	B2R2BLT_STBA8TestMask		(0xffffffff)
#define	B2R2BLT_STBA8InitialValue	(0x0)
#define	B2R2BLT_STBA8AccessType		(RW)
#define	B2R2BLT_STBA8			(0x94c)

/* - BLT_CTL */
#define	B2R2BLT_CTLGLOBAL_soft_reset	(0x80000000)
#define	B2R2BLT_CTLStep_By_Step		(0x20000000)
#define	B2R2BLT_CTLBig_not_little	(0x10000000)
#define	B2R2BLT_CTLMask			(0xb0000000)
#define	B2R2BLT_CTLTestMask		(0xb0000000)
#define	B2R2BLT_CTLInitialValue		(0x0)
#define	B2R2BLT_CTLAccessType		(INITIAL_TEST)
#define	B2R2BLT_CTL			(0xa00)

/* - BLT_ITS */
#define	B2R2BLT_ITSRLD_ERROR		(0x80000000)
#define	B2R2BLT_ITSAQ4_Node_Notif	(0x8000000)
#define	B2R2BLT_ITSAQ4_Node_repeat	(0x4000000)
#define	B2R2BLT_ITSAQ4_Stopped		(0x2000000)
#define	B2R2BLT_ITSAQ4_LNA_Reached	(0x1000000)
#define	B2R2BLT_ITSAQ3_Node_Notif	(0x800000)
#define	B2R2BLT_ITSAQ3_Node_repeat	(0x400000)
#define	B2R2BLT_ITSAQ3_Stopped		(0x200000)
#define	B2R2BLT_ITSAQ3_LNA_Reached	(0x100000)
#define	B2R2BLT_ITSAQ2_Node_Notif	(0x80000)
#define	B2R2BLT_ITSAQ2_Node_repeat	(0x40000)
#define	B2R2BLT_ITSAQ2_Stopped		(0x20000)
#define	B2R2BLT_ITSAQ2_LNA_Reached	(0x10000)
#define	B2R2BLT_ITSAQ1_Node_Notif	(0x8000)
#define	B2R2BLT_ITSAQ1_Node_repeat	(0x4000)
#define	B2R2BLT_ITSAQ1_Stopped		(0x2000)
#define	B2R2BLT_ITSAQ1_LNA_Reached	(0x1000)
#define	B2R2BLT_ITSCQ2_Repaced		(0x80)
#define	B2R2BLT_ITSCQ2_Node_Notif	(0x40)
#define	B2R2BLT_ITSCQ2_retriggered	(0x20)
#define	B2R2BLT_ITSCQ2_completed	(0x10)
#define	B2R2BLT_ITSCQ1_Repaced		(0x8)
#define	B2R2BLT_ITSCQ1_Node_Notif	(0x4)
#define	B2R2BLT_ITSCQ1_retriggered	(0x2)
#define	B2R2BLT_ITSCQ1_completed	(0x1)
#define	B2R2BLT_ITSMask			(0x8ffff0ff)
#define	B2R2BLT_ITSTestMask		(0x8ffff0ff)
#define	B2R2BLT_ITSInitialValue		(0x0)
#define	B2R2BLT_ITSAccessType		(INITIAL_TEST)
#define	B2R2BLT_ITS			(0xa04)

/* - BLT_STA1 */
#define	B2R2BLT_STA1BDISP_IDLE		(0x1)
#define	B2R2BLT_STA1Mask		(0x1)
#define	B2R2BLT_STA1TestMask		(0x1)
#define	B2R2BLT_STA1InitialValue	(0x1)
#define	B2R2BLT_STA1AccessType		(INITIAL_TEST)
#define	B2R2BLT_STA1			(0xa08)

/* - BLT_SSBA1 */
#define	B2R2BLT_SSBA1SSBA1_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA1SSBA1_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA1SSBA1_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA1SSBA1_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA1Mask		(0xffffffff)
#define	B2R2BLT_SSBA1TestMask		(0xffffffff)
#define	B2R2BLT_SSBA1InitialValue	(0x0)
#define	B2R2BLT_SSBA1AccessType		(RW)
#define	B2R2BLT_SSBA1			(0xa10)

/* - BLT_SSBA2 */
#define	B2R2BLT_SSBA2SSBA2_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA2SSBA2_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA2SSBA2_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA2SSBA2_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA2Mask		(0xffffffff)
#define	B2R2BLT_SSBA2TestMask		(0xffffffff)
#define	B2R2BLT_SSBA2InitialValue	(0x0)
#define	B2R2BLT_SSBA2AccessType		(RW)
#define	B2R2BLT_SSBA2			(0xa14)

/* - BLT_SSBA3 */
#define	B2R2BLT_SSBA3SSBA3_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA3SSBA3_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA3SSBA3_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA3SSBA3_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA3Mask		(0xffffffff)
#define	B2R2BLT_SSBA3TestMask		(0xffffffff)
#define	B2R2BLT_SSBA3InitialValue	(0x0)
#define	B2R2BLT_SSBA3AccessType		(RW)
#define	B2R2BLT_SSBA3			(0xa18)

/* - BLT_SSBA4 */
#define	B2R2BLT_SSBA4SSBA4_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA4SSBA4_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA4SSBA4_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA4SSBA4_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA4Mask		(0xffffffff)
#define	B2R2BLT_SSBA4TestMask		(0xffffffff)
#define	B2R2BLT_SSBA4InitialValue	(0x0)
#define	B2R2BLT_SSBA4AccessType		(RW)
#define	B2R2BLT_SSBA4			(0xa1c)

/* - BLT_SSBA5 */
#define	B2R2BLT_SSBA5SSBA5_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA5SSBA5_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA5SSBA5_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA5SSBA5_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA5Mask		(0xffffffff)
#define	B2R2BLT_SSBA5TestMask		(0xffffffff)
#define	B2R2BLT_SSBA5InitialValue	(0x0)
#define	B2R2BLT_SSBA5AccessType		(RW)
#define	B2R2BLT_SSBA5			(0xa20)

/* - BLT_SSBA6 */
#define	B2R2BLT_SSBA6SSBA6_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA6SSBA6_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA6SSBA6_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA6SSBA6_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA6Mask		(0xffffffff)
#define	B2R2BLT_SSBA6TestMask		(0xffffffff)
#define	B2R2BLT_SSBA6InitialValue	(0x0)
#define	B2R2BLT_SSBA6AccessType		(RW)
#define	B2R2BLT_SSBA6			(0xa24)

/* - BLT_SSBA7 */
#define	B2R2BLT_SSBA7SSBA7_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA7SSBA7_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA7SSBA7_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA7SSBA7_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA7Mask		(0xffffffff)
#define	B2R2BLT_SSBA7TestMask		(0xffffffff)
#define	B2R2BLT_SSBA7InitialValue	(0x0)
#define	B2R2BLT_SSBA7AccessType		(RW)
#define	B2R2BLT_SSBA7			(0xa28)

/* - BLT_SSBA8 */
#define	B2R2BLT_SSBA8SSBA8_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA8SSBA8_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA8SSBA8_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA8SSBA8_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA8Mask		(0xffffffff)
#define	B2R2BLT_SSBA8TestMask		(0xffffffff)
#define	B2R2BLT_SSBA8InitialValue	(0x0)
#define	B2R2BLT_SSBA8AccessType		(RW)
#define	B2R2BLT_SSBA8			(0xa2c)

/* - BLT_STBA1 */
#define	B2R2BLT_STBA1STBA1_bank_num	(0xfc000000)
#define	B2R2BLT_STBA1STBA1_bank_numShift	(0x1a)
#define	B2R2BLT_STBA1STBA1_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_STBA1STBA1_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_STBA1Mask		(0xffffffff)
#define	B2R2BLT_STBA1TestMask		(0xffffffff)
#define	B2R2BLT_STBA1InitialValue	(0x0)
#define	B2R2BLT_STBA1AccessType		(RW)
#define	B2R2BLT_STBA1			(0xa30)

/* - BLT_STBA2 */
#define	B2R2BLT_STBA2STBA2_bank_num	(0xfc000000)
#define	B2R2BLT_STBA2STBA2_bank_numShift	(0x1a)
#define	B2R2BLT_STBA2STBA2_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_STBA2STBA2_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_STBA2Mask		(0xffffffff)
#define	B2R2BLT_STBA2TestMask		(0xffffffff)
#define	B2R2BLT_STBA2InitialValue	(0x0)
#define	B2R2BLT_STBA2AccessType		(RW)
#define	B2R2BLT_STBA2			(0xa34)

/* - BLT_STBA3 */
#define	B2R2BLT_STBA3STBA3_bank_num	(0xfc000000)
#define	B2R2BLT_STBA3STBA3_bank_numShift	(0x1a)
#define	B2R2BLT_STBA3STBA3_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_STBA3STBA3_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_STBA3Mask		(0xffffffff)
#define	B2R2BLT_STBA3TestMask		(0xffffffff)
#define	B2R2BLT_STBA3InitialValue	(0x0)
#define	B2R2BLT_STBA3AccessType		(RW)
#define	B2R2BLT_STBA3			(0xa38)

/* - BLT_STBA4 */
#define	B2R2BLT_STBA4STBA4_bank_num	(0xfc000000)
#define	B2R2BLT_STBA4STBA4_bank_numShift	(0x1a)
#define	B2R2BLT_STBA4STBA4_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_STBA4STBA4_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_STBA4Mask		(0xffffffff)
#define	B2R2BLT_STBA4TestMask		(0xffffffff)
#define	B2R2BLT_STBA4InitialValue	(0x0)
#define	B2R2BLT_STBA4AccessType		(RW)
#define	B2R2BLT_STBA4			(0xa3c)

/* - BLT_CQ1_TRIG_IP */
#define	B2R2BLT_CQ1_TRIG_IPTRIG_bank_num	(0xfc000000)
#define	B2R2BLT_CQ1_TRIG_IPTRIG_bank_numShift	(0x1a)
#define	B2R2BLT_CQ1_TRIG_IPCQ1_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_CQ1_TRIG_IPCQ1_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_CQ1_TRIG_IPMask		(0xffffffff)
#define	B2R2BLT_CQ1_TRIG_IPTestMask	(0xffffffff)
#define	B2R2BLT_CQ1_TRIG_IPInitialValue	(0x0)
#define	B2R2BLT_CQ1_TRIG_IPAccessType	(RW)
#define	B2R2BLT_CQ1_TRIG_IP		(0xa40)

/* - BLT_CQ1_TRIG_CTL */
#define	B2R2BLT_CQ1_TRIG_CTLQueue_en	(0x80000000)
#define	B2R2BLT_CQ1_TRIG_CTLRetrig_behav	(0xf000000)
#define	B2R2BLT_CQ1_TRIG_CTLRetrig_behavShift	(0x18)
#define	B2R2BLT_CQ1_TRIG_CTLIRQ_mask	(0xf00000)
#define	B2R2BLT_CQ1_TRIG_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_CQ1_TRIG_CTLTrig_cond	(0xf000)
#define	B2R2BLT_CQ1_TRIG_CTLTrig_condShift	(0xc)
#define	B2R2BLT_CQ1_TRIG_CTLTrigger_line_num	(0xfff)
#define	B2R2BLT_CQ1_TRIG_CTLTrigger_line_numShift	(0x0)
#define	B2R2BLT_CQ1_TRIG_CTLMask	(0x8ff0ffff)
#define	B2R2BLT_CQ1_TRIG_CTLTestMask	(0x8ff0ffff)
#define	B2R2BLT_CQ1_TRIG_CTLInitialValue	(0x0)
#define	B2R2BLT_CQ1_TRIG_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_CQ1_TRIG_CTL		(0xa44)

/* - BLT_CQ1_PACE_CTL */
#define	B2R2BLT_CQ1_PACE_CTLDynamic_Pace	(0x80000000)
#define	B2R2BLT_CQ1_PACE_CTLPace_Count	(0xfff0000)
#define	B2R2BLT_CQ1_PACE_CTLPace_CountShift	(0x10)
#define	B2R2BLT_CQ1_PACE_CTLPace_start	(0xfff)
#define	B2R2BLT_CQ1_PACE_CTLPace_startShift	(0x0)
#define	B2R2BLT_CQ1_PACE_CTLMask	(0x8fff0fff)
#define	B2R2BLT_CQ1_PACE_CTLTestMask	(0x8ff0ffff)
#define	B2R2BLT_CQ1_PACE_CTLInitialValue	(0x0)
#define	B2R2BLT_CQ1_PACE_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_CQ1_PACE_CTL		(0xa48)

/* - BLT_CQ1_IP */
#define	B2R2BLT_CQ1_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_CQ1_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_CQ1_IPInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_CQ1_IPInst_Memory_addressShift	(0x0)
#define	B2R2BLT_CQ1_IPMask		(0xffffffff)
#define	B2R2BLT_CQ1_IPTestMask		(0xffffffff)
#define	B2R2BLT_CQ1_IPInitialValue	(0x0)
#define	B2R2BLT_CQ1_IPAccessType	(RO)
#define	B2R2BLT_CQ1_IP			(0xa4c)

/* - BLT_CQ2_TRIG_IP */
#define	B2R2BLT_CQ2_TRIG_IPTRIG_bank_num	(0xfc000000)
#define	B2R2BLT_CQ2_TRIG_IPTRIG_bank_numShift	(0x1a)
#define	B2R2BLT_CQ2_TRIG_IPCQ2_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_CQ2_TRIG_IPCQ2_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_CQ2_TRIG_IPMask		(0xffffffff)
#define	B2R2BLT_CQ2_TRIG_IPTestMask	(0xffffffff)
#define	B2R2BLT_CQ2_TRIG_IPInitialValue	(0x0)
#define	B2R2BLT_CQ2_TRIG_IPAccessType	(RW)
#define	B2R2BLT_CQ2_TRIG_IP		(0xa50)

/* - BLT_CQ2_TRIG_CTL */
#define	B2R2BLT_CQ2_TRIG_CTLQueue_en	(0x80000000)
#define	B2R2BLT_CQ2_TRIG_CTLRetrig_behav	(0xf000000)
#define	B2R2BLT_CQ2_TRIG_CTLRetrig_behavShift	(0x18)
#define	B2R2BLT_CQ2_TRIG_CTLIRQ_mask	(0xf00000)
#define	B2R2BLT_CQ2_TRIG_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_CQ2_TRIG_CTLTrig_cond	(0xf000)
#define	B2R2BLT_CQ2_TRIG_CTLTrig_condShift	(0xc)
#define	B2R2BLT_CQ2_TRIG_CTLTrigger_line_num	(0xfff)
#define	B2R2BLT_CQ2_TRIG_CTLTrigger_line_numShift	(0x0)
#define	B2R2BLT_CQ2_TRIG_CTLMask	(0x8ff0ffff)
#define	B2R2BLT_CQ2_TRIG_CTLTestMask	(0x8ff0ffff)
#define	B2R2BLT_CQ2_TRIG_CTLInitialValue	(0x0)
#define	B2R2BLT_CQ2_TRIG_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_CQ2_TRIG_CTL		(0xa54)

/* - BLT_CQ2_PACE_CTL */
#define	B2R2BLT_CQ2_PACE_CTLDynamic_Pace	(0x80000000)
#define	B2R2BLT_CQ2_PACE_CTLPace_Count	(0xfff0000)
#define	B2R2BLT_CQ2_PACE_CTLPace_CountShift	(0x10)
#define	B2R2BLT_CQ2_PACE_CTLPace_start	(0xfff)
#define	B2R2BLT_CQ2_PACE_CTLPace_startShift	(0x0)
#define	B2R2BLT_CQ2_PACE_CTLMask	(0x8fff0fff)
#define	B2R2BLT_CQ2_PACE_CTLTestMask	(0x8ff0ffff)
#define	B2R2BLT_CQ2_PACE_CTLInitialValue	(0x0)
#define	B2R2BLT_CQ2_PACE_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_CQ2_PACE_CTL		(0xa58)

/* - BLT_CQ2_IP */
#define	B2R2BLT_CQ2_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_CQ2_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_CQ2_IPInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_CQ2_IPInst_Memory_addressShift	(0x0)
#define	B2R2BLT_CQ2_IPMask		(0xffffffff)
#define	B2R2BLT_CQ2_IPTestMask		(0xffffffff)
#define	B2R2BLT_CQ2_IPInitialValue	(0x0)
#define	B2R2BLT_CQ2_IPAccessType	(RO)
#define	B2R2BLT_CQ2_IP			(0xa5c)

/* - BLT_AQ1_CTL */
#define	B2R2BLT_AQ1_CTLQueue_en		(0x80000000)
#define	B2R2BLT_AQ1_CTLEvent_behav	(0x7000000)
#define	B2R2BLT_AQ1_CTLEvent_behavShift	(0x18)
#define	B2R2BLT_AQ1_CTLIRQ_mask		(0xf00000)
#define	B2R2BLT_AQ1_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_AQ1_CTLPriority		(0x3)
#define	B2R2BLT_AQ1_CTLPriorityShift	(0x0)
#define	B2R2BLT_AQ1_CTLMask		(0x87f00003)
#define	B2R2BLT_AQ1_CTLTestMask		(0x87f00003)
#define	B2R2BLT_AQ1_CTLInitialValue	(0x0)
#define	B2R2BLT_AQ1_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_AQ1_CTL			(0xa60)

/* - BLT_AQ1_IP */
#define	B2R2BLT_AQ1_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ1_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ1_IPinst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ1_IPinst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ1_IPMask		(0xffffffff)
#define	B2R2BLT_AQ1_IPTestMask		(0xffffffff)
#define	B2R2BLT_AQ1_IPInitialValue	(0x0)
#define	B2R2BLT_AQ1_IPAccessType	(RW)
#define	B2R2BLT_AQ1_IP			(0xa64)

/* - BLT_AQ1_LNA */
#define	B2R2BLT_AQ1_LNALna_bank_num	(0xfc000000)
#define	B2R2BLT_AQ1_LNALna_bank_numShift	(0x1a)
#define	B2R2BLT_AQ1_LNALna_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ1_LNALna_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ1_LNAMask		(0xffffffff)
#define	B2R2BLT_AQ1_LNATestMask		(0xffffffff)
#define	B2R2BLT_AQ1_LNAInitialValue	(0x0)
#define	B2R2BLT_AQ1_LNAAccessType	(RW)
#define	B2R2BLT_AQ1_LNA			(0xa68)

/* - BLT_AQ1_STA */
#define	B2R2BLT_AQ1_STAInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ1_STAInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ1_STAInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ1_STAInst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ1_STAMask		(0xffffffff)
#define	B2R2BLT_AQ1_STATestMask		(0xffffffff)
#define	B2R2BLT_AQ1_STAInitialValue	(0x0)
#define	B2R2BLT_AQ1_STAAccessType	(RO)
#define	B2R2BLT_AQ1_STA			(0xa6c)

/* - BLT_AQ2_CTL */
#define	B2R2BLT_AQ2_CTLQueue_en		(0x80000000)
#define	B2R2BLT_AQ2_CTLEvent_behav	(0x7000000)
#define	B2R2BLT_AQ2_CTLEvent_behavShift	(0x18)
#define	B2R2BLT_AQ2_CTLIRQ_mask		(0xf00000)
#define	B2R2BLT_AQ2_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_AQ2_CTLPriority		(0x3)
#define	B2R2BLT_AQ2_CTLPriorityShift	(0x0)
#define	B2R2BLT_AQ2_CTLMask		(0x87f00003)
#define	B2R2BLT_AQ2_CTLTestMask		(0x87f00003)
#define	B2R2BLT_AQ2_CTLInitialValue	(0x0)
#define	B2R2BLT_AQ2_CTLAccessType	(INITIAL_TEST)
#define	B2R2BLT_AQ2_CTL			(0xa70)

/* - BLT_AQ2_IP */
#define	B2R2BLT_AQ2_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ2_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ2_IPinst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ2_IPinst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ2_IPMask		(0xffffffff)
#define	B2R2BLT_AQ2_IPTestMask		(0xffffffff)
#define	B2R2BLT_AQ2_IPInitialValue	(0x0)
#define	B2R2BLT_AQ2_IPAccessType	(RW)
#define	B2R2BLT_AQ2_IP			(0xa74)

/* - BLT_AQ2_LNA */
#define	B2R2BLT_AQ2_LNALna_bank_num	(0xfc000000)
#define	B2R2BLT_AQ2_LNALna_bank_numShift	(0x1a)
#define	B2R2BLT_AQ2_LNALna_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ2_LNALna_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ2_LNAMask		(0xffffffff)
#define	B2R2BLT_AQ2_LNATestMask		(0xffffffff)
#define	B2R2BLT_AQ2_LNAInitialValue	(0x0)
#define	B2R2BLT_AQ2_LNAAccessType	(RW)
#define	B2R2BLT_AQ2_LNA			(0xa78)

/* - BLT_AQ2_STA */
#define	B2R2BLT_AQ2_STAInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ2_STAInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ2_STAInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ2_STAInst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ2_STAMask		(0xffffffff)
#define	B2R2BLT_AQ2_STATestMask		(0xffffffff)
#define	B2R2BLT_AQ2_STAInitialValue	(0x0)
#define	B2R2BLT_AQ2_STAAccessType	(RO)
#define	B2R2BLT_AQ2_STA			(0xa7c)

/* - BLT_AQ3_CTL */
#define	B2R2BLT_AQ3_CTLQueue_en		(0x80000000)
#define	B2R2BLT_AQ3_CTLEvent_behav	(0x7000000)
#define	B2R2BLT_AQ3_CTLEvent_behavShift	(0x18)
#define	B2R2BLT_AQ3_CTLIRQ_mask		(0xf00000)
#define	B2R2BLT_AQ3_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_AQ3_CTLPriority		(0x3)
#define	B2R2BLT_AQ3_CTLPriorityShift	(0x0)
#define	B2R2BLT_AQ3_CTLMask		(0x87f00003)
#define	B2R2BLT_AQ3_CTLTestMask		(0x87f00003)
#define	B2R2BLT_AQ3_CTLInitialValue	(0x0)
#define	B2R2BLT_AQ3_CTLAccessType	(NO_TEST)
#define	B2R2BLT_AQ3_CTL			(0xa80)

/* - BLT_AQ3_IP */
#define	B2R2BLT_AQ3_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ3_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ3_IPinst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ3_IPinst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ3_IPMask		(0xffffffff)
#define	B2R2BLT_AQ3_IPTestMask		(0xffffffff)
#define	B2R2BLT_AQ3_IPInitialValue	(0x0)
#define	B2R2BLT_AQ3_IPAccessType	(RW)
#define	B2R2BLT_AQ3_IP			(0xa84)

/* - BLT_AQ3_LNA */
#define	B2R2BLT_AQ3_LNALna_bank_num	(0xfc000000)
#define	B2R2BLT_AQ3_LNALna_bank_numShift	(0x1a)
#define	B2R2BLT_AQ3_LNALna_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ3_LNALna_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ3_LNAMask		(0xffffffff)
#define	B2R2BLT_AQ3_LNATestMask		(0xffffffff)
#define	B2R2BLT_AQ3_LNAInitialValue	(0x0)
#define	B2R2BLT_AQ3_LNAAccessType	(RW)
#define	B2R2BLT_AQ3_LNA			(0xa88)

/* - BLT_AQ3_STA */
#define	B2R2BLT_AQ3_STAInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ3_STAInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ3_STAInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ3_STAInst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ3_STAMask		(0xffffffff)
#define	B2R2BLT_AQ3_STATestMask		(0xffffffff)
#define	B2R2BLT_AQ3_STAInitialValue	(0x0)
#define	B2R2BLT_AQ3_STAAccessType	(RO)
#define	B2R2BLT_AQ3_STA			(0xa8c)

/* - BLT_AQ4_CTL */
#define	B2R2BLT_AQ4_CTLQueue_en		(0x80000000)
#define	B2R2BLT_AQ4_CTLEvent_behav	(0x7000000)
#define	B2R2BLT_AQ4_CTLEvent_behavShift	(0x18)
#define	B2R2BLT_AQ4_CTLIRQ_mask		(0xf00000)
#define	B2R2BLT_AQ4_CTLIRQ_maskShift	(0x14)
#define	B2R2BLT_AQ4_CTLPriority		(0x3)
#define	B2R2BLT_AQ4_CTLPriorityShift	(0x0)
#define	B2R2BLT_AQ4_CTLMask		(0x87f00003)
#define	B2R2BLT_AQ4_CTLTestMask		(0x87f00003)
#define	B2R2BLT_AQ4_CTLInitialValue	(0x0)
#define	B2R2BLT_AQ4_CTLAccessType	(NO_TEST)
#define	B2R2BLT_AQ4_CTL			(0xa90)

/* - BLT_AQ4_IP */
#define	B2R2BLT_AQ4_IPInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ4_IPInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ4_IPinst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ4_IPinst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ4_IPMask		(0xffffffff)
#define	B2R2BLT_AQ4_IPTestMask		(0xffffffff)
#define	B2R2BLT_AQ4_IPInitialValue	(0x0)
#define	B2R2BLT_AQ4_IPAccessType	(RW)
#define	B2R2BLT_AQ4_IP			(0xa94)

/* - BLT_AQ4_LNA */
#define	B2R2BLT_AQ4_LNALna_bank_num	(0xfc000000)
#define	B2R2BLT_AQ4_LNALna_bank_numShift	(0x1a)
#define	B2R2BLT_AQ4_LNALna_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ4_LNALna_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ4_LNAMask		(0xffffffff)
#define	B2R2BLT_AQ4_LNATestMask		(0xffffffff)
#define	B2R2BLT_AQ4_LNAInitialValue	(0x0)
#define	B2R2BLT_AQ4_LNAAccessType	(RW)
#define	B2R2BLT_AQ4_LNA			(0xa98)

/* - BLT_AQ4_STA */
#define	B2R2BLT_AQ4_STAInst_bank_num	(0xfc000000)
#define	B2R2BLT_AQ4_STAInst_bank_numShift	(0x1a)
#define	B2R2BLT_AQ4_STAInst_Memory_address	(0x3ffffff)
#define	B2R2BLT_AQ4_STAInst_Memory_addressShift	(0x0)
#define	B2R2BLT_AQ4_STAMask		(0xffffffff)
#define	B2R2BLT_AQ4_STATestMask		(0xffffffff)
#define	B2R2BLT_AQ4_STAInitialValue	(0x0)
#define	B2R2BLT_AQ4_STAAccessType	(RO)
#define	B2R2BLT_AQ4_STA			(0xa9c)

/* - BLT_SSBA9 */
#define	B2R2BLT_SSBA9SSBA9_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA9SSBA9_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA9SSBA9_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA9SSBA9_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA9Mask		(0xffffffff)
#define	B2R2BLT_SSBA9TestMask		(0xffffffff)
#define	B2R2BLT_SSBA9InitialValue	(0x0)
#define	B2R2BLT_SSBA9AccessType		(RW)
#define	B2R2BLT_SSBA9			(0xaa0)

/* - BLT_SSBA10 */
#define	B2R2BLT_SSBA10SSBA10_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA10SSBA10_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA10SSBA10_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA10SSBA10_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA10Mask		(0xffffffff)
#define	B2R2BLT_SSBA10TestMask		(0xffffffff)
#define	B2R2BLT_SSBA10InitialValue	(0x0)
#define	B2R2BLT_SSBA10AccessType	(RW)
#define	B2R2BLT_SSBA10			(0xaa4)

/* - BLT_SSBA11 */
#define	B2R2BLT_SSBA11SSBA11_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA11SSBA11_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA11SSBA11_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA11SSBA11_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA11Mask		(0xffffffff)
#define	B2R2BLT_SSBA11TestMask		(0xffffffff)
#define	B2R2BLT_SSBA11InitialValue	(0x0)
#define	B2R2BLT_SSBA11AccessType	(RW)
#define	B2R2BLT_SSBA11			(0xaa8)

/* - BLT_SSBA12 */
#define	B2R2BLT_SSBA12SSBA12_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA12SSBA12_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA12SSBA12_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA12SSBA12_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA12Mask		(0xffffffff)
#define	B2R2BLT_SSBA12TestMask		(0xffffffff)
#define	B2R2BLT_SSBA12InitialValue	(0x0)
#define	B2R2BLT_SSBA12AccessType	(RW)
#define	B2R2BLT_SSBA12			(0xaac)

/* - BLT_SSBA13 */
#define	B2R2BLT_SSBA13SSBA13_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA13SSBA13_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA13SSBA13_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA13SSBA13_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA13Mask		(0xffffffff)
#define	B2R2BLT_SSBA13TestMask		(0xffffffff)
#define	B2R2BLT_SSBA13InitialValue	(0x0)
#define	B2R2BLT_SSBA13AccessType	(RW)
#define	B2R2BLT_SSBA13			(0xab0)

/* - BLT_SSBA14 */
#define	B2R2BLT_SSBA14SSBA14_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA14SSBA14_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA14SSBA14_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA14SSBA14_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA14Mask		(0xffffffff)
#define	B2R2BLT_SSBA14TestMask		(0xffffffff)
#define	B2R2BLT_SSBA14InitialValue	(0x0)
#define	B2R2BLT_SSBA14AccessType	(RW)
#define	B2R2BLT_SSBA14			(0xab4)

/* - BLT_SSBA15 */
#define	B2R2BLT_SSBA15SSBA15_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA15SSBA15_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA15SSBA15_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA15SSBA15_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA15Mask		(0xffffffff)
#define	B2R2BLT_SSBA15TestMask		(0xffffffff)
#define	B2R2BLT_SSBA15InitialValue	(0x0)
#define	B2R2BLT_SSBA15AccessType	(RW)
#define	B2R2BLT_SSBA15			(0xab8)

/* - BLT_SSBA16 */
#define	B2R2BLT_SSBA16SSBA16_bank_num	(0xfc000000)
#define	B2R2BLT_SSBA16SSBA16_bank_numShift	(0x1a)
#define	B2R2BLT_SSBA16SSBA16_MEMORY_ADDRESS	(0x3ffffff)
#define	B2R2BLT_SSBA16SSBA16_MEMORY_ADDRESSShift	(0x0)
#define	B2R2BLT_SSBA16Mask		(0xffffffff)
#define	B2R2BLT_SSBA16TestMask		(0xffffffff)
#define	B2R2BLT_SSBA16InitialValue	(0x0)
#define	B2R2BLT_SSBA16AccessType	(RW)
#define	B2R2BLT_SSBA16			(0xabc)

/* - BLT_SGA1 */
#define	B2R2BLT_SGA1Alpha4		(0xff000000)
#define	B2R2BLT_SGA1Alpha4Shift		(0x18)
#define	B2R2BLT_SGA1Alpha3		(0xff0000)
#define	B2R2BLT_SGA1Alpha3Shift		(0x10)
#define	B2R2BLT_SGA1Alpha2		(0xff00)
#define	B2R2BLT_SGA1Alpha2Shift		(0x8)
#define	B2R2BLT_SGA1Alpha1		(0xff)
#define	B2R2BLT_SGA1Alpha1Shift		(0x0)
#define	B2R2BLT_SGA1Mask		(0xffffffff)
#define	B2R2BLT_SGA1TestMask		(0xffffffff)
#define	B2R2BLT_SGA1InitialValue	(0x80808080)
#define	B2R2BLT_SGA1AccessType		(RW)
#define	B2R2BLT_SGA1			(0xac0)

/* - BLT_SGA2 */
#define	B2R2BLT_SGA2Alpha8		(0xff000000)
#define	B2R2BLT_SGA2Alpha8Shift		(0x18)
#define	B2R2BLT_SGA2Alpha7		(0xff0000)
#define	B2R2BLT_SGA2Alpha7Shift		(0x10)
#define	B2R2BLT_SGA2Alpha6		(0xff00)
#define	B2R2BLT_SGA2Alpha6Shift		(0x8)
#define	B2R2BLT_SGA2Alpha5		(0xff)
#define	B2R2BLT_SGA2Alpha5Shift		(0x0)
#define	B2R2BLT_SGA2Mask		(0xffffffff)
#define	B2R2BLT_SGA2TestMask		(0xffffffff)
#define	B2R2BLT_SGA2InitialValue	(0x80808080)
#define	B2R2BLT_SGA2AccessType		(RW)
#define	B2R2BLT_SGA2			(0xac4)

/* - BLT_ITM0 */
#define	B2R2BLT_ITM0b31			(0x80000000)
#define	B2R2BLT_ITM0b27			(0x8000000)
#define	B2R2BLT_ITM0b26			(0x4000000)
#define	B2R2BLT_ITM0b25			(0x2000000)
#define	B2R2BLT_ITM0b24			(0x1000000)
#define	B2R2BLT_ITM0b23			(0x800000)
#define	B2R2BLT_ITM0b22			(0x400000)
#define	B2R2BLT_ITM0b21			(0x200000)
#define	B2R2BLT_ITM0b20			(0x100000)
#define	B2R2BLT_ITM0b19			(0x80000)
#define	B2R2BLT_ITM0b18			(0x40000)
#define	B2R2BLT_ITM0b17			(0x20000)
#define	B2R2BLT_ITM0b16			(0x10000)
#define	B2R2BLT_ITM0b15			(0x8000)
#define	B2R2BLT_ITM0b14			(0x4000)
#define	B2R2BLT_ITM0b13			(0x2000)
#define	B2R2BLT_ITM0b12			(0x1000)
#define	B2R2BLT_ITM0b7			(0x80)
#define	B2R2BLT_ITM0b6			(0x40)
#define	B2R2BLT_ITM0b5			(0x20)
#define	B2R2BLT_ITM0b4			(0x10)
#define	B2R2BLT_ITM0b3			(0x8)
#define	B2R2BLT_ITM0b2			(0x4)
#define	B2R2BLT_ITM0b1			(0x2)
#define	B2R2BLT_ITM0b0			(0x1)
#define	B2R2BLT_ITM0Mask		(0x8ffff0ff)
#define	B2R2BLT_ITM0TestMask		(0x8ffff0ff)
#define	B2R2BLT_ITM0InitialValue	(0x0)
#define	B2R2BLT_ITM0AccessType		(RW)
#define	B2R2BLT_ITM0			(0xad0)

/* - BLT_ITM1 */
#define	B2R2BLT_ITM1b31			(0x80000000)
#define	B2R2BLT_ITM1b27			(0x8000000)
#define	B2R2BLT_ITM1b26			(0x4000000)
#define	B2R2BLT_ITM1b25			(0x2000000)
#define	B2R2BLT_ITM1b24			(0x1000000)
#define	B2R2BLT_ITM1b23			(0x800000)
#define	B2R2BLT_ITM1b22			(0x400000)
#define	B2R2BLT_ITM1b21			(0x200000)
#define	B2R2BLT_ITM1b20			(0x100000)
#define	B2R2BLT_ITM1b19			(0x80000)
#define	B2R2BLT_ITM1b18			(0x40000)
#define	B2R2BLT_ITM1b17			(0x20000)
#define	B2R2BLT_ITM1b16			(0x10000)
#define	B2R2BLT_ITM1b15			(0x8000)
#define	B2R2BLT_ITM1b14			(0x4000)
#define	B2R2BLT_ITM1b13			(0x2000)
#define	B2R2BLT_ITM1b12			(0x1000)
#define	B2R2BLT_ITM1b7			(0x80)
#define	B2R2BLT_ITM1b6			(0x40)
#define	B2R2BLT_ITM1b5			(0x20)
#define	B2R2BLT_ITM1b4			(0x10)
#define	B2R2BLT_ITM1b3			(0x8)
#define	B2R2BLT_ITM1b2			(0x4)
#define	B2R2BLT_ITM1b1			(0x2)
#define	B2R2BLT_ITM1b0			(0x1)
#define	B2R2BLT_ITM1Mask		(0x8ffff0ff)
#define	B2R2BLT_ITM1TestMask		(0x8ffff0ff)
#define	B2R2BLT_ITM1InitialValue	(0x0)
#define	B2R2BLT_ITM1AccessType		(RW)
#define	B2R2BLT_ITM1			(0xad4)

/* - BLT_ITM2 */
#define	B2R2BLT_ITM2b31			(0x80000000)
#define	B2R2BLT_ITM2b27			(0x8000000)
#define	B2R2BLT_ITM2b26			(0x4000000)
#define	B2R2BLT_ITM2b25			(0x2000000)
#define	B2R2BLT_ITM2b24			(0x1000000)
#define	B2R2BLT_ITM2b23			(0x800000)
#define	B2R2BLT_ITM2b22			(0x400000)
#define	B2R2BLT_ITM2b21			(0x200000)
#define	B2R2BLT_ITM2b20			(0x100000)
#define	B2R2BLT_ITM2b19			(0x80000)
#define	B2R2BLT_ITM2b18			(0x40000)
#define	B2R2BLT_ITM2b17			(0x20000)
#define	B2R2BLT_ITM2b16			(0x10000)
#define	B2R2BLT_ITM2b15			(0x8000)
#define	B2R2BLT_ITM2b14			(0x4000)
#define	B2R2BLT_ITM2b13			(0x2000)
#define	B2R2BLT_ITM2b12			(0x1000)
#define	B2R2BLT_ITM2b7			(0x80)
#define	B2R2BLT_ITM2b6			(0x40)
#define	B2R2BLT_ITM2b5			(0x20)
#define	B2R2BLT_ITM2b4			(0x10)
#define	B2R2BLT_ITM2b3			(0x8)
#define	B2R2BLT_ITM2b2			(0x4)
#define	B2R2BLT_ITM2b1			(0x2)
#define	B2R2BLT_ITM2b0			(0x1)
#define	B2R2BLT_ITM2Mask		(0x8ffff0ff)
#define	B2R2BLT_ITM2TestMask		(0x8ffff0ff)
#define	B2R2BLT_ITM2InitialValue	(0x0)
#define	B2R2BLT_ITM2AccessType		(RW)
#define	B2R2BLT_ITM2			(0xad8)

/* - BLT_ITM3 */
#define	B2R2BLT_ITM3b31			(0x80000000)
#define	B2R2BLT_ITM3b27			(0x8000000)
#define	B2R2BLT_ITM3b26			(0x4000000)
#define	B2R2BLT_ITM3b25			(0x2000000)
#define	B2R2BLT_ITM3b24			(0x1000000)
#define	B2R2BLT_ITM3b23			(0x800000)
#define	B2R2BLT_ITM3b22			(0x400000)
#define	B2R2BLT_ITM3b21			(0x200000)
#define	B2R2BLT_ITM3b20			(0x100000)
#define	B2R2BLT_ITM3b19			(0x80000)
#define	B2R2BLT_ITM3b18			(0x40000)
#define	B2R2BLT_ITM3b17			(0x20000)
#define	B2R2BLT_ITM3b16			(0x10000)
#define	B2R2BLT_ITM3b15			(0x8000)
#define	B2R2BLT_ITM3b14			(0x4000)
#define	B2R2BLT_ITM3b13			(0x2000)
#define	B2R2BLT_ITM3b12			(0x1000)
#define	B2R2BLT_ITM3b7			(0x80)
#define	B2R2BLT_ITM3b6			(0x40)
#define	B2R2BLT_ITM3b5			(0x20)
#define	B2R2BLT_ITM3b4			(0x10)
#define	B2R2BLT_ITM3b3			(0x8)
#define	B2R2BLT_ITM3b2			(0x4)
#define	B2R2BLT_ITM3b1			(0x2)
#define	B2R2BLT_ITM3b0			(0x1)
#define	B2R2BLT_ITM3Mask		(0x8ffff0ff)
#define	B2R2BLT_ITM3TestMask		(0x8ffff0ff)
#define	B2R2BLT_ITM3InitialValue	(0x0)
#define	B2R2BLT_ITM3AccessType		(RW)
#define	B2R2BLT_ITM3			(0xadc)

/* - BLT_DFV2 */
#define	B2R2BLT_DFV2DFV2_Mode_En	(0x80000000)
#define	B2R2BLT_DFV2DFV2_Vsync		(0x40000000)
#define	B2R2BLT_DFV2DFV2_ntop_bot	(0x20000000)
#define	B2R2BLT_DFV2DFV2_req		(0x10000000)
#define	B2R2BLT_DFV2DFV2_Line_count	(0xfff)
#define	B2R2BLT_DFV2DFV2_Line_countShift	(0x0)
#define	B2R2BLT_DFV2Mask		(0xf0000fff)
#define	B2R2BLT_DFV2TestMask		(0xf0000fff)
#define	B2R2BLT_DFV2InitialValue	(0x0)
#define	B2R2BLT_DFV2AccessType		(NO_TEST)
#define	B2R2BLT_DFV2			(0xaf0)

/* - BLT_DFV1 */
#define	B2R2BLT_DFV1DFV1_Mode_En	(0x80000000)
#define	B2R2BLT_DFV1DFV1_Vsync		(0x40000000)
#define	B2R2BLT_DFV1DFV1_ntop_bot	(0x20000000)
#define	B2R2BLT_DFV1DFV1_req		(0x10000000)
#define	B2R2BLT_DFV1DFV1_GPO		(0x1000000)
#define	B2R2BLT_DFV1DFV1_CQ2_IT		(0x200000)
#define	B2R2BLT_DFV1DFV1_CQ1_IT		(0x100000)
#define	B2R2BLT_DFV1DFV1_AQ4_IT		(0x80000)
#define	B2R2BLT_DFV1DFV1_AQ3_IT		(0x40000)
#define	B2R2BLT_DFV1DFV1_AQ2_IT		(0x20000)
#define	B2R2BLT_DFV1DFV1_AQ1_IT		(0x10000)
#define	B2R2BLT_DFV1DFV1_ITM3_IT	(0x8000)
#define	B2R2BLT_DFV1DFV1_ITM2_IT	(0x4000)
#define	B2R2BLT_DFV1DFV1_ITM1_IT	(0x2000)
#define	B2R2BLT_DFV1DFV1_ITM0_IT	(0x1000)
#define	B2R2BLT_DFV1DFV1_Line_count	(0xfff)
#define	B2R2BLT_DFV1DFV1_Line_countShift	(0x0)
#define	B2R2BLT_DFV1Mask		(0xf13fffff)
#define	B2R2BLT_DFV1TestMask		(0xffffffff)
#define	B2R2BLT_DFV1InitialValue	(0x0)
#define	B2R2BLT_DFV1AccessType		(NO_TEST)
#define	B2R2BLT_DFV1			(0xaf4)

/* - BLT_PRI */
#define	B2R2BLT_PRIAQ4_prio		(0xf000000)
#define	B2R2BLT_PRIAQ4_prioShift	(0x18)
#define	B2R2BLT_PRIAQ3_prio		(0xf00000)
#define	B2R2BLT_PRIAQ3_prioShift	(0x14)
#define	B2R2BLT_PRIAQ2_prio		(0xf0000)
#define	B2R2BLT_PRIAQ2_prioShift	(0x10)
#define	B2R2BLT_PRIAQ1_prio		(0xf000)
#define	B2R2BLT_PRIAQ1_prioShift	(0xc)
#define	B2R2BLT_PRICQ2_prio		(0xf0)
#define	B2R2BLT_PRICQ2_prioShift	(0x4)
#define	B2R2BLT_PRICQ1_prio		(0xf)
#define	B2R2BLT_PRICQ1_prioShift	(0x0)
#define	B2R2BLT_PRIMask			(0xffff0ff)
#define	B2R2BLT_PRITestMask		(0xfffffff)
#define	B2R2BLT_PRIInitialValue		(0x0)
#define	B2R2BLT_PRIAccessType		(INITIAL_TEST)
#define	B2R2BLT_PRI			(0xaf8)

/* - PLUGS1_OP2 */
#define	B2R2PLUGS1_OP2Max_opcode	(0x7)
#define	B2R2PLUGS1_OP2Max_opcodeShift	(0x0)
#define	B2R2PLUGS1_OP2Mask		(0x7)
#define	B2R2PLUGS1_OP2TestMask		(0x7)
#define	B2R2PLUGS1_OP2InitialValue	(0x0)
#define	B2R2PLUGS1_OP2AccessType	(RW)
#define	B2R2PLUGS1_OP2			(0xb04)

/* - PLUGS1_CHZ */
#define	B2R2PLUGS1_CHZChunk_size	(0x7)
#define	B2R2PLUGS1_CHZChunk_sizeShift	(0x0)
#define	B2R2PLUGS1_CHZMask		(0x7)
#define	B2R2PLUGS1_CHZTestMask		(0x7)
#define	B2R2PLUGS1_CHZInitialValue	(0x0)
#define	B2R2PLUGS1_CHZAccessType	(RW)
#define	B2R2PLUGS1_CHZ			(0xb08)

/* - PLUGS1_MSZ */
#define	B2R2PLUGS1_MSZMinSpaceBetweenReq	(0xffff0000)
#define	B2R2PLUGS1_MSZMinSpaceBetweenReqShift	(0x10)
#define	B2R2PLUGS1_MSZMessage_Size	(0x7)
#define	B2R2PLUGS1_MSZMessage_SizeShift	(0x0)
#define	B2R2PLUGS1_MSZMask		(0xffff0007)
#define	B2R2PLUGS1_MSZTestMask		(0xffff0007)
#define	B2R2PLUGS1_MSZInitialValue	(0x0)
#define	B2R2PLUGS1_MSZAccessType	(RW)
#define	B2R2PLUGS1_MSZ			(0xb0c)

/* - PLUGS1_PGZ */
#define	B2R2PLUGS1_PGZPage_size		(0xf)
#define	B2R2PLUGS1_PGZPage_sizeShift	(0x0)
#define	B2R2PLUGS1_PGZMask		(0xf)
#define	B2R2PLUGS1_PGZTestMask		(0xf)
#define	B2R2PLUGS1_PGZInitialValue	(0x0)
#define	B2R2PLUGS1_PGZAccessType	(RW)
#define	B2R2PLUGS1_PGZ			(0xb10)

/* - PLUGS2_OP2 */
#define	B2R2PLUGS2_OP2Max_opcode	(0x7)
#define	B2R2PLUGS2_OP2Max_opcodeShift	(0x0)
#define	B2R2PLUGS2_OP2Mask		(0x7)
#define	B2R2PLUGS2_OP2TestMask		(0x7)
#define	B2R2PLUGS2_OP2InitialValue	(0x0)
#define	B2R2PLUGS2_OP2AccessType	(RW)
#define	B2R2PLUGS2_OP2			(0xb24)

/* - PLUGS2_CHZ */
#define	B2R2PLUGS2_CHZChunk_size	(0x7)
#define	B2R2PLUGS2_CHZChunk_sizeShift	(0x0)
#define	B2R2PLUGS2_CHZMask		(0x7)
#define	B2R2PLUGS2_CHZTestMask		(0x7)
#define	B2R2PLUGS2_CHZInitialValue	(0x0)
#define	B2R2PLUGS2_CHZAccessType	(RW)
#define	B2R2PLUGS2_CHZ			(0xb28)

/* - PLUGS2_MSZ */
#define	B2R2PLUGS2_MSZMinSpaceBetweenReq	(0xffff0000)
#define	B2R2PLUGS2_MSZMinSpaceBetweenReqShift	(0x10)
#define	B2R2PLUGS2_MSZMessage_Size	(0x7)
#define	B2R2PLUGS2_MSZMessage_SizeShift	(0x0)
#define	B2R2PLUGS2_MSZMask		(0xffff0007)
#define	B2R2PLUGS2_MSZTestMask		(0xffff0007)
#define	B2R2PLUGS2_MSZInitialValue	(0x0)
#define	B2R2PLUGS2_MSZAccessType	(RW)
#define	B2R2PLUGS2_MSZ			(0xb2c)

/* - PLUGS2_PGZ */
#define	B2R2PLUGS2_PGZPage_size		(0xf)
#define	B2R2PLUGS2_PGZPage_sizeShift	(0x0)
#define	B2R2PLUGS2_PGZMask		(0xf)
#define	B2R2PLUGS2_PGZTestMask		(0xf)
#define	B2R2PLUGS2_PGZInitialValue	(0x0)
#define	B2R2PLUGS2_PGZAccessType	(RW)
#define	B2R2PLUGS2_PGZ			(0xb30)

/* - PLUGS3_OP2 */
#define	B2R2PLUGS3_OP2Max_opcode	(0x7)
#define	B2R2PLUGS3_OP2Max_opcodeShift	(0x0)
#define	B2R2PLUGS3_OP2Mask		(0x7)
#define	B2R2PLUGS3_OP2TestMask		(0x7)
#define	B2R2PLUGS3_OP2InitialValue	(0x0)
#define	B2R2PLUGS3_OP2AccessType	(RW)
#define	B2R2PLUGS3_OP2			(0xb44)

/* - PLUGS3_CHZ */
#define	B2R2PLUGS3_CHZChunk_size	(0x7)
#define	B2R2PLUGS3_CHZChunk_sizeShift	(0x0)
#define	B2R2PLUGS3_CHZMask		(0x7)
#define	B2R2PLUGS3_CHZTestMask		(0x7)
#define	B2R2PLUGS3_CHZInitialValue	(0x0)
#define	B2R2PLUGS3_CHZAccessType	(RW)
#define	B2R2PLUGS3_CHZ			(0xb48)

/* - PLUGS3_MSZ */
#define	B2R2PLUGS3_MSZMinSpaceBetweenReq	(0xffff0000)
#define	B2R2PLUGS3_MSZMinSpaceBetweenReqShift	(0x10)
#define	B2R2PLUGS3_MSZMessage_Size	(0x7)
#define	B2R2PLUGS3_MSZMessage_SizeShift	(0x0)
#define	B2R2PLUGS3_MSZMask		(0xffff0007)
#define	B2R2PLUGS3_MSZTestMask		(0xffff0007)
#define	B2R2PLUGS3_MSZInitialValue	(0x0)
#define	B2R2PLUGS3_MSZAccessType	(RW)
#define	B2R2PLUGS3_MSZ			(0xb4c)

/* - PLUGS3_PGZ */
#define	B2R2PLUGS3_PGZPage_size		(0xf)
#define	B2R2PLUGS3_PGZPage_sizeShift	(0x0)
#define	B2R2PLUGS3_PGZMask		(0xf)
#define	B2R2PLUGS3_PGZTestMask		(0xf)
#define	B2R2PLUGS3_PGZInitialValue	(0x0)
#define	B2R2PLUGS3_PGZAccessType	(RW)
#define	B2R2PLUGS3_PGZ			(0xb50)

/* - PLUGT_OP2 */
#define	B2R2PLUGT_OP2Max_code		(0x7)
#define	B2R2PLUGT_OP2Max_codeShift	(0x0)
#define	B2R2PLUGT_OP2Mask		(0x7)
#define	B2R2PLUGT_OP2TestMask		(0x7)
#define	B2R2PLUGT_OP2InitialValue	(0x0)
#define	B2R2PLUGT_OP2AccessType		(RW)
#define	B2R2PLUGT_OP2			(0xb84)

/* - PLUGT_CHZ */
#define	B2R2PLUGT_CHZChunk_size		(0x7)
#define	B2R2PLUGT_CHZChunk_sizeShift	(0x0)
#define	B2R2PLUGT_CHZMask		(0x7)
#define	B2R2PLUGT_CHZTestMask		(0x7)
#define	B2R2PLUGT_CHZInitialValue	(0x0)
#define	B2R2PLUGT_CHZAccessType		(RW)
#define	B2R2PLUGT_CHZ			(0xb88)

/* - PLUGT_MSZ */
#define	B2R2PLUGT_MSZMinSpaceBetweenReq	(0xffff0000)
#define	B2R2PLUGT_MSZMinSpaceBetweenReqShift	(0x10)
#define	B2R2PLUGT_MSZMessage_size	(0x7)
#define	B2R2PLUGT_MSZMessage_sizeShift	(0x0)
#define	B2R2PLUGT_MSZMask		(0xffff0007)
#define	B2R2PLUGT_MSZTestMask		(0xffff0007)
#define	B2R2PLUGT_MSZInitialValue	(0x0)
#define	B2R2PLUGT_MSZAccessType		(RW)
#define	B2R2PLUGT_MSZ			(0xb8c)

/* - PLUGT_PGZ */
#define	B2R2PLUGT_PGZPage_size		(0xf)
#define	B2R2PLUGT_PGZPage_sizeShift	(0x0)
#define	B2R2PLUGT_PGZMask		(0xf)
#define	B2R2PLUGT_PGZTestMask		(0xf)
#define	B2R2PLUGT_PGZInitialValue	(0x0)
#define	B2R2PLUGT_PGZAccessType		(RW)
#define	B2R2PLUGT_PGZ			(0xb90)

/* - BLT_NIP */
#define	B2R2BLT_NIPNIP_BANK_NUM		(0xfc000000)
#define	B2R2BLT_NIPNIP_BANK_NUMShift	(0x1a)
#define	B2R2BLT_NIPNIP_MEM_ADDR		(0x3ffffff)
#define	B2R2BLT_NIPNIP_MEM_ADDRShift	(0x0)
#define	B2R2BLT_NIPMask			(0xffffffff)
#define	B2R2BLT_NIPTestMask		(0xffffffff)
#define	B2R2BLT_NIPInitialValue		(0x0)
#define	B2R2BLT_NIPAccessType		(INITIAL_TEST)
#define	B2R2BLT_NIP			(0xc00)

/* - BLT_CIC */
#define	B2R2BLT_CICGroup18		(0x40000)
#define	B2R2BLT_CICGroup17		(0x20000)
#define	B2R2BLT_CICGroup16		(0x10000)
#define	B2R2BLT_CICGroup15		(0x8000)
#define	B2R2BLT_CICGroup14		(0x4000)
#define	B2R2BLT_CICGroup13		(0x2000)
#define	B2R2BLT_CICGroup12		(0x1000)
#define	B2R2BLT_CICGroup11		(0x800)
#define	B2R2BLT_CICGroup10		(0x400)
#define	B2R2BLT_CICGroup9		(0x200)
#define	B2R2BLT_CICGroup8		(0x100)
#define	B2R2BLT_CICGroup7		(0x80)
#define	B2R2BLT_CICGroup6		(0x40)
#define	B2R2BLT_CICGroup5		(0x20)
#define	B2R2BLT_CICGroup4		(0x10)
#define	B2R2BLT_CICGroup3		(0x8)
#define	B2R2BLT_CICGroup2		(0x4)
#define	B2R2BLT_CICMask			(0x7fffc)
#define	B2R2BLT_CICTestMask		(0x7fffc)
#define	B2R2BLT_CICInitialValue		(0x0)
#define	B2R2BLT_CICAccessType		(INITIAL_TEST)
#define	B2R2BLT_CIC			(0xc04)

/* - BLT_INS */
#define	B2R2BLT_INSBlitCompIRQ		(0x80000000)
#define	B2R2BLT_INSPace_down		(0x40000000)
#define	B2R2BLT_INSROTATION		(0x40000)
#define	B2R2BLT_INSVC1R			(0x20000)
#define	B2R2BLT_INSDOT			(0x10000)
#define	B2R2BLT_INSXYL			(0x8000)
#define	B2R2BLT_INSPLANE_MASK		(0x4000)
#define	B2R2BLT_INSDEI			(0x2000)
#define	B2R2BLT_INSOVMX			(0x1000)
#define	B2R2BLT_INSCKEY			(0x800)
#define	B2R2BLT_INSRECT_CLIP		(0x400)
#define	B2R2BLT_INSFILCK_FILT		(0x200)
#define	B2R2BLT_INS2DRESCALE		(0x100)
#define	B2R2BLT_INSCLUTOP		(0x80)
#define	B2R2BLT_INSIVMX			(0x40)
#define	B2R2BLT_INSSOURCE3		(0x20)
#define	B2R2BLT_INSSOURCE2		(0x18)
#define	B2R2BLT_INSSOURCE2Shift		(0x3)
#define	B2R2BLT_INSSOURCE1		(0x7)
#define	B2R2BLT_INSSOURCE1Shift		(0x0)
#define	B2R2BLT_INSMask			(0xc007ffff)
#define	B2R2BLT_INSTestMask		(0xc001ffff)
#define	B2R2BLT_INSInitialValue		(0x0)
#define	B2R2BLT_INSAccessType		(INITIAL_TEST)
#define	B2R2BLT_INS			(0xc08)

/* - BLT_ACK */
#define	B2R2BLT_ACKCKEY_SEL		(0xc00000)
#define	B2R2BLT_ACKCKEY_SELShift	(0x16)
#define	B2R2BLT_ACKACK_CKEY		(0x3f0000)
#define	B2R2BLT_ACKACK_CKEYShift	(0x10)
#define	B2R2BLT_ACKGALPHA_ROPID		(0xff00)
#define	B2R2BLT_ACKGALPHA_ROPIDShift	(0x8)
#define	B2R2BLT_ACKSWAP_FG_BG		(0x10)
#define	B2R2BLT_ACKMODE			(0xf)
#define	B2R2BLT_ACKMODEShift		(0x0)
#define	B2R2BLT_ACKMask			(0xffff1f)
#define	B2R2BLT_ACKTestMask		(0xffff1f)
#define	B2R2BLT_ACKInitialValue		(0x0)
#define	B2R2BLT_ACKAccessType		(INITIAL_TEST)
#define	B2R2BLT_ACK			(0xc0c)

/* - BLT_TBA */
#define	B2R2BLT_TBATBA_bank_num		(0xfc000000)
#define	B2R2BLT_TBATBA_bank_numShift	(0x1a)
#define	B2R2BLT_TBATBA_mem_addr		(0x3ffffff)
#define	B2R2BLT_TBATBA_mem_addrShift	(0x0)
#define	B2R2BLT_TBAMask			(0xffffffff)
#define	B2R2BLT_TBATestMask		(0xffffffff)
#define	B2R2BLT_TBAInitialValue		(0x0)
#define	B2R2BLT_TBAAccessType		(INITIAL_TEST)
#define	B2R2BLT_TBA			(0xc10)

/* - BLT_TTY */
#define	B2R2BLT_TTYSecure		(0x80000000)
#define	B2R2BLT_TTYBigNotLittle		(0x40000000)
#define	B2R2BLT_TTYSUBBYTE		(0x10000000)
#define	B2R2BLT_TTYCHROMA_notLUMA	(0x8000000)
#define	B2R2BLT_TTYRGB_ROUND		(0x4000000)
#define	B2R2BLT_TTYVSO			(0x2000000)
#define	B2R2BLT_TTYHSO			(0x1000000)
#define	B2R2BLT_TTYMB_FIELD		(0x800000)
#define	B2R2BLT_TTYALPHA_RANGE		(0x200000)
#define	B2R2BLT_TTYCOLOR_FORM		(0x1f0000)
#define	B2R2BLT_TTYCOLOR_FORMShift	(0x10)
#define	B2R2BLT_TTYPIXMAP_PITCH		(0xffff)
#define	B2R2BLT_TTYPIXMAP_PITCHShift	(0x0)
#define	B2R2BLT_TTYMask			(0xdfbfffff)
#define	B2R2BLT_TTYTestMask		(0xdf7fffff)
#define	B2R2BLT_TTYInitialValue		(0x0)
#define	B2R2BLT_TTYAccessType		(INITIAL_TEST)
#define	B2R2BLT_TTY			(0xc14)

/* - BLT_TXY */
#define	B2R2BLT_TXYYCOORD		(0xffff0000)
#define	B2R2BLT_TXYYCOORDShift		(0x10)
#define	B2R2BLT_TXYXCOORD		(0xffff)
#define	B2R2BLT_TXYXCOORDShift		(0x0)
#define	B2R2BLT_TXYMask			(0xffffffff)
#define	B2R2BLT_TXYTestMask		(0xffffffff)
#define	B2R2BLT_TXYInitialValue		(0x0)
#define	B2R2BLT_TXYAccessType		(INITIAL_TEST)
#define	B2R2BLT_TXY			(0xc18)

/* - BLT_TSZ */
#define	B2R2BLT_TSZWIN_HEIGHT		(0xfff0000)
#define	B2R2BLT_TSZWIN_HEIGHTShift	(0x10)
#define	B2R2BLT_TSZWIN_WIDTH		(0xfff)
#define	B2R2BLT_TSZWIN_WIDTHShift	(0x0)
#define	B2R2BLT_TSZMask			(0xfff0fff)
#define	B2R2BLT_TSZTestMask		(0xfffffff)
#define	B2R2BLT_TSZInitialValue		(0x0)
#define	B2R2BLT_TSZAccessType		(INITIAL_TEST)
#define	B2R2BLT_TSZ			(0xc1c)

/* - BLT_S1CF */
#define	B2R2BLT_S1CFSRC1_COLOR_FILL	(0x0)
#define	B2R2BLT_S1CFSRC1_COLOR_FILLShift	(0x0)
#define	B2R2BLT_S1CFMask		(0x0)
#define	B2R2BLT_S1CFTestMask		(0xffffffff)
#define	B2R2BLT_S1CFInitialValue	(0x0)
#define	B2R2BLT_S1CFAccessType		(INITIAL_TEST)
#define	B2R2BLT_S1CF			(0xc20)

/* - BLT_S2CF */
#define	B2R2BLT_S2CFSRC2_COLOR_FILL	(0x0)
#define	B2R2BLT_S2CFSRC2_COLOR_FILLShift	(0x0)
#define	B2R2BLT_S2CFMask		(0x0)
#define	B2R2BLT_S2CFTestMask		(0xffffffff)
#define	B2R2BLT_S2CFInitialValue	(0x0)
#define	B2R2BLT_S2CFAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2CF			(0xc24)

/* - BLT_S1BA */
#define	B2R2BLT_S1BAS1BA_BANK_NUM	(0xfc000000)
#define	B2R2BLT_S1BAS1BA_BANK_NUMShift	(0x1a)
#define	B2R2BLT_S1BAS1BA_MEM_ADDR	(0x3ffffff)
#define	B2R2BLT_S1BAS1BA_MEM_ADDRShift	(0x0)
#define	B2R2BLT_S1BAMask		(0xffffffff)
#define	B2R2BLT_S1BATestMask		(0xffffffff)
#define	B2R2BLT_S1BAInitialValue	(0x0)
#define	B2R2BLT_S1BAAccessType		(INITIAL_TEST)
#define	B2R2BLT_S1BA			(0xc28)

/* - BLT_S1TY */
#define	B2R2BLT_S1TYSecure		(0x80000000)
#define	B2R2BLT_S1TYBigNotLittle	(0x40000000)
#define	B2R2BLT_S1TYRGB_EXP		(0x20000000)
#define	B2R2BLT_S1TYSUBBYTE		(0x10000000)
#define	B2R2BLT_S1TYROTATION		(0x8000000)
#define	B2R2BLT_S1TYVSO			(0x2000000)
#define	B2R2BLT_S1TYHSO			(0x1000000)
#define	B2R2BLT_S1TYA1_SUBST		(0x400000)
#define	B2R2BLT_S1TYALPHA_RANGE		(0x200000)
#define	B2R2BLT_S1TYCOLOR_FORM		(0x1f0000)
#define	B2R2BLT_S1TYCOLOR_FORMShift	(0x10)
#define	B2R2BLT_S1TYPIXMAP_PITCH	(0xffff)
#define	B2R2BLT_S1TYPIXMAP_PITCHShift	(0x0)
#define	B2R2BLT_S1TYMask		(0xfb7fffff)
#define	B2R2BLT_S1TYTestMask		(0xfb7fffff)
#define	B2R2BLT_S1TYInitialValue	(0x0)
#define	B2R2BLT_S1TYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S1TY			(0xc2c)

/* - BLT_S1XY */
#define	B2R2BLT_S1XYYCOORD		(0xffff0000)
#define	B2R2BLT_S1XYYCOORDShift		(0x10)
#define	B2R2BLT_S1XYXCOORD		(0xffff)
#define	B2R2BLT_S1XYXCOORDShift		(0x0)
#define	B2R2BLT_S1XYMask		(0xffffffff)
#define	B2R2BLT_S1XYTestMask		(0xffffffff)
#define	B2R2BLT_S1XYInitialValue	(0x0)
#define	B2R2BLT_S1XYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S1XY			(0xc30)

/* - BLT_S2BA */
#define	B2R2BLT_S2BAS2BA_BANK_NUM	(0xfc000000)
#define	B2R2BLT_S2BAS2BA_BANK_NUMShift	(0x1a)
#define	B2R2BLT_S2BAS2BA_MEM_ADDR	(0x3ffffff)
#define	B2R2BLT_S2BAS2BA_MEM_ADDRShift	(0x0)
#define	B2R2BLT_S2BAMask		(0xffffffff)
#define	B2R2BLT_S2BATestMask		(0xffffffff)
#define	B2R2BLT_S2BAInitialValue	(0x0)
#define	B2R2BLT_S2BAAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2BA			(0xc38)

/* - BLT_S2TY */
#define	B2R2BLT_S2TYSecure		(0x80000000)
#define	B2R2BLT_S2TYBigNotLittle	(0x40000000)
#define	B2R2BLT_S2TYRGB_EXP		(0x20000000)
#define	B2R2BLT_S2TYSUBBYTE		(0x10000000)
#define	B2R2BLT_S2TYCHROMA_LEFT		(0x4000000)
#define	B2R2BLT_S2TYVSO			(0x2000000)
#define	B2R2BLT_S2TYHSO			(0x1000000)
#define	B2R2BLT_S2TYMB_FIELD		(0x800000)
#define	B2R2BLT_S2TYA1_SUBST		(0x400000)
#define	B2R2BLT_S2TYALPHA_RANGE		(0x200000)
#define	B2R2BLT_S2TYCOLOR_FORM		(0x1f0000)
#define	B2R2BLT_S2TYCOLOR_FORMShift	(0x10)
#define	B2R2BLT_S2TYPIXMAP_PITCH	(0xffff)
#define	B2R2BLT_S2TYPIXMAP_PITCHShift	(0x0)
#define	B2R2BLT_S2TYMask		(0xf7ffffff)
#define	B2R2BLT_S2TYTestMask		(0xf7ffffff)
#define	B2R2BLT_S2TYInitialValue	(0x0)
#define	B2R2BLT_S2TYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2TY			(0xc3c)

/* - BLT_S2XY */
#define	B2R2BLT_S2XYYCOORD		(0xffff0000)
#define	B2R2BLT_S2XYYCOORDShift		(0x10)
#define	B2R2BLT_S2XYXCOORD		(0xffff)
#define	B2R2BLT_S2XYXCOORDShift		(0x0)
#define	B2R2BLT_S2XYMask		(0xffffffff)
#define	B2R2BLT_S2XYTestMask		(0xffffffff)
#define	B2R2BLT_S2XYInitialValue	(0x0)
#define	B2R2BLT_S2XYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2XY			(0xc40)

/* - BLT_S2SZ */
#define	B2R2BLT_S2SZSRC2_WIN_HEIGHT	(0xfff0000)
#define	B2R2BLT_S2SZSRC2_WIN_HEIGHTShift	(0x10)
#define	B2R2BLT_S2SZSRC2_WIN_WIDTH	(0xfff)
#define	B2R2BLT_S2SZSRC2_WIN_WIDTHShift	(0x0)
#define	B2R2BLT_S2SZMask		(0xfff0fff)
#define	B2R2BLT_S2SZTestMask		(0xfff0fff)
#define	B2R2BLT_S2SZInitialValue	(0x0)
#define	B2R2BLT_S2SZAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2SZ			(0xc44)

/* - BLT_S2SZ */
#define	B2R2BLT_S2SZSRC2_WIN_HEIGHT	(0xfff0000)
#define	B2R2BLT_S2SZSRC2_WIN_HEIGHTShift	(0x10)
#define	B2R2BLT_S2SZSRC2_WIN_WIDTH	(0xfff)
#define	B2R2BLT_S2SZSRC2_WIN_WIDTHShift	(0x0)
#define	B2R2BLT_S2SZMask		(0xfff0fff)
#define	B2R2BLT_S2SZTestMask		(0xfff0fff)
#define	B2R2BLT_S2SZInitialValue	(0x0)
#define	B2R2BLT_S2SZAccessType		(INITIAL_TEST)
#define	B2R2BLT_S2SZ			(0xc44)

/* - BLT_S3BA */
#define	B2R2BLT_S3BAS3BA_bank_num	(0xfc000000)
#define	B2R2BLT_S3BAS3BA_bank_numShift	(0x1a)
#define	B2R2BLT_S3BAS3BA_MEM_ADDR	(0x3ffffff)
#define	B2R2BLT_S3BAS3BA_MEM_ADDRShift	(0x0)
#define	B2R2BLT_S3BAMask		(0xffffffff)
#define	B2R2BLT_S3BATestMask		(0xffffffff)
#define	B2R2BLT_S3BAInitialValue	(0x0)
#define	B2R2BLT_S3BAAccessType		(INITIAL_TEST)
#define	B2R2BLT_S3BA			(0xc48)

/* - BLT_S3TY */
#define	B2R2BLT_S3TYSecure		(0x80000000)
#define	B2R2BLT_S3TYHSO			(0x2000000)
#define	B2R2BLT_S3TYVSO			(0x1000000)
#define	B2R2BLT_S3TYMB_FIELD		(0x800000)
#define	B2R2BLT_S3TYALPHA_RANGE		(0x200000)
#define	B2R2BLT_S3TYCOLOR_FORM		(0x1f0000)
#define	B2R2BLT_S3TYCOLOR_FORMShift	(0x10)
#define	B2R2BLT_S3TYPIXMAP_PITCH	(0xffff)
#define	B2R2BLT_S3TYPIXMAP_PITCHShift	(0x0)
#define	B2R2BLT_S3TYMask		(0x83bfffff)
#define	B2R2BLT_S3TYTestMask		(0x83bfffff)
#define	B2R2BLT_S3TYInitialValue	(0x0)
#define	B2R2BLT_S3TYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S3TY			(0xc4c)

/* - BLT_S3XY */
#define	B2R2BLT_S3XYYCOORD		(0xffff0000)
#define	B2R2BLT_S3XYYCOORDShift		(0x10)
#define	B2R2BLT_S3XYXCOORD		(0xffff)
#define	B2R2BLT_S3XYXCOORDShift		(0x0)
#define	B2R2BLT_S3XYMask		(0xffffffff)
#define	B2R2BLT_S3XYTestMask		(0xffffffff)
#define	B2R2BLT_S3XYInitialValue	(0x0)
#define	B2R2BLT_S3XYAccessType		(INITIAL_TEST)
#define	B2R2BLT_S3XY			(0xc50)

/* - BLT_S3SZ */
#define	B2R2BLT_S3SZSRC3_WIN_HEIGHT	(0xfff0000)
#define	B2R2BLT_S3SZSRC3_WIN_HEIGHTShift	(0x10)
#define	B2R2BLT_S3SZSRC3_WIN_WIDTH	(0xfff)
#define	B2R2BLT_S3SZSRC3_WIN_WIDTHShift	(0x0)
#define	B2R2BLT_S3SZMask		(0xfff0fff)
#define	B2R2BLT_S3SZTestMask		(0xfff0fff)
#define	B2R2BLT_S3SZInitialValue	(0x0)
#define	B2R2BLT_S3SZAccessType		(INITIAL_TEST)
#define	B2R2BLT_S3SZ			(0xc54)

/* - BLT_CWO */
#define	B2R2BLT_CWOINTNL		(0x8000000)
#define	B2R2BLT_CWOYDO			(0x7ff0000)
#define	B2R2BLT_CWOYDOShift		(0x10)
#define	B2R2BLT_CWOXDO			(0x7fff)
#define	B2R2BLT_CWOXDOShift		(0x0)
#define	B2R2BLT_CWOMask			(0xfff7fff)
#define	B2R2BLT_CWOTestMask		(0xffff0fff)
#define	B2R2BLT_CWOInitialValue		(0x0)
#define	B2R2BLT_CWOAccessType		(INITIAL_TEST)
#define	B2R2BLT_CWO			(0xc58)

/* - BLT_CWS */
#define	B2R2BLT_CWSYDS			(0x7ff0000)
#define	B2R2BLT_CWSYDSShift		(0x10)
#define	B2R2BLT_CWSXDS			(0x7fff)
#define	B2R2BLT_CWSXDSShift		(0x0)
#define	B2R2BLT_CWSMask			(0x7ff7fff)
#define	B2R2BLT_CWSTestMask		(0xfff0fff)
#define	B2R2BLT_CWSInitialValue		(0x0)
#define	B2R2BLT_CWSAccessType		(INITIAL_TEST)
#define	B2R2BLT_CWS			(0xc5c)

/* - BLT_CCO */
#define	B2R2BLT_CCOCLUT_ERRDIFF		(0x780000)
#define	B2R2BLT_CCOCLUT_ERRDIFFShift	(0x13)
#define	B2R2BLT_CCOCLUT_UPDATE		(0x40000)
#define	B2R2BLT_CCOCLUT_MODE		(0x30000)
#define	B2R2BLT_CCOCLUT_MODEShift	(0x10)
#define	B2R2BLT_CCOCLUT_NS2_1S1		(0x8000)
#define	B2R2BLT_CCOMask			(0x7f8000)
#define	B2R2BLT_CCOTestMask		(0x7f8000)
#define	B2R2BLT_CCOInitialValue		(0x0)
#define	B2R2BLT_CCOAccessType		(INITIAL_TEST)
#define	B2R2BLT_CCO			(0xc60)

/* - BLT_CML */
#define	B2R2BLT_CMLCML_BANK_NUM		(0xfc000000)
#define	B2R2BLT_CMLCML_BANK_NUMShift	(0x1a)
#define	B2R2BLT_CMLCML_MEM_ADDR		(0x3fffff0)
#define	B2R2BLT_CMLCML_MEM_ADDRShift	(0x4)
#define	B2R2BLT_CMLMask			(0xfffffff0)
#define	B2R2BLT_CMLTestMask		(0xfffffff0)
#define	B2R2BLT_CMLInitialValue		(0x0)
#define	B2R2BLT_CMLAccessType		(INITIAL_TEST)
#define	B2R2BLT_CML			(0xc64)

/* - BLT_FCTL */
#define	B2R2BLT_FCTLLuma_2Dvf_mode	(0x30000000)
#define	B2R2BLT_FCTLLuma_2Dvf_modeShift	(0x1c)
#define	B2R2BLT_FCTLLuma_2Dhf_mode	(0x3000000)
#define	B2R2BLT_FCTLLuma_2Dhf_modeShift	(0x18)
#define	B2R2BLT_FCTLAB_TOP		(0x8000)
#define	B2R2BLT_FCTLAB_BOT		(0x4000)
#define	B2R2BLT_FCTLAB_Left		(0x2000)
#define	B2R2BLT_FCTLAB_Right		(0x1000)
#define	B2R2BLT_FCTL2DVF_MODE		(0x70)
#define	B2R2BLT_FCTL2DVF_MODEShift	(0x4)
#define	B2R2BLT_FCTL2DHF_MODE		(0x7)
#define	B2R2BLT_FCTL2DHF_MODEShift	(0x0)
#define	B2R2BLT_FCTLMask		(0x3300f077)
#define	B2R2BLT_FCTLTestMask		(0xfffffff0)
#define	B2R2BLT_FCTLInitialValue	(0x0)
#define	B2R2BLT_FCTLAccessType		(INITIAL_TEST)
#define	B2R2BLT_FCTL			(0xc68)

/* - BLT_PMK */
#define	B2R2BLT_PMKPLANE_MASK		(0x1)
#define	B2R2BLT_PMKMask			(0x1)
#define	B2R2BLT_PMKTestMask		(0xffffffff)
#define	B2R2BLT_PMKInitialValue		(0x0)
#define	B2R2BLT_PMKAccessType		(INITIAL_TEST)
#define	B2R2BLT_PMK			(0xc6c)

/* - BLT_RSF */
#define	B2R2BLT_RSFVSRC_INC		(0xffff0000)
#define	B2R2BLT_RSFVSRC_INCShift	(0x10)
#define	B2R2BLT_RSFHSRC_INC		(0xffff)
#define	B2R2BLT_RSFHSRC_INCShift	(0x0)
#define	B2R2BLT_RSFMask			(0xffffffff)
#define	B2R2BLT_RSFTestMask		(0xffffffff)
#define	B2R2BLT_RSFInitialValue		(0x0)
#define	B2R2BLT_RSFAccessType		(INITIAL_TEST)
#define	B2R2BLT_RSF			(0xc70)

/* - BLT_RZI */
#define	B2R2BLT_RZIVnb_repeat		(0x70000000)
#define	B2R2BLT_RZIVnb_repeatShift	(0x1c)
#define	B2R2BLT_RZIVSRC_INIT		(0x3ff0000)
#define	B2R2BLT_RZIVSRC_INITShift	(0x10)
#define	B2R2BLT_RZIHnb_repeat		(0x7000)
#define	B2R2BLT_RZIHnb_repeatShift	(0xc)
#define	B2R2BLT_RZIHSRC_INIT		(0x3ff)
#define	B2R2BLT_RZIHSRC_INITShift	(0x0)
#define	B2R2BLT_RZIMask			(0x73ff73ff)
#define	B2R2BLT_RZITestMask		(0x73ff73ff)
#define	B2R2BLT_RZIInitialValue		(0x0)
#define	B2R2BLT_RZIAccessType		(INITIAL_TEST)
#define	B2R2BLT_RZI			(0xc74)

/* - BLT_HFP */
#define	B2R2BLT_HFPHFP_BANK_NUM		(0xfc000000)
#define	B2R2BLT_HFPHFP_BANK_NUMShift	(0x1a)
#define	B2R2BLT_HFPHFP_MEM_ADDR		(0x3ffffff)
#define	B2R2BLT_HFPHFP_MEM_ADDRShift	(0x0)
#define	B2R2BLT_HFPMask			(0xffffffff)
#define	B2R2BLT_HFPTestMask		(0xffffffff)
#define	B2R2BLT_HFPInitialValue		(0x0)
#define	B2R2BLT_HFPAccessType		(INITIAL_TEST)
#define	B2R2BLT_HFP			(0xc78)

/* - BLT_VFP */
#define	B2R2BLT_VFPVFP_BANK_NUM		(0xfc000000)
#define	B2R2BLT_VFPVFP_BANK_NUMShift	(0x1a)
#define	B2R2BLT_VFPVFP_MEM_ADDR		(0x3ffffff)
#define	B2R2BLT_VFPVFP_MEM_ADDRShift	(0x0)
#define	B2R2BLT_VFPMask			(0xffffffff)
#define	B2R2BLT_VFPTestMask		(0xffffffff)
#define	B2R2BLT_VFPInitialValue		(0x0)
#define	B2R2BLT_VFPAccessType		(INITIAL_TEST)
#define	B2R2BLT_VFP			(0xc7c)

/* - BLT_Y_RSF */
#define	B2R2BLT_Y_RSFLuma_VSRC_INC	(0xffff0000)
#define	B2R2BLT_Y_RSFLuma_VSRC_INCShift	(0x10)
#define	B2R2BLT_Y_RSFLuma_HSRC_INC	(0xffff)
#define	B2R2BLT_Y_RSFLuma_HSRC_INCShift	(0x0)
#define	B2R2BLT_Y_RSFMask		(0xffffffff)
#define	B2R2BLT_Y_RSFTestMask		(0xffffffff)
#define	B2R2BLT_Y_RSFInitialValue	(0x0)
#define	B2R2BLT_Y_RSFAccessType		(INITIAL_TEST)
#define	B2R2BLT_Y_RSF			(0xc80)

/* - BLT_Y_RZI */
#define	B2R2BLT_Y_RZIVnb_repeat_Luma	(0x70000000)
#define	B2R2BLT_Y_RZIVnb_repeat_LumaShift	(0x1c)
#define	B2R2BLT_Y_RZIVsrc_init_luma	(0x3ff0000)
#define	B2R2BLT_Y_RZIVsrc_init_lumaShift	(0x10)
#define	B2R2BLT_Y_RZIHnb_repeat_luma	(0x7000)
#define	B2R2BLT_Y_RZIHnb_repeat_lumaShift	(0xc)
#define	B2R2BLT_Y_RZIHsrc_init_luma	(0x3ff)
#define	B2R2BLT_Y_RZIHsrc_init_lumaShift	(0x0)
#define	B2R2BLT_Y_RZIMask		(0x73ff73ff)
#define	B2R2BLT_Y_RZITestMask		(0x73ff73ff)
#define	B2R2BLT_Y_RZIInitialValue	(0x0)
#define	B2R2BLT_Y_RZIAccessType		(INITIAL_TEST)
#define	B2R2BLT_Y_RZI			(0xc84)

/* - BLT_Y_HFP */
#define	B2R2BLT_Y_HFPY_Hfp_Bank_num	(0xfc000000)
#define	B2R2BLT_Y_HFPY_Hfp_Bank_numShift	(0x1a)
#define	B2R2BLT_Y_HFPY_HFP_MEM_ADDR	(0x3ffffff)
#define	B2R2BLT_Y_HFPY_HFP_MEM_ADDRShift	(0x0)
#define	B2R2BLT_Y_HFPMask		(0xffffffff)
#define	B2R2BLT_Y_HFPTestMask		(0xffffffff)
#define	B2R2BLT_Y_HFPInitialValue	(0x0)
#define	B2R2BLT_Y_HFPAccessType		(INITIAL_TEST)
#define	B2R2BLT_Y_HFP			(0xc88)

/* - BLT_Y_VFP */
#define	B2R2BLT_Y_VFPY_Vfp_Bank_num	(0xfc000000)
#define	B2R2BLT_Y_VFPY_Vfp_Bank_numShift	(0x1a)
#define	B2R2BLT_Y_VFPY_VFP_MEM_ADDR	(0x3ffffff)
#define	B2R2BLT_Y_VFPY_VFP_MEM_ADDRShift	(0x0)
#define	B2R2BLT_Y_VFPMask		(0xffffffff)
#define	B2R2BLT_Y_VFPTestMask		(0xffffffff)
#define	B2R2BLT_Y_VFPInitialValue	(0x0)
#define	B2R2BLT_Y_VFPAccessType		(INITIAL_TEST)
#define	B2R2BLT_Y_VFP			(0xc8c)

/* - BLT_KEY1 */
#define	B2R2BLT_KEY1ALPHA0		(0xff000000)
#define	B2R2BLT_KEY1ALPHA0Shift		(0x18)
#define	B2R2BLT_KEY1RED_MIN		(0xff0000)
#define	B2R2BLT_KEY1RED_MINShift	(0x10)
#define	B2R2BLT_KEY1GREEN_MIN		(0xff00)
#define	B2R2BLT_KEY1GREEN_MINShift	(0x8)
#define	B2R2BLT_KEY1BLUE_MIN		(0xff)
#define	B2R2BLT_KEY1BLUE_MINShift	(0x0)
#define	B2R2BLT_KEY1Mask		(0xffffffff)
#define	B2R2BLT_KEY1TestMask		(0xfffffff)
#define	B2R2BLT_KEY1InitialValue	(0x0)
#define	B2R2BLT_KEY1AccessType		(INITIAL_TEST)
#define	B2R2BLT_KEY1			(0xca0)

/* - BLT_KEY2 */
#define	B2R2BLT_KEY2ALPHA1		(0xff000000)
#define	B2R2BLT_KEY2ALPHA1Shift		(0x18)
#define	B2R2BLT_KEY2RED_MAX		(0xff0000)
#define	B2R2BLT_KEY2RED_MAXShift	(0x10)
#define	B2R2BLT_KEY2GREEN_MAX		(0xff00)
#define	B2R2BLT_KEY2GREEN_MAXShift	(0x8)
#define	B2R2BLT_KEY2BLUE_MAX		(0xff)
#define	B2R2BLT_KEY2BLUE_MAXShift	(0x0)
#define	B2R2BLT_KEY2Mask		(0xffffffff)
#define	B2R2BLT_KEY2TestMask		(0xfffffff)
#define	B2R2BLT_KEY2InitialValue	(0x0)
#define	B2R2BLT_KEY2AccessType		(INITIAL_TEST)
#define	B2R2BLT_KEY2			(0xca4)

/* - BLT_SAR */
#define	B2R2BLT_SARA_SGA		(0xf0000000)
#define	B2R2BLT_SARA_SGAShift		(0x1c)
#define	B2R2BLT_SART_STBA		(0xf000000)
#define	B2R2BLT_SART_STBAShift		(0x18)
#define	B2R2BLT_SARS3_SSBA		(0x1f0000)
#define	B2R2BLT_SARS3_SSBAShift		(0x10)
#define	B2R2BLT_SARS2_SSBA		(0x1f00)
#define	B2R2BLT_SARS2_SSBAShift		(0x8)
#define	B2R2BLT_SARS1_SSBA		(0x1f)
#define	B2R2BLT_SARS1_SSBAShift		(0x0)
#define	B2R2BLT_SARMask			(0xff1f1f1f)
#define	B2R2BLT_SARTestMask		(0xf71f0f1f)
#define	B2R2BLT_SARInitialValue		(0x0)
#define	B2R2BLT_SARAccessType		(INITIAL_TEST)
#define	B2R2BLT_SAR			(0xcb0)

/* - BLT_USR */
#define	B2R2BLT_USRGENERAL_PURPOSE	(0x0)
#define	B2R2BLT_USRGENERAL_PURPOSEShift	(0x0)
#define	B2R2BLT_USRMask			(0x0)
#define	B2R2BLT_USRTestMask		(0xffffffff)
#define	B2R2BLT_USRInitialValue		(0x0)
#define	B2R2BLT_USRAccessType		(INITIAL_TEST)
#define	B2R2BLT_USR			(0xcb4)

/* - BLT_IVMX0 */
#define	B2R2BLT_IVMX0Coeff11		(0xffe00000)
#define	B2R2BLT_IVMX0Coeff11Shift	(0x15)
#define	B2R2BLT_IVMX0Coeff12		(0x1ffc00)
#define	B2R2BLT_IVMX0Coeff12Shift	(0xa)
#define	B2R2BLT_IVMX0Coeff13		(0x3ff)
#define	B2R2BLT_IVMX0Coeff13Shift	(0x0)
#define	B2R2BLT_IVMX0Mask		(0xffffffff)
#define	B2R2BLT_IVMX0TestMask		(0xffffffff)
#define	B2R2BLT_IVMX0InitialValue	(0x0)
#define	B2R2BLT_IVMX0AccessType		(INITIAL_TEST)
#define	B2R2BLT_IVMX0			(0xcc0)

/* - BLT_IVMX1 */
#define	B2R2BLT_IVMX1Coeff21		(0xffe00000)
#define	B2R2BLT_IVMX1Coeff21Shift	(0x15)
#define	B2R2BLT_IVMX1Coeff22		(0x1ffc00)
#define	B2R2BLT_IVMX1Coeff22Shift	(0xa)
#define	B2R2BLT_IVMX1Coeff23		(0x3ff)
#define	B2R2BLT_IVMX1Coeff23Shift	(0x0)
#define	B2R2BLT_IVMX1Mask		(0xffffffff)
#define	B2R2BLT_IVMX1TestMask		(0xffffffff)
#define	B2R2BLT_IVMX1InitialValue	(0x0)
#define	B2R2BLT_IVMX1AccessType		(INITIAL_TEST)
#define	B2R2BLT_IVMX1			(0xcc4)

/* - BLT_IVMX2 */
#define	B2R2BLT_IVMX2Coeff31		(0xffe00000)
#define	B2R2BLT_IVMX2Coeff31Shift	(0x15)
#define	B2R2BLT_IVMX2Coeff32		(0x1ffc00)
#define	B2R2BLT_IVMX2Coeff32Shift	(0xa)
#define	B2R2BLT_IVMX2Coeff33		(0x3ff)
#define	B2R2BLT_IVMX2Coeff33Shift	(0x0)
#define	B2R2BLT_IVMX2Mask		(0xffffffff)
#define	B2R2BLT_IVMX2TestMask		(0xffffffff)
#define	B2R2BLT_IVMX2InitialValue	(0x0)
#define	B2R2BLT_IVMX2AccessType		(INITIAL_TEST)
#define	B2R2BLT_IVMX2			(0xcc8)

/* - BLT_IVMX3 */
#define	B2R2BLT_IVMX3Offset1		(0x3ff00000)
#define	B2R2BLT_IVMX3Offset1Shift	(0x14)
#define	B2R2BLT_IVMX3Offset2		(0xffc00)
#define	B2R2BLT_IVMX3Offset2Shift	(0xa)
#define	B2R2BLT_IVMX3Offset3		(0x3ff)
#define	B2R2BLT_IVMX3Offset3Shift	(0x0)
#define	B2R2BLT_IVMX3Mask		(0x3fffffff)
#define	B2R2BLT_IVMX3TestMask		(0x3fffffff)
#define	B2R2BLT_IVMX3InitialValue	(0x0)
#define	B2R2BLT_IVMX3AccessType		(INITIAL_TEST)
#define	B2R2BLT_IVMX3			(0xccc)

/* - BLT_OVMX0 */
#define	B2R2BLT_OVMX0Coeff11		(0xffe00000)
#define	B2R2BLT_OVMX0Coeff11Shift	(0x15)
#define	B2R2BLT_OVMX0Coeff12		(0x1ffc00)
#define	B2R2BLT_OVMX0Coeff12Shift	(0xa)
#define	B2R2BLT_OVMX0Coeff13		(0x3ff)
#define	B2R2BLT_OVMX0Coeff13Shift	(0x0)
#define	B2R2BLT_OVMX0Mask		(0xffffffff)
#define	B2R2BLT_OVMX0TestMask		(0x3fffffff)
#define	B2R2BLT_OVMX0InitialValue	(0x0)
#define	B2R2BLT_OVMX0AccessType		(INITIAL_TEST)
#define	B2R2BLT_OVMX0			(0xcd0)

/* - BLT_OVMX1 */
#define	B2R2BLT_OVMX1Coeff21		(0xffe00000)
#define	B2R2BLT_OVMX1Coeff21Shift	(0x15)
#define	B2R2BLT_OVMX1Coeff22		(0x1ffc00)
#define	B2R2BLT_OVMX1Coeff22Shift	(0xa)
#define	B2R2BLT_OVMX1Coeff23		(0x3ff)
#define	B2R2BLT_OVMX1Coeff23Shift	(0x0)
#define	B2R2BLT_OVMX1Mask		(0xffffffff)
#define	B2R2BLT_OVMX1TestMask		(0xffffffff)
#define	B2R2BLT_OVMX1InitialValue	(0x0)
#define	B2R2BLT_OVMX1AccessType		(INITIAL_TEST)
#define	B2R2BLT_OVMX1			(0xcd4)

/* - BLT_OVMX2 */
#define	B2R2BLT_OVMX2Coeff31		(0xffe00000)
#define	B2R2BLT_OVMX2Coeff31Shift	(0x15)
#define	B2R2BLT_OVMX2Coeff32		(0x1ffc00)
#define	B2R2BLT_OVMX2Coeff32Shift	(0xa)
#define	B2R2BLT_OVMX2Coeff33		(0x3ff)
#define	B2R2BLT_OVMX2Coeff33Shift	(0x0)
#define	B2R2BLT_OVMX2Mask		(0xffffffff)
#define	B2R2BLT_OVMX2TestMask		(0xffffffff)
#define	B2R2BLT_OVMX2InitialValue	(0x0)
#define	B2R2BLT_OVMX2AccessType		(INITIAL_TEST)
#define	B2R2BLT_OVMX2			(0xcd8)

/* - BLT_OVMX3 */
#define	B2R2BLT_OVMX3Offset1		(0x3ff00000)
#define	B2R2BLT_OVMX3Offset1Shift	(0x14)
#define	B2R2BLT_OVMX3Offset2		(0xffc00)
#define	B2R2BLT_OVMX3Offset2Shift	(0xa)
#define	B2R2BLT_OVMX3Offset3		(0x3ff)
#define	B2R2BLT_OVMX3Offset3Shift	(0x0)
#define	B2R2BLT_OVMX3Mask		(0x3fffffff)
#define	B2R2BLT_OVMX3TestMask		(0x3fffffff)
#define	B2R2BLT_OVMX3InitialValue	(0x0)
#define	B2R2BLT_OVMX3AccessType		(INITIAL_TEST)
#define	B2R2BLT_OVMX3			(0xcdc)

/* - BLT_VC1R */
#define	B2R2BLT_VC1RChroma_map		(0x80)
#define	B2R2BLT_VC1RChroma_coeff	(0x70)
#define	B2R2BLT_VC1RChroma_coeffShift	(0x4)
#define	B2R2BLT_VC1RLuma_Map		(0x8)
#define	B2R2BLT_VC1RLuma_coeff		(0x7)
#define	B2R2BLT_VC1RLuma_coeffShift	(0x0)
#define	B2R2BLT_VC1RMask		(0xff)
#define	B2R2BLT_VC1RTestMask		(0xff)
#define	B2R2BLT_VC1RInitialValue	(0x0)
#define	B2R2BLT_VC1RAccessType		(INITIAL_TEST)
#define	B2R2BLT_VC1R			(0xce8)

/* - BLT_Y_HFC0 */
#define	B2R2BLT_Y_HFC0K3		(0xff000000)
#define	B2R2BLT_Y_HFC0K3Shift		(0x18)
#define	B2R2BLT_Y_HFC0K2		(0xff0000)
#define	B2R2BLT_Y_HFC0K2Shift		(0x10)
#define	B2R2BLT_Y_HFC0K1		(0xff00)
#define	B2R2BLT_Y_HFC0K1Shift		(0x8)
#define	B2R2BLT_Y_HFC0K0		(0xff)
#define	B2R2BLT_Y_HFC0K0Shift		(0x0)
#define	B2R2BLT_Y_HFC0Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC0TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC0InitialValue	(0x0)
#define	B2R2BLT_Y_HFC0AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC0			(0xd00)

/* - BLT_Y_HFC1 */
#define	B2R2BLT_Y_HFC1K7		(0xff000000)
#define	B2R2BLT_Y_HFC1K7Shift		(0x18)
#define	B2R2BLT_Y_HFC1K6		(0xff0000)
#define	B2R2BLT_Y_HFC1K6Shift		(0x10)
#define	B2R2BLT_Y_HFC1K5		(0xff00)
#define	B2R2BLT_Y_HFC1K5Shift		(0x8)
#define	B2R2BLT_Y_HFC1K4		(0xff)
#define	B2R2BLT_Y_HFC1K4Shift		(0x0)
#define	B2R2BLT_Y_HFC1Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC1TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC1InitialValue	(0x0)
#define	B2R2BLT_Y_HFC1AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC1			(0xd04)

/* - BLT_Y_HFC2 */
#define	B2R2BLT_Y_HFC2K13		(0xff000000)
#define	B2R2BLT_Y_HFC2K13Shift		(0x18)
#define	B2R2BLT_Y_HFC2K12		(0xff0000)
#define	B2R2BLT_Y_HFC2K12Shift		(0x10)
#define	B2R2BLT_Y_HFC2K11		(0xff00)
#define	B2R2BLT_Y_HFC2K11Shift		(0x8)
#define	B2R2BLT_Y_HFC2K10		(0xff)
#define	B2R2BLT_Y_HFC2K10Shift		(0x0)
#define	B2R2BLT_Y_HFC2Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC2TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC2InitialValue	(0x0)
#define	B2R2BLT_Y_HFC2AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC2			(0xd08)

/* - BLT_Y_HFC3 */
#define	B2R2BLT_Y_HFC3K17		(0xff000000)
#define	B2R2BLT_Y_HFC3K17Shift		(0x18)
#define	B2R2BLT_Y_HFC3K16		(0xff0000)
#define	B2R2BLT_Y_HFC3K16Shift		(0x10)
#define	B2R2BLT_Y_HFC3K15		(0xff00)
#define	B2R2BLT_Y_HFC3K15Shift		(0x8)
#define	B2R2BLT_Y_HFC3K14		(0xff)
#define	B2R2BLT_Y_HFC3K14Shift		(0x0)
#define	B2R2BLT_Y_HFC3Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC3TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC3InitialValue	(0x0)
#define	B2R2BLT_Y_HFC3AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC3			(0xd0c)

/* - BLT_Y_HFC4 */
#define	B2R2BLT_Y_HFC4K23		(0xff000000)
#define	B2R2BLT_Y_HFC4K23Shift		(0x18)
#define	B2R2BLT_Y_HFC4K22		(0xff0000)
#define	B2R2BLT_Y_HFC4K22Shift		(0x10)
#define	B2R2BLT_Y_HFC4K21		(0xff00)
#define	B2R2BLT_Y_HFC4K21Shift		(0x8)
#define	B2R2BLT_Y_HFC4K20		(0xff)
#define	B2R2BLT_Y_HFC4K20Shift		(0x0)
#define	B2R2BLT_Y_HFC4Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC4TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC4InitialValue	(0x0)
#define	B2R2BLT_Y_HFC4AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC4			(0xd10)

/* - BLT_Y_HFC5 */
#define	B2R2BLT_Y_HFC5K27		(0xff000000)
#define	B2R2BLT_Y_HFC5K27Shift		(0x18)
#define	B2R2BLT_Y_HFC5K26		(0xff0000)
#define	B2R2BLT_Y_HFC5K26Shift		(0x10)
#define	B2R2BLT_Y_HFC5K25		(0xff00)
#define	B2R2BLT_Y_HFC5K25Shift		(0x8)
#define	B2R2BLT_Y_HFC5K24		(0xff)
#define	B2R2BLT_Y_HFC5K24Shift		(0x0)
#define	B2R2BLT_Y_HFC5Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC5TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC5InitialValue	(0x0)
#define	B2R2BLT_Y_HFC5AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC5			(0xd14)

/* - BLT_Y_HFC6 */
#define	B2R2BLT_Y_HFC6K33		(0xff000000)
#define	B2R2BLT_Y_HFC6K33Shift		(0x18)
#define	B2R2BLT_Y_HFC6K32		(0xff0000)
#define	B2R2BLT_Y_HFC6K32Shift		(0x10)
#define	B2R2BLT_Y_HFC6K31		(0xff00)
#define	B2R2BLT_Y_HFC6K31Shift		(0x8)
#define	B2R2BLT_Y_HFC6K30		(0xff)
#define	B2R2BLT_Y_HFC6K30Shift		(0x0)
#define	B2R2BLT_Y_HFC6Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC6TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC6InitialValue	(0x0)
#define	B2R2BLT_Y_HFC6AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC6			(0xd18)

/* - BLT_Y_HFC7 */
#define	B2R2BLT_Y_HFC7K37		(0xff000000)
#define	B2R2BLT_Y_HFC7K37Shift		(0x18)
#define	B2R2BLT_Y_HFC7K36		(0xff0000)
#define	B2R2BLT_Y_HFC7K36Shift		(0x10)
#define	B2R2BLT_Y_HFC7K35		(0xff00)
#define	B2R2BLT_Y_HFC7K35Shift		(0x8)
#define	B2R2BLT_Y_HFC7K34		(0xff)
#define	B2R2BLT_Y_HFC7K34Shift		(0x0)
#define	B2R2BLT_Y_HFC7Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC7TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC7InitialValue	(0x0)
#define	B2R2BLT_Y_HFC7AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC7			(0xd1c)

/* - BLT_Y_HFC8 */
#define	B2R2BLT_Y_HFC8K43		(0xff000000)
#define	B2R2BLT_Y_HFC8K43Shift		(0x18)
#define	B2R2BLT_Y_HFC8K42		(0xff0000)
#define	B2R2BLT_Y_HFC8K42Shift		(0x10)
#define	B2R2BLT_Y_HFC8K41		(0xff00)
#define	B2R2BLT_Y_HFC8K41Shift		(0x8)
#define	B2R2BLT_Y_HFC8K40		(0xff)
#define	B2R2BLT_Y_HFC8K40Shift		(0x0)
#define	B2R2BLT_Y_HFC8Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC8TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC8InitialValue	(0x0)
#define	B2R2BLT_Y_HFC8AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC8			(0xd20)

/* - BLT_Y_HFC9 */
#define	B2R2BLT_Y_HFC9K47		(0xff000000)
#define	B2R2BLT_Y_HFC9K47Shift		(0x18)
#define	B2R2BLT_Y_HFC9K46		(0xff0000)
#define	B2R2BLT_Y_HFC9K46Shift		(0x10)
#define	B2R2BLT_Y_HFC9K45		(0xff00)
#define	B2R2BLT_Y_HFC9K45Shift		(0x8)
#define	B2R2BLT_Y_HFC9K44		(0xff)
#define	B2R2BLT_Y_HFC9K44Shift		(0x0)
#define	B2R2BLT_Y_HFC9Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC9TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC9InitialValue	(0x0)
#define	B2R2BLT_Y_HFC9AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC9			(0xd24)

/* - BLT_Y_HFC10 */
#define	B2R2BLT_Y_HFC10K53		(0xff000000)
#define	B2R2BLT_Y_HFC10K53Shift		(0x18)
#define	B2R2BLT_Y_HFC10K52		(0xff0000)
#define	B2R2BLT_Y_HFC10K52Shift		(0x10)
#define	B2R2BLT_Y_HFC10K51		(0xff00)
#define	B2R2BLT_Y_HFC10K51Shift		(0x8)
#define	B2R2BLT_Y_HFC10K50		(0xff)
#define	B2R2BLT_Y_HFC10K50Shift		(0x0)
#define	B2R2BLT_Y_HFC10Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC10TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC10InitialValue	(0x0)
#define	B2R2BLT_Y_HFC10AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC10			(0xd28)

/* - BLT_Y_HFC11 */
#define	B2R2BLT_Y_HFC11K57		(0xff000000)
#define	B2R2BLT_Y_HFC11K57Shift		(0x18)
#define	B2R2BLT_Y_HFC11K56		(0xff0000)
#define	B2R2BLT_Y_HFC11K56Shift		(0x10)
#define	B2R2BLT_Y_HFC11K55		(0xff00)
#define	B2R2BLT_Y_HFC11K55Shift		(0x8)
#define	B2R2BLT_Y_HFC11K54		(0xff)
#define	B2R2BLT_Y_HFC11K54Shift		(0x0)
#define	B2R2BLT_Y_HFC11Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC11TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC11InitialValue	(0x0)
#define	B2R2BLT_Y_HFC11AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC11			(0xd2c)

/* - BLT_Y_HFC12 */
#define	B2R2BLT_Y_HFC12K63		(0xff000000)
#define	B2R2BLT_Y_HFC12K63Shift		(0x18)
#define	B2R2BLT_Y_HFC12K62		(0xff0000)
#define	B2R2BLT_Y_HFC12K62Shift		(0x10)
#define	B2R2BLT_Y_HFC12K61		(0xff00)
#define	B2R2BLT_Y_HFC12K61Shift		(0x8)
#define	B2R2BLT_Y_HFC12K60		(0xff)
#define	B2R2BLT_Y_HFC12K60Shift		(0x0)
#define	B2R2BLT_Y_HFC12Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC12TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC12InitialValue	(0x0)
#define	B2R2BLT_Y_HFC12AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC12			(0xd30)

/* - BLT_Y_HFC13 */
#define	B2R2BLT_Y_HFC13K67		(0xff000000)
#define	B2R2BLT_Y_HFC13K67Shift		(0x18)
#define	B2R2BLT_Y_HFC13K66		(0xff0000)
#define	B2R2BLT_Y_HFC13K66Shift		(0x10)
#define	B2R2BLT_Y_HFC13K65		(0xff00)
#define	B2R2BLT_Y_HFC13K65Shift		(0x8)
#define	B2R2BLT_Y_HFC13K64		(0xff)
#define	B2R2BLT_Y_HFC13K64Shift		(0x0)
#define	B2R2BLT_Y_HFC13Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC13TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC13InitialValue	(0x0)
#define	B2R2BLT_Y_HFC13AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC13			(0xd34)

/* - BLT_Y_HFC14 */
#define	B2R2BLT_Y_HFC14K73		(0xff000000)
#define	B2R2BLT_Y_HFC14K73Shift		(0x18)
#define	B2R2BLT_Y_HFC14K72		(0xff0000)
#define	B2R2BLT_Y_HFC14K72Shift		(0x10)
#define	B2R2BLT_Y_HFC14K71		(0xff00)
#define	B2R2BLT_Y_HFC14K71Shift		(0x8)
#define	B2R2BLT_Y_HFC14K70		(0xff)
#define	B2R2BLT_Y_HFC14K70Shift		(0x0)
#define	B2R2BLT_Y_HFC14Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC14TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC14InitialValue	(0x0)
#define	B2R2BLT_Y_HFC14AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC14			(0xd38)

/* - BLT_Y_HFC15 */
#define	B2R2BLT_Y_HFC15K77		(0xff000000)
#define	B2R2BLT_Y_HFC15K77Shift		(0x18)
#define	B2R2BLT_Y_HFC15K76		(0xff0000)
#define	B2R2BLT_Y_HFC15K76Shift		(0x10)
#define	B2R2BLT_Y_HFC15K75		(0xff00)
#define	B2R2BLT_Y_HFC15K75Shift		(0x8)
#define	B2R2BLT_Y_HFC15K74		(0xff)
#define	B2R2BLT_Y_HFC15K74Shift		(0x0)
#define	B2R2BLT_Y_HFC15Mask		(0xffffffff)
#define	B2R2BLT_Y_HFC15TestMask		(0xffffffff)
#define	B2R2BLT_Y_HFC15InitialValue	(0x0)
#define	B2R2BLT_Y_HFC15AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_HFC15			(0xd3c)

/* - BLT_Y_VFC0 */
#define	B2R2BLT_Y_VFC0K3		(0xff000000)
#define	B2R2BLT_Y_VFC0K3Shift		(0x18)
#define	B2R2BLT_Y_VFC0K2		(0xff0000)
#define	B2R2BLT_Y_VFC0K2Shift		(0x10)
#define	B2R2BLT_Y_VFC0K1		(0xff00)
#define	B2R2BLT_Y_VFC0K1Shift		(0x8)
#define	B2R2BLT_Y_VFC0K0		(0xff)
#define	B2R2BLT_Y_VFC0K0Shift		(0x0)
#define	B2R2BLT_Y_VFC0Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC0TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC0InitialValue	(0x0)
#define	B2R2BLT_Y_VFC0AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC0			(0xd90)

/* - BLT_Y_VFC1 */
#define	B2R2BLT_Y_VFC1K12		(0xff000000)
#define	B2R2BLT_Y_VFC1K12Shift		(0x18)
#define	B2R2BLT_Y_VFC1K11		(0xff0000)
#define	B2R2BLT_Y_VFC1K11Shift		(0x10)
#define	B2R2BLT_Y_VFC1K10		(0xff00)
#define	B2R2BLT_Y_VFC1K10Shift		(0x8)
#define	B2R2BLT_Y_VFC1K4		(0xff)
#define	B2R2BLT_Y_VFC1K4Shift		(0x0)
#define	B2R2BLT_Y_VFC1Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC1TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC1InitialValue	(0x0)
#define	B2R2BLT_Y_VFC1AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC1			(0xd94)

/* - BLT_Y_VFC2 */
#define	B2R2BLT_Y_VFC2K21		(0xff000000)
#define	B2R2BLT_Y_VFC2K21Shift		(0x18)
#define	B2R2BLT_Y_VFC2K20		(0xff0000)
#define	B2R2BLT_Y_VFC2K20Shift		(0x10)
#define	B2R2BLT_Y_VFC2K14		(0xff00)
#define	B2R2BLT_Y_VFC2K14Shift		(0x8)
#define	B2R2BLT_Y_VFC2K13		(0xff)
#define	B2R2BLT_Y_VFC2K13Shift		(0x0)
#define	B2R2BLT_Y_VFC2Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC2TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC2InitialValue	(0x0)
#define	B2R2BLT_Y_VFC2AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC2			(0xd98)

/* - BLT_Y_VFC3 */
#define	B2R2BLT_Y_VFC3K30		(0xff000000)
#define	B2R2BLT_Y_VFC3K30Shift		(0x18)
#define	B2R2BLT_Y_VFC3K24		(0xff0000)
#define	B2R2BLT_Y_VFC3K24Shift		(0x10)
#define	B2R2BLT_Y_VFC3K23		(0xff00)
#define	B2R2BLT_Y_VFC3K23Shift		(0x8)
#define	B2R2BLT_Y_VFC3K22		(0xff)
#define	B2R2BLT_Y_VFC3K22Shift		(0x0)
#define	B2R2BLT_Y_VFC3Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC3TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC3InitialValue	(0x0)
#define	B2R2BLT_Y_VFC3AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC3			(0xd9c)

/* - BLT_Y_VFC4 */
#define	B2R2BLT_Y_VFC4K34		(0xff000000)
#define	B2R2BLT_Y_VFC4K34Shift		(0x18)
#define	B2R2BLT_Y_VFC4K33		(0xff0000)
#define	B2R2BLT_Y_VFC4K33Shift		(0x10)
#define	B2R2BLT_Y_VFC4K32		(0xff00)
#define	B2R2BLT_Y_VFC4K32Shift		(0x8)
#define	B2R2BLT_Y_VFC4K31		(0xff)
#define	B2R2BLT_Y_VFC4K31Shift		(0x0)
#define	B2R2BLT_Y_VFC4Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC4TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC4InitialValue	(0x0)
#define	B2R2BLT_Y_VFC4AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC4			(0xda0)

/* - BLT_Y_VFC5 */
#define	B2R2BLT_Y_VFC5K43		(0xff000000)
#define	B2R2BLT_Y_VFC5K43Shift		(0x18)
#define	B2R2BLT_Y_VFC5K42		(0xff0000)
#define	B2R2BLT_Y_VFC5K42Shift		(0x10)
#define	B2R2BLT_Y_VFC5K41		(0xff00)
#define	B2R2BLT_Y_VFC5K41Shift		(0x8)
#define	B2R2BLT_Y_VFC5K40		(0xff)
#define	B2R2BLT_Y_VFC5K40Shift		(0x0)
#define	B2R2BLT_Y_VFC5Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC5TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC5InitialValue	(0x0)
#define	B2R2BLT_Y_VFC5AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC5			(0xda4)

/* - BLT_Y_VFC6 */
#define	B2R2BLT_Y_VFC6K52		(0xff000000)
#define	B2R2BLT_Y_VFC6K52Shift		(0x18)
#define	B2R2BLT_Y_VFC6K51		(0xff0000)
#define	B2R2BLT_Y_VFC6K51Shift		(0x10)
#define	B2R2BLT_Y_VFC6K50		(0xff00)
#define	B2R2BLT_Y_VFC6K50Shift		(0x8)
#define	B2R2BLT_Y_VFC6K44		(0xff)
#define	B2R2BLT_Y_VFC6K44Shift		(0x0)
#define	B2R2BLT_Y_VFC6Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC6TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC6InitialValue	(0x0)
#define	B2R2BLT_Y_VFC6AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC6			(0xda8)

/* - BLT_Y_VFC7 */
#define	B2R2BLT_Y_VFC7K61		(0xff000000)
#define	B2R2BLT_Y_VFC7K61Shift		(0x18)
#define	B2R2BLT_Y_VFC7K60		(0xff0000)
#define	B2R2BLT_Y_VFC7K60Shift		(0x10)
#define	B2R2BLT_Y_VFC7K54		(0xff00)
#define	B2R2BLT_Y_VFC7K54Shift		(0x8)
#define	B2R2BLT_Y_VFC7K53		(0xff)
#define	B2R2BLT_Y_VFC7K53Shift		(0x0)
#define	B2R2BLT_Y_VFC7Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC7TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC7InitialValue	(0x0)
#define	B2R2BLT_Y_VFC7AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC7			(0xdac)

/* - BLT_Y_VFC8 */
#define	B2R2BLT_Y_VFC8K70		(0xff000000)
#define	B2R2BLT_Y_VFC8K70Shift		(0x18)
#define	B2R2BLT_Y_VFC8K64		(0xff0000)
#define	B2R2BLT_Y_VFC8K64Shift		(0x10)
#define	B2R2BLT_Y_VFC8K63		(0xff00)
#define	B2R2BLT_Y_VFC8K63Shift		(0x8)
#define	B2R2BLT_Y_VFC8K62		(0xff)
#define	B2R2BLT_Y_VFC8K62Shift		(0x0)
#define	B2R2BLT_Y_VFC8Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC8TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC8InitialValue	(0x0)
#define	B2R2BLT_Y_VFC8AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC8			(0xdb0)

/* - BLT_Y_VFC9 */
#define	B2R2BLT_Y_VFC9K74		(0xff000000)
#define	B2R2BLT_Y_VFC9K74Shift		(0x18)
#define	B2R2BLT_Y_VFC9K73		(0xff0000)
#define	B2R2BLT_Y_VFC9K73Shift		(0x10)
#define	B2R2BLT_Y_VFC9K72		(0xff00)
#define	B2R2BLT_Y_VFC9K72Shift		(0x8)
#define	B2R2BLT_Y_VFC9K71		(0xff)
#define	B2R2BLT_Y_VFC9K71Shift		(0x0)
#define	B2R2BLT_Y_VFC9Mask		(0xffffffff)
#define	B2R2BLT_Y_VFC9TestMask		(0xffffffff)
#define	B2R2BLT_Y_VFC9InitialValue	(0x0)
#define	B2R2BLT_Y_VFC9AccessType	(INITIAL_TEST)
#define	B2R2BLT_Y_VFC9			(0xdb4)

/* - BLT_HFC0 */
#define	B2R2BLT_HFC0K3			(0xff000000)
#define	B2R2BLT_HFC0K3Shift		(0x18)
#define	B2R2BLT_HFC0K2			(0xff0000)
#define	B2R2BLT_HFC0K2Shift		(0x10)
#define	B2R2BLT_HFC0K1			(0xff00)
#define	B2R2BLT_HFC0K1Shift		(0x8)
#define	B2R2BLT_HFC0K0			(0xff)
#define	B2R2BLT_HFC0K0Shift		(0x0)
#define	B2R2BLT_HFC0Mask		(0xffffffff)
#define	B2R2BLT_HFC0TestMask		(0xffffffff)
#define	B2R2BLT_HFC0InitialValue	(0x0)
#define	B2R2BLT_HFC0AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC0			(0xe00)

/* - BLT_HFC1 */
#define	B2R2BLT_HFC1K7			(0xff000000)
#define	B2R2BLT_HFC1K7Shift		(0x18)
#define	B2R2BLT_HFC1K6			(0xff0000)
#define	B2R2BLT_HFC1K6Shift		(0x10)
#define	B2R2BLT_HFC1K5			(0xff00)
#define	B2R2BLT_HFC1K5Shift		(0x8)
#define	B2R2BLT_HFC1K4			(0xff)
#define	B2R2BLT_HFC1K4Shift		(0x0)
#define	B2R2BLT_HFC1Mask		(0xffffffff)
#define	B2R2BLT_HFC1TestMask		(0xffffffff)
#define	B2R2BLT_HFC1InitialValue	(0x0)
#define	B2R2BLT_HFC1AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC1			(0xe04)

/* - BLT_HFC2 */
#define	B2R2BLT_HFC2K13			(0xff000000)
#define	B2R2BLT_HFC2K13Shift		(0x18)
#define	B2R2BLT_HFC2K12			(0xff0000)
#define	B2R2BLT_HFC2K12Shift		(0x10)
#define	B2R2BLT_HFC2K11			(0xff00)
#define	B2R2BLT_HFC2K11Shift		(0x8)
#define	B2R2BLT_HFC2K10			(0xff)
#define	B2R2BLT_HFC2K10Shift		(0x0)
#define	B2R2BLT_HFC2Mask		(0xffffffff)
#define	B2R2BLT_HFC2TestMask		(0xffffffff)
#define	B2R2BLT_HFC2InitialValue	(0x0)
#define	B2R2BLT_HFC2AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC2			(0xe08)

/* - BLT_HFC3 */
#define	B2R2BLT_HFC3K17			(0xff000000)
#define	B2R2BLT_HFC3K17Shift		(0x18)
#define	B2R2BLT_HFC3K16			(0xff0000)
#define	B2R2BLT_HFC3K16Shift		(0x10)
#define	B2R2BLT_HFC3K15			(0xff00)
#define	B2R2BLT_HFC3K15Shift		(0x8)
#define	B2R2BLT_HFC3K14			(0xff)
#define	B2R2BLT_HFC3K14Shift		(0x0)
#define	B2R2BLT_HFC3Mask		(0xffffffff)
#define	B2R2BLT_HFC3TestMask		(0xffffffff)
#define	B2R2BLT_HFC3InitialValue	(0x0)
#define	B2R2BLT_HFC3AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC3			(0xe0c)

/* - BLT_HFC4 */
#define	B2R2BLT_HFC4K23			(0xff000000)
#define	B2R2BLT_HFC4K23Shift		(0x18)
#define	B2R2BLT_HFC4K22			(0xff0000)
#define	B2R2BLT_HFC4K22Shift		(0x10)
#define	B2R2BLT_HFC4K21			(0xff00)
#define	B2R2BLT_HFC4K21Shift		(0x8)
#define	B2R2BLT_HFC4K20			(0xff)
#define	B2R2BLT_HFC4K20Shift		(0x0)
#define	B2R2BLT_HFC4Mask		(0xffffffff)
#define	B2R2BLT_HFC4TestMask		(0xffffffff)
#define	B2R2BLT_HFC4InitialValue	(0x0)
#define	B2R2BLT_HFC4AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC4			(0xe10)

/* - BLT_HFC5 */
#define	B2R2BLT_HFC5K27			(0xff000000)
#define	B2R2BLT_HFC5K27Shift		(0x18)
#define	B2R2BLT_HFC5K26			(0xff0000)
#define	B2R2BLT_HFC5K26Shift		(0x10)
#define	B2R2BLT_HFC5K25			(0xff00)
#define	B2R2BLT_HFC5K25Shift		(0x8)
#define	B2R2BLT_HFC5K24			(0xff)
#define	B2R2BLT_HFC5K24Shift		(0x0)
#define	B2R2BLT_HFC5Mask		(0xffffffff)
#define	B2R2BLT_HFC5TestMask		(0xffffffff)
#define	B2R2BLT_HFC5InitialValue	(0x0)
#define	B2R2BLT_HFC5AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC5			(0xe14)

/* - BLT_HFC6 */
#define	B2R2BLT_HFC6K33			(0xff000000)
#define	B2R2BLT_HFC6K33Shift		(0x18)
#define	B2R2BLT_HFC6K32			(0xff0000)
#define	B2R2BLT_HFC6K32Shift		(0x10)
#define	B2R2BLT_HFC6K31			(0xff00)
#define	B2R2BLT_HFC6K31Shift		(0x8)
#define	B2R2BLT_HFC6K30			(0xff)
#define	B2R2BLT_HFC6K30Shift		(0x0)
#define	B2R2BLT_HFC6Mask		(0xffffffff)
#define	B2R2BLT_HFC6TestMask		(0xffffffff)
#define	B2R2BLT_HFC6InitialValue	(0x0)
#define	B2R2BLT_HFC6AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC6			(0xe18)

/* - BLT_HFC7 */
#define	B2R2BLT_HFC7K37			(0xff000000)
#define	B2R2BLT_HFC7K37Shift		(0x18)
#define	B2R2BLT_HFC7K36			(0xff0000)
#define	B2R2BLT_HFC7K36Shift		(0x10)
#define	B2R2BLT_HFC7K35			(0xff00)
#define	B2R2BLT_HFC7K35Shift		(0x8)
#define	B2R2BLT_HFC7K34			(0xff)
#define	B2R2BLT_HFC7K34Shift		(0x0)
#define	B2R2BLT_HFC7Mask		(0xffffffff)
#define	B2R2BLT_HFC7TestMask		(0xffffffff)
#define	B2R2BLT_HFC7InitialValue	(0x0)
#define	B2R2BLT_HFC7AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC7			(0xe1c)

/* - BLT_HFC8 */
#define	B2R2BLT_HFC8K43			(0xff000000)
#define	B2R2BLT_HFC8K43Shift		(0x18)
#define	B2R2BLT_HFC8K42			(0xff0000)
#define	B2R2BLT_HFC8K42Shift		(0x10)
#define	B2R2BLT_HFC8K41			(0xff00)
#define	B2R2BLT_HFC8K41Shift		(0x8)
#define	B2R2BLT_HFC8K40			(0xff)
#define	B2R2BLT_HFC8K40Shift		(0x0)
#define	B2R2BLT_HFC8Mask		(0xffffffff)
#define	B2R2BLT_HFC8TestMask		(0xffffffff)
#define	B2R2BLT_HFC8InitialValue	(0x0)
#define	B2R2BLT_HFC8AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC8			(0xe20)

/* - BLT_HFC9 */
#define	B2R2BLT_HFC9K47			(0xff000000)
#define	B2R2BLT_HFC9K47Shift		(0x18)
#define	B2R2BLT_HFC9K46			(0xff0000)
#define	B2R2BLT_HFC9K46Shift		(0x10)
#define	B2R2BLT_HFC9K45			(0xff00)
#define	B2R2BLT_HFC9K45Shift		(0x8)
#define	B2R2BLT_HFC9K44			(0xff)
#define	B2R2BLT_HFC9K44Shift		(0x0)
#define	B2R2BLT_HFC9Mask		(0xffffffff)
#define	B2R2BLT_HFC9TestMask		(0xffffffff)
#define	B2R2BLT_HFC9InitialValue	(0x0)
#define	B2R2BLT_HFC9AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC9			(0xe24)

/* - BLT_HFC10 */
#define	B2R2BLT_HFC10K53		(0xff000000)
#define	B2R2BLT_HFC10K53Shift		(0x18)
#define	B2R2BLT_HFC10K52		(0xff0000)
#define	B2R2BLT_HFC10K52Shift		(0x10)
#define	B2R2BLT_HFC10K51		(0xff00)
#define	B2R2BLT_HFC10K51Shift		(0x8)
#define	B2R2BLT_HFC10K50		(0xff)
#define	B2R2BLT_HFC10K50Shift		(0x0)
#define	B2R2BLT_HFC10Mask		(0xffffffff)
#define	B2R2BLT_HFC10TestMask		(0xffffffff)
#define	B2R2BLT_HFC10InitialValue	(0x0)
#define	B2R2BLT_HFC10AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC10			(0xe28)

/* - BLT_HFC11 */
#define	B2R2BLT_HFC11K57		(0xff000000)
#define	B2R2BLT_HFC11K57Shift		(0x18)
#define	B2R2BLT_HFC11K56		(0xff0000)
#define	B2R2BLT_HFC11K56Shift		(0x10)
#define	B2R2BLT_HFC11K55		(0xff00)
#define	B2R2BLT_HFC11K55Shift		(0x8)
#define	B2R2BLT_HFC11K54		(0xff)
#define	B2R2BLT_HFC11K54Shift		(0x0)
#define	B2R2BLT_HFC11Mask		(0xffffffff)
#define	B2R2BLT_HFC11TestMask		(0xffffffff)
#define	B2R2BLT_HFC11InitialValue	(0x0)
#define	B2R2BLT_HFC11AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC11			(0xe2c)

/* - BLT_HFC12 */
#define	B2R2BLT_HFC12K63		(0xff000000)
#define	B2R2BLT_HFC12K63Shift		(0x18)
#define	B2R2BLT_HFC12K62		(0xff0000)
#define	B2R2BLT_HFC12K62Shift		(0x10)
#define	B2R2BLT_HFC12K61		(0xff00)
#define	B2R2BLT_HFC12K61Shift		(0x8)
#define	B2R2BLT_HFC12K60		(0xff)
#define	B2R2BLT_HFC12K60Shift		(0x0)
#define	B2R2BLT_HFC12Mask		(0xffffffff)
#define	B2R2BLT_HFC12TestMask		(0xffffffff)
#define	B2R2BLT_HFC12InitialValue	(0x0)
#define	B2R2BLT_HFC12AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC12			(0xe30)

/* - BLT_HFC13 */
#define	B2R2BLT_HFC13K67		(0xff000000)
#define	B2R2BLT_HFC13K67Shift		(0x18)
#define	B2R2BLT_HFC13K66		(0xff0000)
#define	B2R2BLT_HFC13K66Shift		(0x10)
#define	B2R2BLT_HFC13K65		(0xff00)
#define	B2R2BLT_HFC13K65Shift		(0x8)
#define	B2R2BLT_HFC13K64		(0xff)
#define	B2R2BLT_HFC13K64Shift		(0x0)
#define	B2R2BLT_HFC13Mask		(0xffffffff)
#define	B2R2BLT_HFC13TestMask		(0xffffffff)
#define	B2R2BLT_HFC13InitialValue	(0x0)
#define	B2R2BLT_HFC13AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC13			(0xe34)

/* - BLT_HFC14 */
#define	B2R2BLT_HFC14K73		(0xff000000)
#define	B2R2BLT_HFC14K73Shift		(0x18)
#define	B2R2BLT_HFC14K72		(0xff0000)
#define	B2R2BLT_HFC14K72Shift		(0x10)
#define	B2R2BLT_HFC14K71		(0xff00)
#define	B2R2BLT_HFC14K71Shift		(0x8)
#define	B2R2BLT_HFC14K70		(0xff)
#define	B2R2BLT_HFC14K70Shift		(0x0)
#define	B2R2BLT_HFC14Mask		(0xffffffff)
#define	B2R2BLT_HFC14TestMask		(0xffffffff)
#define	B2R2BLT_HFC14InitialValue	(0x0)
#define	B2R2BLT_HFC14AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC14			(0xe38)

/* - BLT_HFC15 */
#define	B2R2BLT_HFC15K77		(0xff000000)
#define	B2R2BLT_HFC15K77Shift		(0x18)
#define	B2R2BLT_HFC15K76		(0xff0000)
#define	B2R2BLT_HFC15K76Shift		(0x10)
#define	B2R2BLT_HFC15K75		(0xff00)
#define	B2R2BLT_HFC15K75Shift		(0x8)
#define	B2R2BLT_HFC15K74		(0xff)
#define	B2R2BLT_HFC15K74Shift		(0x0)
#define	B2R2BLT_HFC15Mask		(0xffffffff)
#define	B2R2BLT_HFC15TestMask		(0xffffffff)
#define	B2R2BLT_HFC15InitialValue	(0x0)
#define	B2R2BLT_HFC15AccessType		(INITIAL_TEST)
#define	B2R2BLT_HFC15			(0xe3c)

/* - BLT_VFC0 */
#define	B2R2BLT_VFC0K3			(0xff000000)
#define	B2R2BLT_VFC0K3Shift		(0x18)
#define	B2R2BLT_VFC0K2			(0xff0000)
#define	B2R2BLT_VFC0K2Shift		(0x10)
#define	B2R2BLT_VFC0K1			(0xff00)
#define	B2R2BLT_VFC0K1Shift		(0x8)
#define	B2R2BLT_VFC0K0			(0xff)
#define	B2R2BLT_VFC0K0Shift		(0x0)
#define	B2R2BLT_VFC0Mask		(0xffffffff)
#define	B2R2BLT_VFC0TestMask		(0xffffffff)
#define	B2R2BLT_VFC0InitialValue	(0x0)
#define	B2R2BLT_VFC0AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC0			(0xe90)

/* - BLT_VFC1 */
#define	B2R2BLT_VFC1K12			(0xff000000)
#define	B2R2BLT_VFC1K12Shift		(0x18)
#define	B2R2BLT_VFC1K11			(0xff0000)
#define	B2R2BLT_VFC1K11Shift		(0x10)
#define	B2R2BLT_VFC1K10			(0xff00)
#define	B2R2BLT_VFC1K10Shift		(0x8)
#define	B2R2BLT_VFC1K4			(0xff)
#define	B2R2BLT_VFC1K4Shift		(0x0)
#define	B2R2BLT_VFC1Mask		(0xffffffff)
#define	B2R2BLT_VFC1TestMask		(0xffffffff)
#define	B2R2BLT_VFC1InitialValue	(0x0)
#define	B2R2BLT_VFC1AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC1			(0xe94)

/* - BLT_VFC2 */
#define	B2R2BLT_VFC2K21			(0xff000000)
#define	B2R2BLT_VFC2K21Shift		(0x18)
#define	B2R2BLT_VFC2K20			(0xff0000)
#define	B2R2BLT_VFC2K20Shift		(0x10)
#define	B2R2BLT_VFC2K14			(0xff00)
#define	B2R2BLT_VFC2K14Shift		(0x8)
#define	B2R2BLT_VFC2K13			(0xff)
#define	B2R2BLT_VFC2K13Shift		(0x0)
#define	B2R2BLT_VFC2Mask		(0xffffffff)
#define	B2R2BLT_VFC2TestMask		(0xffffffff)
#define	B2R2BLT_VFC2InitialValue	(0x0)
#define	B2R2BLT_VFC2AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC2			(0xe98)

/* - BLT_VFC3 */
#define	B2R2BLT_VFC3K30			(0xff000000)
#define	B2R2BLT_VFC3K30Shift		(0x18)
#define	B2R2BLT_VFC3K24			(0xff0000)
#define	B2R2BLT_VFC3K24Shift		(0x10)
#define	B2R2BLT_VFC3K23			(0xff00)
#define	B2R2BLT_VFC3K23Shift		(0x8)
#define	B2R2BLT_VFC3K22			(0xff)
#define	B2R2BLT_VFC3K22Shift		(0x0)
#define	B2R2BLT_VFC3Mask		(0xffffffff)
#define	B2R2BLT_VFC3TestMask		(0xffffffff)
#define	B2R2BLT_VFC3InitialValue	(0x0)
#define	B2R2BLT_VFC3AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC3			(0xe9c)

/* - BLT_VFC4 */
#define	B2R2BLT_VFC4K34			(0xff000000)
#define	B2R2BLT_VFC4K34Shift		(0x18)
#define	B2R2BLT_VFC4K33			(0xff0000)
#define	B2R2BLT_VFC4K33Shift		(0x10)
#define	B2R2BLT_VFC4K32			(0xff00)
#define	B2R2BLT_VFC4K32Shift		(0x8)
#define	B2R2BLT_VFC4K31			(0xff)
#define	B2R2BLT_VFC4K31Shift		(0x0)
#define	B2R2BLT_VFC4Mask		(0xffffffff)
#define	B2R2BLT_VFC4TestMask		(0xffffffff)
#define	B2R2BLT_VFC4InitialValue	(0x0)
#define	B2R2BLT_VFC4AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC4			(0xea0)

/* - BLT_VFC5 */
#define	B2R2BLT_VFC5K43			(0xff000000)
#define	B2R2BLT_VFC5K43Shift		(0x18)
#define	B2R2BLT_VFC5K42			(0xff0000)
#define	B2R2BLT_VFC5K42Shift		(0x10)
#define	B2R2BLT_VFC5K41			(0xff00)
#define	B2R2BLT_VFC5K41Shift		(0x8)
#define	B2R2BLT_VFC5K40			(0xff)
#define	B2R2BLT_VFC5K40Shift		(0x0)
#define	B2R2BLT_VFC5Mask		(0xffffffff)
#define	B2R2BLT_VFC5TestMask		(0xffffffff)
#define	B2R2BLT_VFC5InitialValue	(0x0)
#define	B2R2BLT_VFC5AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC5			(0xea4)

/* - BLT_VFC6 */
#define	B2R2BLT_VFC6K52			(0xff000000)
#define	B2R2BLT_VFC6K52Shift		(0x18)
#define	B2R2BLT_VFC6K51			(0xff0000)
#define	B2R2BLT_VFC6K51Shift		(0x10)
#define	B2R2BLT_VFC6K50			(0xff00)
#define	B2R2BLT_VFC6K50Shift		(0x8)
#define	B2R2BLT_VFC6K44			(0xff)
#define	B2R2BLT_VFC6K44Shift		(0x0)
#define	B2R2BLT_VFC6Mask		(0xffffffff)
#define	B2R2BLT_VFC6TestMask		(0xffffffff)
#define	B2R2BLT_VFC6InitialValue	(0x0)
#define	B2R2BLT_VFC6AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC6			(0xea8)

/* - BLT_VFC7 */
#define	B2R2BLT_VFC7K61			(0xff000000)
#define	B2R2BLT_VFC7K61Shift		(0x18)
#define	B2R2BLT_VFC7K60			(0xff0000)
#define	B2R2BLT_VFC7K60Shift		(0x10)
#define	B2R2BLT_VFC7K54			(0xff00)
#define	B2R2BLT_VFC7K54Shift		(0x8)
#define	B2R2BLT_VFC7K53			(0xff)
#define	B2R2BLT_VFC7K53Shift		(0x0)
#define	B2R2BLT_VFC7Mask		(0xffffffff)
#define	B2R2BLT_VFC7TestMask		(0xffffffff)
#define	B2R2BLT_VFC7InitialValue	(0x0)
#define	B2R2BLT_VFC7AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC7			(0xeac)

/* - BLT_VFC8 */
#define	B2R2BLT_VFC8K70			(0xff000000)
#define	B2R2BLT_VFC8K70Shift		(0x18)
#define	B2R2BLT_VFC8K64			(0xff0000)
#define	B2R2BLT_VFC8K64Shift		(0x10)
#define	B2R2BLT_VFC8K63			(0xff00)
#define	B2R2BLT_VFC8K63Shift		(0x8)
#define	B2R2BLT_VFC8K62			(0xff)
#define	B2R2BLT_VFC8K62Shift		(0x0)
#define	B2R2BLT_VFC8Mask		(0xffffffff)
#define	B2R2BLT_VFC8TestMask		(0xffffffff)
#define	B2R2BLT_VFC8InitialValue	(0x0)
#define	B2R2BLT_VFC8AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC8			(0xeb0)

/* - BLT_VFC9 */
#define	B2R2BLT_VFC9K74			(0xff000000)
#define	B2R2BLT_VFC9K74Shift		(0x18)
#define	B2R2BLT_VFC9K73			(0xff0000)
#define	B2R2BLT_VFC9K73Shift		(0x10)
#define	B2R2BLT_VFC9K72			(0xff00)
#define	B2R2BLT_VFC9K72Shift		(0x8)
#define	B2R2BLT_VFC9K71			(0xff)
#define	B2R2BLT_VFC9K71Shift		(0x0)
#define	B2R2BLT_VFC9Mask		(0xffffffff)
#define	B2R2BLT_VFC9TestMask		(0xffffffff)
#define	B2R2BLT_VFC9InitialValue	(0x0)
#define	B2R2BLT_VFC9AccessType		(INITIAL_TEST)
#define	B2R2BLT_VFC9			(0xeb4)

/* Instance values */
#define	asicB2R2BLT_CTL			(0x70130a00)
#define	asicB2R2BLT_ITS			(0x70130a04)
#define	asicB2R2BLT_STA1		(0x70130a08)
#define	asicB2R2BLT_SSBA1		(0x70130a10)
#define	asicB2R2BLT_SSBA2		(0x70130a14)
#define	asicB2R2BLT_SSBA3		(0x70130a18)
#define	asicB2R2BLT_SSBA4		(0x70130a1c)
#define	asicB2R2BLT_SSBA5		(0x70130a20)
#define	asicB2R2BLT_SSBA6		(0x70130a24)
#define	asicB2R2BLT_SSBA7		(0x70130a28)
#define	asicB2R2BLT_SSBA8		(0x70130a2c)
#define	asicB2R2BLT_SSBA9		(0x70130aa0)
#define	asicB2R2BLT_SSBA10		(0x70130aa4)
#define	asicB2R2BLT_SSBA11		(0x70130aa8)
#define	asicB2R2BLT_SSBA12		(0x70130aac)
#define	asicB2R2BLT_SSBA13		(0x70130ab0)
#define	asicB2R2BLT_SSBA14		(0x70130ab4)
#define	asicB2R2BLT_SSBA15		(0x70130ab8)
#define	asicB2R2BLT_SSBA16		(0x70130abc)
#define	asicB2R2BLT_STBA1		(0x70130a30)
#define	asicB2R2BLT_STBA2		(0x70130a34)
#define	asicB2R2BLT_STBA3		(0x70130a38)
#define	asicB2R2BLT_STBA4		(0x70130a3c)
#define	asicB2R2BLT_CQ1_TRIG_IP		(0x70130a40)
#define	asicB2R2BLT_CQ2_TRIG_IP		(0x70130a50)
#define	asicB2R2BLT_CQ1_TRIG_CTL	(0x70130a44)
#define	asicB2R2BLT_CQ2_TRIG_CTL	(0x70130a54)
#define	asicB2R2BLT_CQ1_PACE_CTL	(0x70130a48)
#define	asicB2R2BLT_CQ2_PACE_CTL	(0x70130a58)
#define	asicB2R2BLT_CQ1_IP		(0x70130a4c)
#define	asicB2R2BLT_CQ2_IP		(0x70130a5c)
#define	asicB2R2BLT_AQ1_CTL		(0x70130a60)
#define	asicB2R2BLT_AQ2_CTL		(0x70130a70)
#define	asicB2R2BLT_AQ3_CTL		(0x70130a80)
#define	asicB2R2BLT_AQ4_CTL		(0x70130a90)
#define	asicB2R2BLT_AQ1_IP		(0x70130a64)
#define	asicB2R2BLT_AQ2_IP		(0x70130a74)
#define	asicB2R2BLT_AQ3_IP		(0x70130a84)
#define	asicB2R2BLT_AQ4_IP		(0x70130a94)
#define	asicB2R2BLT_AQ1_LNA		(0x70130a68)
#define	asicB2R2BLT_AQ2_LNA		(0x70130a78)
#define	asicB2R2BLT_AQ3_LNA		(0x70130a88)
#define	asicB2R2BLT_AQ4_LNA		(0x70130a98)
#define	asicB2R2BLT_AQ1_STA		(0x70130a6c)
#define	asicB2R2BLT_AQ2_STA		(0x70130a7c)
#define	asicB2R2BLT_AQ3_STA		(0x70130a8c)
#define	asicB2R2BLT_AQ4_STA		(0x70130a9c)
#define	asicB2R2BLT_SGA1		(0x70130ac0)
#define	asicB2R2BLT_SGA2		(0x70130ac4)
#define	asicB2R2BLT_ITM0		(0x70130ad0)
#define	asicB2R2BLT_ITM1		(0x70130ad4)
#define	asicB2R2BLT_ITM2		(0x70130ad8)
#define	asicB2R2BLT_ITM3		(0x70130adc)
#define	asicB2R2BLT_DFV1		(0x70130af4)
#define	asicB2R2BLT_DFV2		(0x70130af0)
#define	asicB2R2BLT_PRI			(0x70130af8)
#define	asicB2R2BLT_SSBA17		(0x70130900)
#define	asicB2R2BLT_SSBA18		(0x70130904)
#define	asicB2R2BLT_SSBA19		(0x70130908)
#define	asicB2R2BLT_SSBA20		(0x7013090c)
#define	asicB2R2BLT_SSBA21		(0x70130910)
#define	asicB2R2BLT_SSBA22		(0x70130914)
#define	asicB2R2BLT_SSBA23		(0x70130918)
#define	asicB2R2BLT_SSBA24		(0x7013091c)
#define	asicB2R2BLT_STBA5		(0x70130940)
#define	asicB2R2BLT_STBA6		(0x70130944)
#define	asicB2R2BLT_STBA7		(0x70130948)
#define	asicB2R2BLT_STBA8		(0x7013094c)
#define	asicB2R2PLUGS1_OP2		(0x70130b04)
#define	asicB2R2PLUGS2_OP2		(0x70130b24)
#define	asicB2R2PLUGS3_OP2		(0x70130b44)
#define	asicB2R2PLUGS1_CHZ		(0x70130b08)
#define	asicB2R2PLUGS2_CHZ		(0x70130b28)
#define	asicB2R2PLUGS3_CHZ		(0x70130b48)
#define	asicB2R2PLUGS1_MSZ		(0x70130b0c)
#define	asicB2R2PLUGS2_MSZ		(0x70130b2c)
#define	asicB2R2PLUGS3_MSZ		(0x70130b4c)
#define	asicB2R2PLUGS1_PGZ		(0x70130b10)
#define	asicB2R2PLUGS2_PGZ		(0x70130b30)
#define	asicB2R2PLUGS3_PGZ		(0x70130b50)
#define	asicB2R2PLUGT_OP2		(0x70130b84)
#define	asicB2R2PLUGT_CHZ		(0x70130b88)
#define	asicB2R2PLUGT_MSZ		(0x70130b8c)
#define	asicB2R2PLUGT_PGZ		(0x70130b90)
#define	asicB2R2BLT_NIP			(0x70130c00)
#define	asicB2R2BLT_CIC			(0x70130c04)
#define	asicB2R2BLT_INS			(0x70130c08)
#define	asicB2R2BLT_ACK			(0x70130c0c)
#define	asicB2R2BLT_TBA			(0x70130c10)
#define	asicB2R2BLT_TTY			(0x70130c14)
#define	asicB2R2BLT_TXY			(0x70130c18)
#define	asicB2R2BLT_TSZ			(0x70130c1c)
#define	asicB2R2BLT_S1CF		(0x70130c20)
#define	asicB2R2BLT_S2CF		(0x70130c24)
#define	asicB2R2BLT_S1BA		(0x70130c28)
#define	asicB2R2BLT_S1TY		(0x70130c2c)
#define	asicB2R2BLT_S1XY		(0x70130c30)
#define	asicB2R2BLT_S2BA		(0x70130c38)
#define	asicB2R2BLT_S2TY		(0x70130c3c)
#define	asicB2R2BLT_S2XY		(0x70130c40)
#define	asicB2R2BLT_S2SZ		(0x70130c44)
#define	asicB2R2BLT_S2SZ		(0x70130c44)
#define	asicB2R2BLT_S3BA		(0x70130c48)
#define	asicB2R2BLT_S3TY		(0x70130c4c)
#define	asicB2R2BLT_S3XY		(0x70130c50)
#define	asicB2R2BLT_S3SZ		(0x70130c54)
#define	asicB2R2BLT_CWO			(0x70130c58)
#define	asicB2R2BLT_CWS			(0x70130c5c)
#define	asicB2R2BLT_CCO			(0x70130c60)
#define	asicB2R2BLT_CML			(0x70130c64)
#define	asicB2R2BLT_FCTL		(0x70130c68)
#define	asicB2R2BLT_PMK			(0x70130c6c)
#define	asicB2R2BLT_RSF			(0x70130c70)
#define	asicB2R2BLT_RZI			(0x70130c74)
#define	asicB2R2BLT_HFP			(0x70130c78)
#define	asicB2R2BLT_VFP			(0x70130c7c)
#define	asicB2R2BLT_Y_RSF		(0x70130c80)
#define	asicB2R2BLT_Y_RZI		(0x70130c84)
#define	asicB2R2BLT_Y_HFP		(0x70130c88)
#define	asicB2R2BLT_Y_VFP		(0x70130c8c)
#define	asicB2R2BLT_KEY1		(0x70130ca0)
#define	asicB2R2BLT_KEY2		(0x70130ca4)
#define	asicB2R2BLT_SAR			(0x70130cb0)
#define	asicB2R2BLT_USR			(0x70130cb4)
#define	asicB2R2BLT_IVMX0		(0x70130cc0)
#define	asicB2R2BLT_IVMX1		(0x70130cc4)
#define	asicB2R2BLT_IVMX2		(0x70130cc8)
#define	asicB2R2BLT_IVMX3		(0x70130ccc)
#define	asicB2R2BLT_OVMX0		(0x70130cd0)
#define	asicB2R2BLT_OVMX1		(0x70130cd4)
#define	asicB2R2BLT_OVMX2		(0x70130cd8)
#define	asicB2R2BLT_OVMX3		(0x70130cdc)
#define	asicB2R2BLT_VC1R		(0x70130ce8)
#define	asicB2R2BLT_HFC0		(0x70130e00)
#define	asicB2R2BLT_HFC1		(0x70130e04)
#define	asicB2R2BLT_HFC2		(0x70130e08)
#define	asicB2R2BLT_HFC3		(0x70130e0c)
#define	asicB2R2BLT_HFC4		(0x70130e10)
#define	asicB2R2BLT_HFC5		(0x70130e14)
#define	asicB2R2BLT_HFC6		(0x70130e18)
#define	asicB2R2BLT_HFC7		(0x70130e1c)
#define	asicB2R2BLT_HFC8		(0x70130e20)
#define	asicB2R2BLT_HFC9		(0x70130e24)
#define	asicB2R2BLT_HFC10		(0x70130e28)
#define	asicB2R2BLT_HFC11		(0x70130e2c)
#define	asicB2R2BLT_HFC12		(0x70130e30)
#define	asicB2R2BLT_HFC13		(0x70130e34)
#define	asicB2R2BLT_HFC14		(0x70130e38)
#define	asicB2R2BLT_HFC15		(0x70130e3c)
#define	asicB2R2BLT_VFC0		(0x70130e90)
#define	asicB2R2BLT_VFC1		(0x70130e94)
#define	asicB2R2BLT_VFC2		(0x70130e98)
#define	asicB2R2BLT_VFC3		(0x70130e9c)
#define	asicB2R2BLT_VFC4		(0x70130ea0)
#define	asicB2R2BLT_VFC5		(0x70130ea4)
#define	asicB2R2BLT_VFC6		(0x70130ea8)
#define	asicB2R2BLT_VFC7		(0x70130eac)
#define	asicB2R2BLT_VFC8		(0x70130eb0)
#define	asicB2R2BLT_VFC9		(0x70130eb4)
#define	asicB2R2BLT_Y_HFC0		(0x70130d00)
#define	asicB2R2BLT_Y_HFC1		(0x70130d04)
#define	asicB2R2BLT_Y_HFC2		(0x70130d08)
#define	asicB2R2BLT_Y_HFC3		(0x70130d0c)
#define	asicB2R2BLT_Y_HFC4		(0x70130d10)
#define	asicB2R2BLT_Y_HFC5		(0x70130d14)
#define	asicB2R2BLT_Y_HFC6		(0x70130d18)
#define	asicB2R2BLT_Y_HFC7		(0x70130d1c)
#define	asicB2R2BLT_Y_HFC8		(0x70130d20)
#define	asicB2R2BLT_Y_HFC9		(0x70130d24)
#define	asicB2R2BLT_Y_HFC10		(0x70130d28)
#define	asicB2R2BLT_Y_HFC11		(0x70130d2c)
#define	asicB2R2BLT_Y_HFC12		(0x70130d30)
#define	asicB2R2BLT_Y_HFC13		(0x70130d34)
#define	asicB2R2BLT_Y_HFC14		(0x70130d38)
#define	asicB2R2BLT_Y_HFC15		(0x70130d3c)
#define	asicB2R2BLT_Y_VFC0		(0x70130d90)
#define	asicB2R2BLT_Y_VFC1		(0x70130d94)
#define	asicB2R2BLT_Y_VFC2		(0x70130d98)
#define	asicB2R2BLT_Y_VFC3		(0x70130d9c)
#define	asicB2R2BLT_Y_VFC4		(0x70130da0)
#define	asicB2R2BLT_Y_VFC5		(0x70130da4)
#define	asicB2R2BLT_Y_VFC6		(0x70130da8)
#define	asicB2R2BLT_Y_VFC7		(0x70130dac)
#define	asicB2R2BLT_Y_VFC8		(0x70130db0)
#define	asicB2R2BLT_Y_VFC9		(0x70130db4)


//------------------------------------------------------------------------
// Static Register bits defines
//------------------------------------------------------------------------
/* - BLT_AQ_CTL */
#define	B2R2_AQ_Enab			(0x80000000)
#define B2R2_AQ_PRIOR_0 		(0x0)
#define	B2R2_AQ_PRIOR_1 		(0x1)
#define	B2R2_AQ_PRIOR_2			(0x2)
#define	B2R2_AQ_PRIOR_3			(0x3)
#define B2R2_AQ_NODE_REPEAT_INT	(0x100000)
#define B2R2_AQ_STOP_INT		(0x200000)
#define B2R2_AQ_LNA_REACH_INT	(0x400000)
#define B2R2_AQ_COMPLETED_INT	(0x800000)

/* - BLT_CIC */
#define	B2R2_CICGroup18			(0x40000)
#define	B2R2_CICGroup17			(0x20000)
#define	B2R2_OUTPUT_VMx		    (0x10000)
#define	B2R2_INPUT_VMx			(0x00008000)
#define	B2R2_CICGroup14			(0x00004000)
#define	B2R2_CICGroup13			(0x00002000)
#define	B2R2_COLOR_KEY			(0x00001000)
#define	B2R2_FLICKER_FILTER		(0x00000800)
#define	B2R2_LUMA_FILTER		(0x00000400)
#define	B2R2_RGB_CHROMA			(0x00000200)
#define	B2R2_FILTER_CTL_MASK	(0x00000100)
#define	B2R2_CLUT				(0x00000080)
#define	B2R2_CLIP_WIN			(0x00000040)
#define	B2R2_SRC3				(0x00000020)
#define	B2R2_SRC2				(0x00000010)
#define	B2R2_SRC1				(0x00000008)
#define	B2R2_COLOR_FILL			(0x00000004)

/* - BLT_INS */
#define	B2R2_SRC1_FETCH_MEM		(0x00000001)
#define	B2R2_SRC1_COLOR_FILL	(0x00000003)
#define	B2R2_SRC1_DIRECT_COPY	(0x00000004)
#define	B2R2_SRC1_DIRECT_FILL	(0x00000007)
#define	B2R2_SRC2_FETCH_MEM		(0x00000008)
#define	B2R2_SRC2_COLOR_FILL	(0x00000018)
#define B2R2_SRC3_FETCH_MEM		(0x00000020)

/* - BLT_ACK */
#define	B2R2_BYPASS_SRC1    	(0x00000000)
#define	B2R2_LOGICAL_OPER		(0x00000001)
#define	B2R2_BLEND_NOT_PREMULT	(0x00000002)
#define	B2R2_BLEND_PREMULT	    (0x00000003)
#define	B2R2_LOGICAL_FIRST_PASS	(0x00000004)
#define	B2R2_CLIPMASK_BLEND 	(0x00000005)
#define	B2R2_BYPASS_SRC2_SRC3 	(0x00000007)
#define	B2R2_LOGICAL_2ND_PASS	(0x00000008)

/*BLT_TTY */
#define B2R2_ALPHA_RANGE_SHIFT  (0x15)
/*BLT_XY */
#define B2R2_Y_SHIFT  			(0x10)

/*BLT_SCF*/
#define COLOR_ALPHA_SHIFT		(0x18)
#define RED_COLOR_SHIFT			(0x10)
#define GREEN_COLOR_SHIFT		(0x08)
#define BLUE_COLOR_SHIFT		(0x00)

/* SRC REG*/
#define	B2R2_STYCOLOR_FORMShift	(0x10)
#define	B2R2_SSZWIN_HEIGHTShift	(0x10)

/* - BLT_CCO */
#define	B2R2_COLOR_CORREC		(0x00010000)
#define	B2R2_COLOR_REDUC		(0x00020000)
#define	B2R2_CLUT_100_ERRDIF	(0x00080000)
#define	B2R2_CLUT_75_ERRDIF		(0x00100000)
#define	B2R2_CLUT_50_ERRDIF		(0x00180000)
#define	B2R2_CLUT_25_ERRDIF		(0x00200000)
#define	B2R2_CLUT_ADAPT   		(0x00400000)


/** Sources involved */

typedef enum
{
  SOURCE          = 0,
  SOURCE1	      = 1,
  SOURCE2         = 2,
  SOURCE3         = 3,
  SOURCE12		  = 4,  //Both Source1 & Source2 will be used
  SOURCE13		  = 5,  //Both Source1 & Source3 will be used
  SOURCE23		  = 6,  //Both Source2 & Source3 will be used
  SOURCE123       = 7   //All sources (Source1, Source2 & Source3)

}b2r2_source_involved;


typedef enum
{
	BYPASS_SRC1				  		  = 0,
	LOGICAL_OP				  		  = 1,
	BLENDING_FG_NOT_PREMULT	  		  = 2,
	BLENDING_FG_PREMULT		  		  = 3,
	CLIPMASK_LOG_MODE_1ST_PASS		  = 4,
	CLIPMASK_BLENDING_MODE			  = 5,
	BYPASS_SRC2_SRC3				  = 7

}b2r2_alu_op_mode;



typedef struct
{
	unsigned char COLORFILL_EN;
	b2r2_source_involved COLOR_FILL_SOURCE;
	b2r2_alu_op_mode ALU_OP_MODE;

}b2r2_seting_flags;



typedef struct
{
	unsigned char 	  		ALPHA_VAL;
	unsigned char 			SWAP_FG_BG;
	unsigned char 			PREMULTIPLIER;
	unsigned char 			ALPHA_RANGE;

}b2r2_blending_para;


typedef enum
{
	INSIDE_CLIP		= 0,
	OUTSIDE_CLIP	= 1

}b2r2_clip_mode;


typedef struct
{
	unsigned short B2R2_X_CORD;
	unsigned short B2R2_Y_CORD;

}b2r2_win_pos;


typedef struct
{
	b2r2_clip_mode 	    	CLIP_MODE;
	b2r2_win_pos			CLIP_WIN_START_CORD;//Start coordinate of clipped area
	b2r2_win_pos			CLIP_WIN_END_CORD; // End coordinate of clipped area

}b2r2_clip_para;


typedef struct
{
	unsigned int B2R2_KEY1;
	unsigned int B2R2_KEY2;

}b2r2_color_key_val;


typedef struct
{
	b2r2_color_key_val 	COLOR_KEYS_VAL;
	unsigned char			ACK_CKEY;
	unsigned char			CKEY_SEL;

}b2r2_colorkey_para;


typedef struct
{
	unsigned int  S1_SSBA 			:5; //Possible values 1 to 4 or 9 to 12 When CQ used. Odd number for CQ1 & Even number for CQ2
	unsigned int  RESV1				:3;
	unsigned int  S2_SSBA		    :5;	//Possible values 1 to 8 When When CQ used. Odd number for CQ1 & Even number for CQ2
	unsigned int  RESV2				:3;
	unsigned int  S3_SSBA			:5; //Possible values 9 to 16 When When CQ used. Odd number for CQ1 & Even number for CQ2
	unsigned int  RESV3				:3;
	unsigned int  T_STBA			:4;//Possible values 1 to 4.
	unsigned int  A_SGA				:4;//Possible values 1 to 4.

}b2r2_sar;

typedef struct
{
	unsigned int  LUMA_COEFF 		:3;
	unsigned int  LUMA_MAP			:1; //This flag must be set to apply VC1 range functionality on Luma part
	unsigned int  CHROMA_COEFF		:3;
	unsigned int  CHROMA_MAP		:1; //This flag must be set to apply VC1 range functionality on Chroma part
	unsigned int  RESV				:24;

}b2r2_vc1_range;


/** INS flag configuration */

typedef struct
{
	 unsigned long long  CLIPPING_EN	:1 ; // To utilize clip feature set this bit
	 unsigned long long   CLUT_EN				:1 ; // To utilize CLUT feature set this bit
	 unsigned long long   COLORKEY_EN			:1 ;
	 //unsigned double   PLANEMASK_EN			:1 ;
	 unsigned long long   RESIZE_EN				:1 ;
	 unsigned long long   SAR_EN				:1 ; // To utilize SAR feature set this bit
	 unsigned long long   VM_EN					:1 ;
	 unsigned long long   VC1_EN				:1 ;
	 unsigned long long   DITHER_EN				:1 ;
	 unsigned long long   SRC1_RGB_EXP			:1 ;
	 unsigned long long   SRC2_RGB_EXP			:1 ;
	 unsigned long long   SRC1_A1_SUBST_EN		:1 ;
	 unsigned long long   SRC2_A1_SUBST_EN		:1 ;
	 unsigned long long   CHROMA_LEFT_EN		:1 ;
	 unsigned long long   SRC1_SUBBYTE			:1 ;
	 unsigned long long   SRC2_SUBBYTE			:1 ;
	 unsigned long long   TARG_SUBBYTE			:1 ;
	 unsigned long long   SRC1_ALPHA_RANGE		:1 ;
	 unsigned long long   SRC2_ALPHA_RANGE		:1 ;
	 unsigned long long   TARG_ALPHA_RANGE		:1 ;
	 unsigned long long   SRC1_BIGENDIAN		:1 ;
	 unsigned long long   SRC2_BIGENDIAN		:1 ;
	 unsigned long long   TARG_BIGENDIAN		:1 ;
	 unsigned long long   SRC1_HSO				:1 ;
	 unsigned long long   SRC2_HSO				:1 ;
	 unsigned long long   SRC3_HSO				:1 ;
	 unsigned long long   TARG_HSO				:1 ;
	 unsigned long long   SRC1_VSO				:1 ;
	 unsigned long long   SRC2_VSO				:1 ;
	 unsigned long long   SRC3_VSO				:1 ;
	 unsigned long long   TARG_VSO				:1 ;
	 unsigned long long   YCBCR420MB_INPUT	    :1 ; // Set this bit when input image is in 420 format
	 unsigned long long   YCBCR422MB_INPUT	    :1 ; // Set this bit when input image is in 422 format

	 b2r2_seting_flags   		    SETING_FLAGS;
	 b2r2_blending_para				BLEND_PARA;
	 b2r2_clip_para					CLIP_PARA;

	 unsigned int					PMK_VAL;
	 //t_uint32						FILT_CNTL_EN;

	 b2r2_colorkey_para				COLORKEY_PARA;
	 b2r2_sar						SAR_CONFIG;
	 b2r2_vc1_range 				VC1_RANGE;


}b2r2_functionality_ins;




const   unsigned int  h_filt_coef[] = {
0x00000000, 0x00000040, 0x08FD03FF, 0xFE04F93E,
0x13F806FD, 0xFC07F43B, 0x1FF508FB, 0xFB09F134,
0x2BF209FB, 0xFB09F12A, 0x35F209FB, 0xFB08F41E, //Increment less than 1024
0x3CF507FC, 0xFD06F712, 0x3FFA04FE, 0xFF03FC07,

0x05FC0400, 0x04FC0539, 0x0CF906FC, 0x0200FE39,
0x17F608FB, 0x0002F935, 0x20F408FC, 0xFF05F430, //Increment bigger than 1024
0x29F407FD, 0xFD07F328, 0x31F505FF, 0xFC08F31F,
0x38F90200, 0xFB08F614, 0x3AFF0002, 0xFC06F80B,

0x09F906FC, 0x06F90934, 0x10F707FD, 0x05FC0232,
0x17F607FE, 0x04FFFC2F, 0x20F506FF, 0x0201F92A, //Resize 1.3 to 1.4
0x27F60400, 0x0004F625, 0x2DF90102, 0xFF06F51D,
0x31FDFF04, 0xFE07F515, 0x3502FC05, 0xFD07F70D,

0x0BF806FE, 0x06F80B30, 0x12F706FF, 0x06FA052D,
0x18F60400, 0x06FC002C, 0x1FF70201, 0x04FFFD27,
0x24F90003, 0x0300F924, 0x29FDFF04, 0x0102F71D, //Resize 1.4 to 1.5
0x2D00FC06, 0x0004F617, 0x3005FA06, 0xFF06F70F,

 0x13fbfd05, 0xfdfb1325, 0x17fdfc05, 0xfff90f24,
 0x1bfffa04, 0x00f90b24, 0x1f01f903, 0x01f80823,
 0x2204f902, 0x02f90420, 0x2508f801, 0x03f9011d,
 0x250cf900, 0x04fafe1a, 0x2610f9ff, 0x05fcfc15,

 0x1306fdfc, 0xfd061318, 0x1508fefc, 0xfc041217,
 0x160afefb, 0xfc031018, 0x180b00fb, 0xfb010f17,
 0x190d00fb, 0xfb000d17, 0x190f01fb, 0xfb000b16,
 0x191103fc, 0xfbfe0915, 0x1a1204fc, 0xfcfe0812,

 0x0f0902fe, 0x02090f0e, 0x0f0902ff, 0x01080e10,
 0x100a03ff, 0x00070d10, 0x100b0400, 0x00060c0f,
 0x100c0500, 0x00050c0e, 0x110c0600, 0x00040b0e,
 0x110d0700, 0xff030a0f, 0x110e0801, 0xff02090e,

 0x0c090400, 0x04090c0e, 0x0c090501, 0x04080c0d,
 0x0c0a0501, 0x03080b0e, 0x0d0a0602, 0x03070b0c, //Down scale between 5 and 4
 0x0d0a0702, 0x02070a0d, 0x0d0b0703, 0x02060a0c,
 0x0d0b0803, 0x01050a0d, 0x0d0c0804, 0x0105090c,

 0x0b090603, 0x06090b09, 0x0b090603, 0x05080a0c,
 0x0b090603, 0x05080a0c, 0x0b090704, 0x04080a0b, // Downscale bigger than 5
 0x0b0a0704, 0x04070a0b, 0x0b0a0804, 0x0407090b,
 0x0b0a0805, 0x0306090c, 0x0b0a0805, 0x0306090c


};


const   unsigned int  v_filt_coef[] = {

 0x00400000, 0x3c09fd00, 0x13f904fa, 0xf506f539,
 0x08f3311f, 0xf3282af3, 0x1d34f308, 0x3bf507f5,
 0xfa05f912, 0x03fd073f,

 0x053e05fc, 0x3b0ef8fc, 0x18f500ff, 0xf402f938,
 0x05f53121, 0xf4272af4, 0x1e30f607, 0x35f908f4,
 0xff07f615, 0x06f90b37,

 0x0a3c0af8, 0x3b12f6f8,
 0x1bf4fb02, 0xf4fffd35, 0x01f83023, 0xf62729f6,
 0x1e2ef904, 0x31fd06f5, 0x0206f616, 0x07f80d32,

 0x0e380ef6, 0x3815f5f6, 0x1df5f806, 0xf6fb0033,
 0xfefc2d23, 0xf92628f9, 0x1e2cfc00, 0x2e0003f7,
 0x0504f618, 0x05f7112e,

 0x132413fb, 0x2317fdfb,
 0x1afffa0f, 0x01f90b23, 0xf907221d, 0x041f2004,
 0x1c2207f9, 0x240bfa01, 0x0ffbff17, 0xfcfd1424,

 0x10161005, 0x16110605, 0x1308040f, 0x09020e15,
 0x010c1614, 0x0b15150b, 0x13160d00, 0x170f000a,
 0x11ff0813, 0xfe071218,

 0x0f100f09, 0x120f0909,
 0x100a080e, 0x0b070e11, 0x060d1111, 0x0c12110c,
 0x11120d05, 0x120e040c, 0x0f040b11, 0x030a1113,

 0x0e100e0a, 0x0f0e0b0a, 0x0f0b0a0e, 0x0c090d10,
 0x080d100f, 0x0d0f0f0d, 0x10100d08, 0x100e070c,
 0x0f070c0f, 0x060b1010,

 0x0e0e0e0b, 0x0f0e0b0b,
 0x0e0c0b0d, 0x0c0a0d0f, 0x0a0d0f0e, 0x0d0e0f0d,
 0x0f0f0d09, 0x0f0e090c, 0x0e090c0e, 0x080c0f0f
};


const   unsigned int  h_luma_filt_coef[] = {
0x00000000, 0x00000040, 0x08FD03FF, 0xFE04F93E,
0x13F806FD, 0xFC07F43B, 0x1FF508FB, 0xFB09F134,
0x2BF209FB, 0xFB09F12A, 0x35F209FB, 0xFB08F41E, //Increment less than 1024
0x3CF507FC, 0xFD06F712, 0x3FFA04FE, 0xFF03FC07,

0x05FC0400, 0x04FC0539, 0x0CF906FC, 0x0200FE39,
0x17F608FB, 0x0002F935, 0x20F408FC, 0xFF05F430, //Increment bigger than 1024
0x29F407FD, 0xFD07F328, 0x31F505FF, 0xFC08F31F,
0x38F90200, 0xFB08F614, 0x3AFF0002, 0xFC06F80B,

0x09F906FC, 0x06F90934, 0x10F707FD, 0x05FC0232,
0x17F607FE, 0x04FFFC2F, 0x20F506FF, 0x0201F92A, //Resize 1.4 to 1.3
0x27F60400, 0x0004F625, 0x2DF90102, 0xFF06F51D,
0x31FDFF04, 0xFE07F515, 0x3502FC05, 0xFD07F70D,

0x0BF806FE, 0x06F80B30, 0x12F706FF, 0x06FA052D,
0x18F60400, 0x06FC002C, 0x1FF70201, 0x04FFFD27,
0x24F90003, 0x0300F924, 0x29FDFF04, 0x0102F71D, //Resize 1.4 to 1.5
0x2D00FC06, 0x0004F617, 0x3005FA06, 0xFF06F70F,

 0x13fbfd05, 0xfdfb1325, 0x17fdfc05, 0xfff90f24,
 0x1bfffa04, 0x00f90b24, 0x1f01f903, 0x01f80823,
 0x2204f902, 0x02f90420, 0x2508f801, 0x03f9011d,
 0x250cf900, 0x04fafe1a, 0x2610f9ff, 0x05fcfc15,

 0x1306fdfc, 0xfd061318, 0x1508fefc, 0xfc041217,
 0x160afefb, 0xfc031018, 0x180b00fb, 0xfb010f17,
 0x190d00fb, 0xfb000d17, 0x190f01fb, 0xfb000b16,
 0x191103fc, 0xfbfe0915, 0x1a1204fc, 0xfcfe0812,

 0x0f0902fe, 0x02090f0e, 0x0f0902ff, 0x01080e10,
 0x100a03ff, 0x00070d10, 0x100b0400, 0x00060c0f,
 0x100c0500, 0x00050c0e, 0x110c0600, 0x00040b0e,
 0x110d0700, 0xff030a0f, 0x110e0801, 0xff02090e,

 0x0c090400, 0x04090c0e, 0x0c090501, 0x04080c0d,
 0x0c0a0501, 0x03080b0e, 0x0d0a0602, 0x03070b0c, //Downscale between 5 and 4
 0x0d0a0702, 0x02070a0d, 0x0d0b0703, 0x02060a0c,
 0x0d0b0803, 0x01050a0d, 0x0d0c0804, 0x0105090c,

 0x0b090603, 0x06090b09, 0x0b090603, 0x05080a0c,
 0x0b090603, 0x05080a0c, 0x0b090704, 0x04080a0b, // Downscale bigger than 5
 0x0b0a0704, 0x04070a0b, 0x0b0a0804, 0x0407090b,
 0x0b0a0805, 0x0306090c, 0x0b0a0805, 0x0306090c
};


const   unsigned int  v_luma_filt_coef[] = {

 0x00400000, 0x3c09fd00, 0x13f904fa, 0xf506f539,
 0x08f3311f, 0xf3282af3, 0x1d34f308, 0x3bf507f5,
 0xfa05f912, 0x03fd073f,

 0x053e05fc, 0x3b0ef8fc, 0x18f500ff, 0xf402f938,
 0x05f53121, 0xf4272af4, 0x1e30f607, 0x35f908f4,
 0xff07f615, 0x06f90b37,

 0x0a3c0af8, 0x3b12f6f8,
 0x1bf4fb02, 0xf4fffd35, 0x01f83023, 0xf62729f6,
 0x1e2ef904, 0x31fd06f5, 0x0206f616, 0x07f80d32,

 0x0e380ef6, 0x3815f5f6, 0x1df5f806, 0xf6fb0033,
 0xfefc2d23, 0xf92628f9, 0x1e2cfc00, 0x2e0003f7,
 0x0504f618, 0x05f7112e,

 0x132413fb, 0x2317fdfb,
 0x1afffa0f, 0x01f90b23, 0xf907221d, 0x041f2004,
 0x1c2207f9, 0x240bfa01, 0x0ffbff17, 0xfcfd1424,

 0x10161005, 0x16110605, 0x1308040f, 0x09020e15,
 0x010c1614, 0x0b15150b, 0x13160d00, 0x170f000a,
 0x11ff0813, 0xfe071218,

 0x0f100f09, 0x120f0909,
 0x100a080e, 0x0b070e11, 0x060d1111, 0x0c12110c,
 0x11120d05, 0x120e040c, 0x0f040b11, 0x030a1113,

 0x0e100e0a, 0x0f0e0b0a, 0x0f0b0a0e, 0x0c090d10,
 0x080d100f, 0x0d0f0f0d, 0x10100d08, 0x100e070c,
 0x0f070c0f, 0x060b1010,

 0x0e0e0e0b, 0x0f0e0b0b,
 0x0e0c0b0d, 0x0c0a0d0f, 0x0a0d0f0e, 0x0d0e0f0d,
 0x0f0f0d09, 0x0f0e090c, 0x0e090c0e, 0x080c0f0f
};


typedef struct
{
	unsigned short HSRC_INC ;
	unsigned short VSRC_INC ;

}b2r2_rsf;


typedef struct
{
	unsigned int B2R2_HFP;
	unsigned int B2R2_VFP;

}b2r2_filter_coeff;


typedef enum
{
	CHROMA_FILTER_CNTL = 0, //Use this enum to get setting for chroma filter
	RESIZE_FILTER_CNTL	= 0, //Use this enum to get setting for resizing filter when image is in RGB format
	LUMA_FILTER_CNTL = 1, //Use this enum to get setting for luma filter

}b2r2_filter_control;


typedef enum
{
	HORIZONTAL_FILTER = 0,
	VERTICAL_FILTER = 1,

}b2r2_filter;


typedef struct
{
	unsigned short B2R2_WIN_WIDTH;
	unsigned short B2R2_WIN_HEIGHT;

}b2r2_win_size;


typedef struct
{

  unsigned int h_phy;
  unsigned int v_phy;
  unsigned int h_luma_phy;
  unsigned int v_luma_phy;

} b2r2_coeff_address;




typedef struct
{
	unsigned int B2R2_NIP;
	unsigned int B2R2_CIC;
	unsigned int B2R2_INS;
	unsigned int B2R2_ACK;

} b2r2_system;

typedef enum
{
	RGB565     		= 0,
	RGB888			= 1,
	ARGB8565		= 4,
	ARGB8888		= 5,
	ARGB1555		= 6,
	ARGB4444		= 7,
	YCBCR888		= 16,
	YCBCR422R		= 18,
    AYCBCR8888		= 21,
    YCBCR42XMB		= 20,
    YCBCR42XR2B		= 22,
    YCBCR42XMBN		= 14,
    CLUT1			= 8,
    CLUT2			= 9,
    CLUT4			= 10,
    CLUT8			= 11,
    ACLUT44			= 12,
    ACLUT88			= 13,
    A1				= 24,
    A8				= 25,
	YUV				= 30

}b2r2_color_form;


typedef struct
{
	unsigned int B2R2_TBA;
	unsigned int B2R2_TTY;
	unsigned int B2R2_TXY;
	unsigned int B2R2_TSZ;

}b2r2_target;


typedef struct
{
	b2r2_color_form 	COLOR_FORM;
	b2r2_win_size       WIN_SIZE;
	unsigned char		MEM_ALIGHNMENT;

}b2r2_format_win_size_para;


typedef struct
{
	unsigned int B2R2_SBA;
	unsigned int B2R2_STY;
	unsigned int B2R2_SXY;
	unsigned int B2R2_SSZ;

}b2r2_src_config;


typedef enum
{
	FCTL_CONFIG = 0, // FCTL Configuration enable only
	PMK_CONFIG = 1, // PLANMASK Configuration enable
	FCTL_PMK_EN = 2, // Enable both FCTL & PLANMASK

}b2r2_fctl_pmk;



typedef struct
{
	unsigned int  HSRC_INIT 	:10;
	unsigned int  RESV1			:2;
	unsigned int  HNB_REPEAT	:3;
	unsigned int  RESV2			:1;
	unsigned int  VSRC_INIT	    :10;
	unsigned int  RESV3			:2;
	unsigned int  VNB_REPEAT	:3;
	unsigned int  RESV4			:1;

}b2r2_rzi;


typedef struct
{
	b2r2_rsf					RSF;
	b2r2_rzi 		    		RESIZE_INIT;
	b2r2_filter_coeff    		FILTER_COEF;

}b2r2_filter_para;



typedef enum
{
	SAR_CONFIG_EN = 0,       // Only SAR register configuration
	USER_CONFIG_EN = 1,      // Only User register configuration
	SAR_USER_CONFIG_EN = 2,  // Both SAR & User registers configuration

}b2r2_sar_user;




typedef struct
{
	unsigned char VM_FLAG;         // This Flag indicate which VM will be used. if 'VM_FLAG =0' , output VM will be used  & if 'VM_FLAG =1', input VM will be used.
	unsigned int  VM0;            //VM0 coefficient. Please refer B2R2 spec for possible values.
	unsigned int  VM1;			 //VM1 coefficient. Please refer B2R2 spec for possible values & so on.
	unsigned int  VM2;
	unsigned int  VM3;

}b2r2_versatile_matrix_reg;



typedef struct
{
	b2r2_format_win_size_para  SRC1_FORMAT_WIN_SIZE_PARA;
	b2r2_format_win_size_para  SRC2_FORMAT_WIN_SIZE_PARA;
	b2r2_format_win_size_para  SRC3_FORMAT_WIN_SIZE_PARA;
	b2r2_format_win_size_para  TARG_FORMAT_WIN_SIZE_PARA;
	b2r2_win_pos			   SRC1_WIN_POS;
	b2r2_win_pos			   SRC2_WIN_POS;
	b2r2_win_pos			   SRC3_WIN_POS;
	b2r2_win_pos			   TARG_WIN_POS;

}b2r2_targ_three_src_color_size_pos_para;


typedef struct
{
	unsigned int   NODE_PT;
	unsigned int   NEXT_NODE_PT;
	unsigned int   SRC1_MEM_ADDR;
	unsigned int   SRC2_MEM_ADDR;
	unsigned int   SRC3_MEM_ADDR;
	unsigned int   TARG_MEM_ADDR;

}b2r2_node_and_image_addr;


typedef struct
{
	unsigned char B2R2_RED;
	unsigned char B2R2_GREEN;
	unsigned char B2R2_BLUE;
	unsigned char COLOR_ALPHA;

}b2r2_color_comp;

typedef struct
{
	b2r2_color_form 	COLOR_FORM;
	b2r2_win_size       WIN_SIZE;
	b2r2_color_comp     COLOR_COMP;
	unsigned char		PITCH;

}b2r2_colour_win_size_para;


#define B2R2_GFX_COPY_NODESIZE  (48)

typedef struct
{
	unsigned short DIRECT_COPY			:1 ; //Direct copy flag is applicable only with source1
	unsigned short COLORFILL_EN		    :1 ; //Colorfil flag is applicable only with source1 & source2
	unsigned short DIRECT_FILL			:1 ;//Direct colorfil flag is applicable only with source1

}b2r2_color_copy_flags;


typedef struct
{
	unsigned int  B2R2_S1CF;
	unsigned int  B2R2_S2CF;

}b2r2_color_fill;


typedef struct
{
	unsigned int  NODE_PT;          //Address of Node
	unsigned int  NEXT_NODE_PT;     //Address of Next Node
	unsigned int  SRC_MEM_ADDR;     //Address of source data
	unsigned int  TARG_MEM_ADDR;    //Address of target location.

}b2r2_node_src_targ_addr;


typedef struct
{
	b2r2_format_win_size_para  SRC_FORMAT_WIN_SIZE_PARA;
	b2r2_format_win_size_para  TARG_FORMAT_WIN_SIZE_PARA;
	b2r2_win_pos			   SRC_WIN_POS;
	b2r2_win_pos			   TARG_WIN_POS;
	unsigned int 		   	   COLOR_CONFIG;


}b2r2_targ_one_src_color_size_pos_para;


typedef enum
{
	ROT_90 = 1,
	ROT_180 = 2,
	ROT_270 = 3

}b2r2_rot_type;


typedef struct
{

	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_src_config	    GROUP345;

}b2r2_copy_node;

#define B2R2_ROTATE_NODE (48)

/////////////////////////////////////////

typedef struct
{
	 unsigned int B2R2_CWO;
	 unsigned int B2R2_CWS;

}b2r2_clip;

typedef struct
{
	 unsigned int B2R2_KEY1;
	 unsigned int B2R2_KEY2;

}b2r2_color_key;

typedef struct
{
	unsigned int B2R2_CCO;
	unsigned int B2R2_CML;
}b2r2_clut;

typedef struct
{
	unsigned int B2R2_FCTL;
	unsigned int B2R2_PMK;
}b2r2_rsz_pl_mask;

typedef struct
{
	unsigned int B2R2_RSF;
	unsigned int B2R2_RZI;
	unsigned int B2R2_HFP;
	unsigned int B2R2_VFP;

}b2r2_Cr_luma_rsz;

typedef struct
{
	unsigned int B2R2_Coeff0;
	unsigned int B2R2_Coeff1;
	unsigned int B2R2_Coeff2;
	unsigned int B2R2_Coeff3;

}b2r2_flikr_filter;

typedef struct
{
	unsigned int B2R2_XYL;
	unsigned int B2R2_XYP;

}b2r2_xyl;

typedef struct
{
	unsigned int B2R2_SAR;
	unsigned int B2R2_USR;
	//unsigned int B2R2_RESERVED[2];

}b2r2_sau;
typedef struct
{
	unsigned int B2R2_VMX0;
	unsigned int B2R2_VMX1;
	unsigned int B2R2_VMX2;
	unsigned int B2R2_VMX3;
}b2r2_vm;
typedef struct
{

	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_color_fill     GROUP2;
	b2r2_src_config	    GROUP3;
	b2r2_src_config     GROUP4;
	b2r2_src_config     GROUP5;
	b2r2_clip           GROUP6;
	b2r2_clut           GROUP7;
	b2r2_rsz_pl_mask	GROUP8;
	b2r2_Cr_luma_rsz    GROUP9;
	b2r2_Cr_luma_rsz    GROUP10;
	b2r2_flikr_filter	GROUP11;
	b2r2_color_key      GROUP12;
	b2r2_xyl  			GROUP13;
	b2r2_sau			GROUP14;
	b2r2_vm				GROUP15;
	b2r2_vm				GROUP16;
	unsigned int B2R2_RESERVED[2];

}b2r2_link_list;

/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
/*******************tested unused protype*********************************************/
/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/
#if 0

#define B2R2_GFX_BLEND_NODESIZE (64)
#define B2R2_GFX_CLIP_NODESIZE  (64)



typedef struct
{
	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_src_config	    GROUP3;
	b2r2_clip           GROUP6;

}b2r2_rect_clip_without_color_fill;

typedef struct
{
	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_color_fill     GROUP2;
	b2r2_src_config	    GROUP3;
	b2r2_clip           GROUP6;

}b2r2_rect_clip_with_color_fill;



typedef struct
{
	b2r2_one_src_without_color_fill src;
	b2r2_color_key GROUP12;

}b2r2_colour_key_colfill;

typedef struct
{
	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_color_fill     GROUP2;
	b2r2_src_config	    GROUP3;
}b2r2_fill_Rect;

typedef struct
{
	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_src_config	    GROUP3;
}b2r2_one_src_without_color_fill;

typedef struct
{
	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_src_config	    GROUP3;
	b2r2_src_config     GROUP4;

}b2r2_src1_src2_without_color_fill;


typedef struct
{

	b2r2_system 		GROUP0;
	b2r2_target 		GROUP1;
	b2r2_color_fill     GROUP2;
	b2r2_src_config	    GROUP3;
	b2r2_src_config     GROUP4;

}b2r2_src1_src2_with_color_fill;




#endif


#ifdef __cplusplus
}
#endif /* _cplusplus */

#endif /* !defined(__B2R2_GLOBAL_H) */