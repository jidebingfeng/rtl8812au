/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

#ifndef	__ODM_PRECOMP_H__
#define __ODM_PRECOMP_H__

#include "odm_types.h"

#define		TEST_FALG___		1

#define BEAMFORMING_SUPPORT 0

//2 Hardware Parameter Files


	#if(RTL8192CE_SUPPORT ==1)
	#include "rtl8192c/Hal8192CEFWImg_CE.h"
	#include "rtl8192c/Hal8192CEPHYImg_CE.h"
	#include "rtl8192c/Hal8192CEMACImg_CE.h"
	#endif

	#if(RTL8192CU_SUPPORT ==1)
	#include "rtl8192c/Hal8192CUFWImg_CE.h"
	#include "rtl8192c/Hal8192CUPHYImg_CE.h"
	#include "rtl8192c/Hal8192CUMACImg_CE.h"
	#endif

	#if(RTL8192DE_SUPPORT ==1)
	#include "rtl8192d/Hal8192DEFWImg_CE.h"
	#include "rtl8192d/Hal8192DEPHYImg_CE.h"
	#include "rtl8192d/Hal8192DEMACImg_CE.h"
	#endif

	#if(RTL8192DU_SUPPORT ==1)
	#include "rtl8192d/Hal8192DUFWImg_CE.h"
	#include "rtl8192d/Hal8192DUPHYImg_CE.h"
	#include "rtl8192d/Hal8192DUMACImg_CE.h"
	#endif

	#if(RTL8723AS_SUPPORT==1)
	#include "rtl8723a/Hal8723SHWImg_CE.h"
	#endif

	#if(RTL8723AU_SUPPORT==1)
	#include "rtl8723a/Hal8723UHWImg_CE.h"
	#endif

//2 OutSrc Header Files

#include "odm.h"
#include "odm_HWConfig.h"
#include "odm_debug.h"
#include "odm_RegDefine11AC.h"
#include "odm_RegDefine11N.h"

	#include "HalPhyRf.h"
	#if (RTL8192C_SUPPORT==1)
	#ifdef CONFIG_INTEL_PROXIM
	#include "../proxim/intel_proxim.h"
	#endif
	#include  "rtl8192c/HalDMOutSrc8192C_CE.h"
	#include <rtl8192c_hal.h>
	#endif

	#if (RTL8192D_SUPPORT==1)
	#include  "rtl8192d/HalDMOutSrc8192D_CE.h"
	#include  "rtl8192d_hal.h"
	#endif

	#if (RTL8723A_SUPPORT==1)
		#include "rtl8192c/HalDMOutSrc8192C_CE.h" //for IQK,LCK,Power-tracking
		#include "rtl8723a_hal.h"
	#endif

	#if (RTL8188E_SUPPORT==1)
		#include "rtl8188e/HalPhyRf_8188e.h"//for IQK,LCK,Power-tracking
		#include "rtl8188e/Hal8188ERateAdaptive.h"//for  RA,Power training
		#include "rtl8188e_hal.h"
	#endif

	#if (RTL8192E_SUPPORT==1)
		#include "rtl8192e/HalPhyRf_8192e.h"//for IQK,LCK,Power-tracking
		#include "rtl8192e_hal.h"
	#endif

	#if (RTL8812A_SUPPORT==1)
		#include "HalPhyRf_8812A.h"//for IQK,LCK,Power-tracking
		#include "rtl8812a_hal.h"
	#endif

	#if (RTL8821A_SUPPORT==1)
		#include "HalPhyRf_8821A.h"//for IQK,LCK,Power-tracking
		#include "HalPhyRf_8812A.h"//for IQK,LCK,Power-tracking
		#include "rtl8812a_hal.h"
	#endif

	#if (RTL8723B_SUPPORT==1)
		#include "rtl8723b/HalPhyRf_8723B.h"//for IQK,LCK,Power-tracking
		#include "rtl8723b/HalPhyRf_8723B.h"//for IQK,LCK,Power-tracking
		#include "rtl8723b_hal.h"
	#endif

