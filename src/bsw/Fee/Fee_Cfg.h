

#ifndef FEE_CFG_H
#define FEE_CFG_H

#include "Fls.h"

#define FEE_PRESENT   1

/* For Fee test purposes only */
#define FEE_PRV_DEBUGGING FALSE
#define FEE_SIMULATION_ACTIVE FALSE

/* *********************************************************************************************************************
 *
 * Description: This configuration is to enable and disable the availability of the variable which gives hint on how much bytes
 * free bytes available in D-flash. The veriable can be used  only for seeing the status of the free bytes using INCA tool
 * Application should not use this veriable for taking any decision.
 * TRUE : The veriable is available for INCA measurement
 * FALSE : The veriable won't be available INCA for measurement
 ******************************************************************************************************************** */
#define FEE_PRV_FREEBYTES_INDFLASH  FALSE


/* *********************************************************************************************************************
 * SWS Item:        FEE039_Conf
 * Container Name:  FeeGeneral
 * Description:     Container for general parameters. These parameters are not specific to a block.
 ******************************************************************************************************************** */
#define FEE_VENDOR_ID                   6 
#define FEE_MODULE_ID                   21 /* Module ID of Fee */
#define FEE_INSTANCE_ID                 0 /* Instance ID */

/* Fee Software Version in BASD is Fee / AR40.17.0.0 */
#define FEE_SW_MAJOR_VERSION            17
#define FEE_SW_MINOR_VERSION            0
#define FEE_SW_PATCH_VERSION            0

/* Fee is compatible with Autosar 4.2Rev2 */
#define FEE_AR_RELEASE_MAJOR_VERSION    4
#define FEE_AR_RELEASE_MINOR_VERSION    2
#define FEE_AR_RELEASE_REVISION_VERSION 2

/* *********************************************************************************************************************
 * SWS Item:        FEE111_Conf
 * Name:            FeeDevErrorDetect
 * Description:     Pre-processor switch to enable and disable development error detection.
 *                  true: Development error detection enabled.
 *                  false: Development error detection disabled.
 * Multiplicity:    1
 * Type:            EcucBooleanParamDef
 ********************************* ********************************************************************************** */
#define FEE_DEV_ERROR_DETECT        STD_OFF

/* *********************************************************************************************************************
 * SWS Item:        FEE152_Conf
 * Name:            FeeIndex
 * Description:     Specifies the InstanceId of this module instance. If only one instance is present it shall have
 *                  the Id 0.
 * Multiplicity:    1
 * Type:            EcucIntegerParamDef
 * Range:           0 .. 254
  ******************************************************************************************************************* */
#define FEE_FEEINDEX      0u

/* *********************************************************************************************************************
 * SWS Item:        FEE112_Conf
 * Name:            FeeNvmJobEndNotification
 * Description:     Mapped to the job end notification routine provided by the upper layer module
 *                  (NvM_JobEndNotification).
 *                  This tag has no effect. Job end and job error notifications must be configured block wise
 *                  if necessary via FeeRbCallbackEnd and FeeRbCallbackError.
 * Multiplicity:    0 .. 1
 * Type:            EcucFunctionNameDef
  ******************************************************************************************************************* */
#define FEE_NVM_JOB_END_NOTIFICATION    NULL_PTR

/* *********************************************************************************************************************
 * SWS Item:        FEE113_Conf
 * Name:            FeeNvmJobErrorNotification
 * Description:     Mapped to the job error notification routine provided by the upper layer module
 *                  (NvM_JobErrorNotification).
 *                  This tag has no effect. Job end and job error notifications must be configured block wise
 *                  if necessary via FeeRbCallbackEnd and FeeRbCallbackError.
 * Multiplicity:    0 .. 1
 * Type:            EcucFunctionNameDef
  ******************************************************************************************************************* */
#define FEE_NVM_JOB_ERROR_NOTIFICATION  NULL_PTR

