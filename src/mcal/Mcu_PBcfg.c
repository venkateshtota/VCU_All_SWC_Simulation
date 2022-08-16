/*******************************************************************************
 * Autogenerated by MCALgen for MCU V1.0.54.30643: Mcu_PBcfg.c
 *******************************************************************************/

/************************************************************************************************************
 *                              Include Files
 ***********************************************************************************************************/
#include "Mcu.h"
#include "Mcu_Cbk.h" /* [$MCU 218] */

/* Version checks */
#if (MCU_AR_RELEASE_MAJOR_VERSION != (4U)) || (MCU_AR_RELEASE_MINOR_VERSION != (2U)) || (MCU_AR_RELEASE_REVISION_VERSION != (2U))
 #error "MCU AUTOSAR version in MCU.h does not match 4.2.2"
#endif
#if (MCU_SW_MAJOR_VERSION != (1U)) || (MCU_SW_MINOR_VERSION != (0U)) || (MCU_SW_PATCH_VERSION != (54U))
 #error "MCU software version in MCU.h does not match 1.0.54"
#endif
#if (MCU_VENDOR_ID !=  (11U))
 #error "MCU Vendor ID in MCU.h does not match 11"
#endif
 /* [$MCU 110] */

#if (MCU_DEV_ERROR_DETECT == STD_ON)
 #include "Det.h"
#endif

const Mcu_ConfigType Mcu_ConfigData = {
  (Mcu_ResetType)1
};

/*----------------------------
 * End of const
 *----------------------------*/
#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"