#include "odm_interface.h"
#include "odm_reg.h"

#if (RTL8192C_SUPPORT==1)
#include "rtl8192c/odm_RTL8192C.h"
#endif
#if (RTL8192D_SUPPORT==1)
#include "rtl8192d/odm_RTL8192D.h"
#endif

#if (RTL8723A_SUPPORT==1)
#include "rtl8723a/HalHWImg8723A_MAC.h"
#include "rtl8723a/HalHWImg8723A_RF.h"
#include "rtl8723a/HalHWImg8723A_BB.h"
#include "rtl8723a/HalHWImg8723A_FW.h"
#include "rtl8723a/odm_RegConfig8723A.h"
#endif

#if (RTL8188E_SUPPORT==1)
#include "rtl8188e/HalHWImg8188E_MAC.h"
#include "rtl8188e/HalHWImg8188E_RF.h"
#include "rtl8188e/HalHWImg8188E_BB.h"
#include "rtl8188e/HalHWImg8188E_FW.h"
#include "rtl8188e/Hal8188EReg.h"

#if (TEST_CHIP_SUPPORT == 1)
#include "rtl8188e/HalHWImg8188E_TestChip_MAC.h"
#include "rtl8188e/HalHWImg8188E_TestChip_RF.h"
#include "rtl8188e/HalHWImg8188E_TestChip_BB.h"
#endif


#include "rtl8188e/odm_RegConfig8188E.h"
#include "rtl8188e/odm_RTL8188E.h"
#endif

#if (RTL8192E_SUPPORT==1)
#include "rtl8192e/HalHWImg8192E_MAC.h"
#include "rtl8192e/HalHWImg8192E_RF.h"
#include "rtl8192e/HalHWImg8192E_BB.h"
#include "rtl8192e/HalHWImg8192E_FW.h"
#include "rtl8192e/Hal8192EReg_Odm.h"
#include "rtl8192e/odm_RegConfig8192E.h"
#include "rtl8192e/odm_RTL8192E.h"
#endif

#if (RTL8723B_SUPPORT==1)
#include "rtl8723b/HalHWImg8723B_MAC.h"
#include "rtl8723b/HalHWImg8723B_RF.h"
#include "rtl8723b/HalHWImg8723B_BB.h"
#include "rtl8723b/HalHWImg8723B_FW.h"
#include "rtl8723b/HalHWImg8723B_MP.h"
#include "rtl8723b/Hal8723BReg.h"
#include "rtl8723b/odm_RTL8723B.h"
#include "rtl8723b/odm_RegConfig8723B.h"
#endif

#if (RTL8812A_SUPPORT==1)
#include "HalHWImg8812A_MAC.h"
#include "HalHWImg8812A_RF.h"
#include "HalHWImg8812A_BB.h"
#include "HalHWImg8812A_FW.h"
#include "odm_RegConfig8812A.h"
#if (TEST_CHIP_SUPPORT == 1)
#include "HalHWImg8812A_TestChip_MAC.h"
#include "HalHWImg8812A_TestChip_RF.h"
#include "HalHWImg8812A_TestChip_BB.h"
#endif
#endif


#if (RTL8821A_SUPPORT==1)
#include "HalHWImg8821A_MAC.h"
#include "HalHWImg8821A_RF.h"
#include "HalHWImg8821A_BB.h"
#include "HalHWImg8821A_FW.h"
#include "odm_RegConfig8821A.h"
#if (TEST_CHIP_SUPPORT == 1)
#include "HalHWImg8821A_TestChip_MAC.h"
#include "HalHWImg8821A_TestChip_RF.h"
#include "HalHWImg8821A_TestChip_BB.h"
#endif
#endif

#endif	// __ODM_PRECOMP_H__