/* *********************************************************************************************************************
 * SWS Item:        FEE114_Conf
 * Name:            FeePollingMode
 * Description:     Pre-processor switch to enable and disable the polling mode for this module.
 *                  true:  Polling mode enabled, callback functions (provided to FLS module) disabled.
 *                  false: Polling mode disabled, callback functions (provided to FLS module) enabled.
 * Multiplicity:    1
 * Type:            EcucBooleanParamDef
  ******************************************************************************************************************* */
#define FEE_POLLING_MODE  STD_ON

/* *********************************************************************************************************************
 * SWS Item:        FEE119_Conf
 * Name:            FeeSetModeSupported
 * Description:     Compiler switch to enable/disable the 'SetMode' functionality of the FEE module.
 *                  TRUE: SetMode functionality supported / code present,
 *                  FALSE: SetMode functionality not supported / code not present. Note: This configuration setting has
 *                  to be consistent with that of all underlying flash device drivers (configuration parameter
 *                  FlsSetModeApi).
 * Multiplicity:    1
 * Type:            EcucBooleanParamDef
  ******************************************************************************************************************* */
#define FEE_SET_MODE_SUPPORTED  STD_OFF

/* *********************************************************************************************************************
 * SWS Item:        FEE115_Conf
 * Name:            FeeVersionInfoApi
 * Description:     Pre-processor switch to enable / disable the API to read out the modules version information.
 *                  true:  Version info API enabled.
 *                  false: Version info API disabled.
 * Multiplicity:    1
 * Type:            EcucBooleanParamDef
  ******************************************************************************************************************* */
#define FEE_VERSION_INFO_API    STD_OFF

/* *********************************************************************************************************************
 * SWS Item:        FEE116_Conf
 * Name:            FeeVirtualPageSize
 * Description:     The size in bytes to which logical blocks shall be aligned.
 * Multiplicity:    1
 * Type:            EcucIntegerParamDef
 * Range:           0 .. 65535
  ******************************************************************************************************************* */
#define FEE_VIRTUAL_PAGE_SIZE   8u



/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbPageBufferSize
 * Description:     Size of buffer for communication between flash driver and Fee.
 * Multiplicity:    0
 * Type:            EcucIntegerParamDef
 * Range:           256 .. Fee logical sector size
  ******************************************************************************************************************* */
#define FEE_LL_PAGEBUFFSIZE   1024u

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbMaintainRedundantBlocks
 * Description:     Pre-processor switch to enable / disable the API to maintain the redundant blocks.
 *                  true:  Maintain function enabled.
 *                  false: Maintain function disabled.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_MAINTAIN        TRUE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbReadForce
 * Description:     Pre-processor switch to enable and disable read force function.
 *                  true:  Read force function enabled.
 *                  false: Read force function disabled.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_READ_FORCE        FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbTriggerReorgApi
 * Description:     Pre-processor switch to enable or disable forced sector reorganisation (for one sector).
 *                  true:  Forced reorganisation feature supported (one force reorg per call).
 *                  false: Forced reorganisation feature not supported.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_TRIGGER_REORG        FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbEnterStopModeApi
 * Description:     Pre-processor switch to enable or disable stop mode
 *                  true:  Entering into stop mode feature supported.
 *                  false: Entering into stop mode feature not supported.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ENTER_STOP_MODE        FALSE

/* *********************************************************************************************************************
 * SWS Item:        RB add-on
 * Name:            FeeRbAddonsCCAS
 * Description:     Pre-processor switch to enable or disable addons for CCAS which are realised is an adapter:
 *                  - rba_FeeAddOnAS_EnterStopMode
 *                  - rba_FeeAddOnAS_WriteAdr
 *                  - rba_FeeAddOnAS_ForcedRead
 *                  Hint: for the usage of the rba_FeeAddOnAS_ForcedRead functionality, the Fee configuration tag
 *                        "FeeRbReadForce" needs to be activated as well.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ADDONS_CCAS        FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbActSurvivalEval
 * Description:     Pre-processor switch to enable or disable an additional block specific reorganization for unknown
 *                  blocks with an active survival setting ("FeeRbSurvival") in the medium.
 *                  true:  Feature enabled  ("block specific afterburner" on for blocks with active survival setting).
 *                  false: Feature disabled ("block specific afterburner" off for blocks with active survival setting).
 *                  Hint:  If activated, this block will be overtaken independent from the "FeeRbActUnknownBlockReorg"
 *                         setting ("general afterburner").
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ACT_SURVIVAL_EVAL  FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbActUnknownBlockReorg
 * Description:     Pre-processor switch to enable or disable an additional reorganization for any unknown block in
 *                  the medium.
 *                  true:  Feature enabled  ("general afterburner" on for all unknown blocks).
 *                  false: Feature disabled ("general afterburner" off for all unknown blocks).
 *                  Hints: If activated, all unknown blocks will be overtaken independent from the "FeeRbActSurvivalEval"
 *                         setting ("block specific afterburner").
 *                         If deactivated and with active survival evaluation ("FeeRbActSurvivalEval" == TRUE),
 *                         only blocks with an active survival setting ("FeeRbSurvival" == TRUE) will be overtaken.
 *                         Only the CB (Customer Block) is allowed to enable this feature, because this is affecting the
 *                         thresholds of the sector reorganization to a special safety level. It must be deactivated
 *                         for the ASW!
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ACT_UNKNOWN_BLOCK_REORG   FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbActUnknownBlockReorgCacheSize
 * Description:     Pre-processor switch to enable or disable an additional optimisation in sector reorganization
 *                  for any unknown block in the medium.
 *                  This feature fastens the sector reorganisation for unknown blocks (Global after burner feature) by
 *                  scanning the sector and building up a cache for unknown block. Each unknown block requires 6 bytes
 *                  information in the cache, 4 bytes for address and 2 bytes for FEE index.
 *                  For best performance project must allocate enough cache size to store information of all unknown blocks.
 *                  For example, if a project has 250 unknown blocks in CB then at least 250*6 = 1500bytes to be allocated.
 *                  Default value is for 300 unknown blocks, which is 300*6=1800bytes.
 *                  Using the configured size the size of the array is generated.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ACT_UNKNOWN_BLOCK_CACHE_SIZE   0u

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbActEraseSuspension
 * Description:     Pre-processor switch to enable or disable erase suspension feature of Ti devices.
 *                  true:  Erase suspension enabled.
 *                  false: Erase suspension disabled.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_ACT_ERASE_SUSPENSION      FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbGetFreeSpaceApi
 * Description:     Pre-processor switch to enable or disable free space API
 *                  true:  Free space API supported.
 *                  false: Free space API not supported.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_GET_NR_FREE_BYTES        FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbGetNrFreeBytesAndFatEntriesApi
 * Description:     Pre-processor switch to enable or disable number free bytes and FAT entries API
 *                  true:  Number free bytes and FAT entries API supported.
 *                  false: Number free bytes and FAT entries API not supported.
 * Multiplicity:    0
 * Type:            EcucBooleanParamDef
 ******************************************************************************************************************** */
#define FEE_RB_GET_NR_FREE_BYTES_AND_FAT_ENTRIES  FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbBlockTableLocation
 * Description:     Selected Location for Block Properties Table
 *                  TRUE:  Use ROM-Loction for Fee_BlockProperties_st.
 *                  FALSE: Use RAM-Location for Fee_BlockProperties_st.
 * Multiplicity:    0
 * Type:            EcucEnumerationParamDef
 ******************************************************************************************************************** */
#define FEE_RB_USE_ROM_BLOCKTABLE        FALSE

/* *********************************************************************************************************************
 * SWS Item:        Conf
 * Name:            FeeRbSyncFlsMainLoopHook
 * Description:     Hook into synchronous Fls_MainFunction loop
 * Multiplicity:    0
 * Type:            FunctionName
 ******************************************************************************************************************** */
#define FEE_RB_SYNC_LOOP_FLS_MAIN_HOOK() (void)0

/* ******************************************************************************************************************
   ******************************************** FeePublishedInformation *********************************************
   ****************************************************************************************************************** */

/* FEE117_Conf: FeeBlockOverhead {FEE_BLOCK_OVERHEAD}
 * Management overhead per logical block in bytes.
 * Note:
 * If the management overhead depends on the block size or block location a formula has to be provided that allows the
 * configurator to calculate the management overhead correctly.
 * Type:    EcucIntegerParamDef
 * Range:   0 .. 65535 */
#define FEE_BLOCK_OVERHEAD          14u

/* FEE070_Conf: FeeMaximumBlockingTime {FEE_MAXIMUM_BLOCKING_TIME}
 * The maximum time the FEE module's API routines shall be blocked (delayed) by internal operations.
 * Note:
 * Internal operations in that case means operations that are not explicitly invoked from the upper layer module but
 * need to be handled for proper operation of this module or the underlying memory driver.
 * Type:    EcucFloatParamDef
 * Range:   0.0 .. Inf */
#define FEE_MAXIMUM_BLOCKING_TIME   5u

/* FEE118_Conf: FeePageOverhead {FEE_PAGE_OVERHEAD}
 * Management overhead per page in bytes.
 * Note:
 * If the management overhead depends on the block size or block location a formula has to be provided that allows the
 * configurator to calculate the management overhead correctly.
 * Type:    EcucIntegerParamDef
 * Range:   0 .. 65535 */
#define FEE_PAGE_OVERHEAD           0u



/* ******************************************************************************************************************
   *************************************** Fee internally used configuration ****************************************
   ****************************************************************************************************************** */

/* Fee Robustness Feature active for any of the configured blocks */
#define FEE_ROB_FEATURE_ACTIVE                      TRUE
/* Fee NoFallback feature active for any of the configured blocks */
#define FEE_NO_FALLBACK_ACTIVE                      FALSE
/* Fast cache initialization */
#define FEE_FAST_CACHE_INIT_ACTIVE                  TRUE
/* Header Recheck - necessary for flash types with undefined erase pattern like Renesas RH850 */
#define FEE_HEADER_RECHECK_ACTIVE                   TRUE
/* Robust programming feature setting */
#define FEE_ROBUST_PROG_ACTIVE                      FALSE

/* Threshold calculation*/
#define FEE_REQUIRED_FREE_SPACE_BEFORE_SOFT_SR         1544uL  /* FEE_REQUIRED_FREE_SPACE_BEFORE_HARD_SR = Min sector size + 1 = 1024 byte + 1) * 1,5 * 1,0 */
#define FEE_REQUIRED_FREE_SPACE_BEFORE_HARD_SR         1032uL  /* FEE_REQUIRED_FREE_SPACE_BEFORE_HARD_SR = Min sector size + 1 = 1024 byte + 1 * 1,0 */

/* Number of pages which are used to store the blockheader */
#define FEE_PAGES_USED_BY_BLK_HEADER                2u
/* Number of data bytes behind the blockheader */
#define FEE_FREE_BYTES_AFTER_HEADER                 2u
/* Size of the sector header */
#define FEE_SEC_HEADER_SIZE                         96u

/* Number of FeeBlocks */
#define FEE_NUM_BLOCKS                              2u
/* Number of unknown blocks that can be transfered/checked in one iteration of unknown block sector reorganisation (Global After burner feature) */
#define FEE_RB_ACT_UNKNOWN_BLK_CACHE_ARRAY_SIZE     0u
/* Number of retries in case of an error (Compare / Read / Write) */
#define FEE_MAX_RD_WR_COMP_RETRIES                  3u

/* Init value for the cache */
#define FEE_CACHE_INIT_VALUE                        0xCAFEAFFEuL
/* Update start value for the cache (there might be an entry available in the flash which can be found via "manual search") */
#define FEE_CACHE_TMP_INVALID_VALUE                 0xAFFECAFEuL

/* ******************************************************************************************************************
   ******************************************* Generate FLASH configuration *****************************************
   ****************************************************************************************************************** */
#define FEE_PAGE_LEN                                8u  /* Configured virtual page size */
#define FEE_FASTMODE_ALIGNMENT                      8u  /* Necessary address alignment to write in FastMode */
#define FEE_ERASE_PATTERN                           255u

/* DFLASH configuration for uC MCU_RB_EVE_AUTOSAR */
/* ******************************************* Configuration of sector 0 ******************************************** */
#define FEE_PHYS_SEC_START0  0x00000000uL
#define FEE_PHYS_SEC_END0    0x000003FFuL
#define FEE_LOG_SEC_START0   (FEE_PHYS_SEC_START0 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END0     FEE_PHYS_SEC_END0

/* ******************************************* Configuration of sector 1 ******************************************** */
#define FEE_PHYS_SEC_START1  0x00000400uL
#define FEE_PHYS_SEC_END1    0x000007FFuL
#define FEE_LOG_SEC_START1   (FEE_PHYS_SEC_START1 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END1     FEE_PHYS_SEC_END1

/* ******************************************* Configuration of sector 2 ******************************************** */
#define FEE_PHYS_SEC_START2  0x00000800uL
#define FEE_PHYS_SEC_END2    0x00000BFFuL
#define FEE_LOG_SEC_START2   (FEE_PHYS_SEC_START2 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END2     FEE_PHYS_SEC_END2

/* ******************************************* Configuration of sector 3 ******************************************** */
#define FEE_PHYS_SEC_START3  0x00000C00uL
#define FEE_PHYS_SEC_END3    0x00000FFFuL
#define FEE_LOG_SEC_START3   (FEE_PHYS_SEC_START3 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END3     FEE_PHYS_SEC_END3

/* ******************************************* Configuration of sector 4 ******************************************** */
#define FEE_PHYS_SEC_START4  0x00001000uL
#define FEE_PHYS_SEC_END4    0x000013FFuL
#define FEE_LOG_SEC_START4   (FEE_PHYS_SEC_START4 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END4     FEE_PHYS_SEC_END4

/* ******************************************* Configuration of sector 5 ******************************************** */
#define FEE_PHYS_SEC_START5  0x00001400uL
#define FEE_PHYS_SEC_END5    0x000017FFuL
#define FEE_LOG_SEC_START5   (FEE_PHYS_SEC_START5 + FEE_SEC_HEADER_SIZE)
#define FEE_LOG_SEC_END5     FEE_PHYS_SEC_END5

#define FEE_NUM_FLASH_BANKS_AVAILABLE  6u      /* Number of sectors which are available by the HW */



/* Static defines containing public information */
#define FEE_CFG_EMULATION_START (FEE_PHYS_SEC_START0)         /* Start and end of the emulation area */
#define FEE_CFG_EMULATION_END   (FEE_CFG_EMULATION_START + (((FEE_PHYS_SEC_END0 + 1u) - FEE_PHYS_SEC_START0) * FEE_NUM_FLASH_BANKS_AVAILABLE))

/* ******************************************************************************************************************
   ******************************************* Defines for accessing blocks *****************************************
   ****************************************************************************************************************** */
/* Defines for all configured blocks which should be used by the upperlaying modules (NvM, ...) to access their blocks via the Fee APIs */
#define FeeConf_FeeBlockConfiguration_NvM_NativeBlock_2                                           0
#define FeeConf_FeeBlockConfiguration_ECUM_CFG_NVM_BLOCK                                          1


/* ******************************************************************************************************************
   ********************************** External declarations, provided by/to Fee *************************************
   ****************************************************************************************************************** */


/* ******************************************************************************************************************
   ***************************** External declarations of hook functions provided to Fee ****************************
   ****************************************************************************************************************** */


/* ******************************************************************************************************************
   ********************************************** Fs specific defines ***********************************************
   ****************************************************************************************************************** */
#define FEE_ERASE_PATTERN_U32                                        0xFFFFFFFFuL
#define FEE_PHY_PAGE_LEN                                             8u             /* Physical page size */
#define FEE_CFG_FEE1_ENABLED                                         TRUE /* Fee1.0 code is enabled */


#endif /* FEE_CFG_H */
