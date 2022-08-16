/** @file     SchM_NvM.h
  *
  * @brief    Basic Software Scheduler Module Interlink header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 7.5.0
  */

#ifndef SchM_NvM
#define SchM_NvM

#include "SchM_NvM_Type.h"
#include "Rte_Intl.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_CE_CancelWriteAll)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_CE_EraseNvBlock)
#elif defined(RTE_RUNNABLEAPI_CE_GetDataIndex)
#elif defined(RTE_RUNNABLEAPI_CE_GetErrorStatus)
#elif defined(RTE_RUNNABLEAPI_CE_Init)
#elif defined(RTE_RUNNABLEAPI_CE_InvalidateNvBlock)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_ClrWriteMonCntrs)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_FirstInitAll)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetActiveService)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetBlockId)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetMigrationResult)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetNvBlockLength)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetRequestType)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetStatus)
#elif defined(RTE_RUNNABLEAPI_CE_Rb_GetWriteCounter)
#elif defined(RTE_RUNNABLEAPI_CE_ReadAll)
#elif defined(RTE_RUNNABLEAPI_CE_ReadBlock)
#elif defined(RTE_RUNNABLEAPI_CE_ReadPRAMBlock)
#elif defined(RTE_RUNNABLEAPI_CE_RestoreBlockDefaults)
#elif defined(RTE_RUNNABLEAPI_CE_RestorePRAMBlockDefaults)
#elif defined(RTE_RUNNABLEAPI_CE_SetBlockLockStatus)
#elif defined(RTE_RUNNABLEAPI_CE_SetBlockProtection)
#elif defined(RTE_RUNNABLEAPI_CE_SetDataIndex)
#elif defined(RTE_RUNNABLEAPI_CE_SetRamBlockStatus)
#elif defined(RTE_RUNNABLEAPI_CE_SetWriteAllTrigger)
#elif defined(RTE_RUNNABLEAPI_CE_ValidateAll)
#elif defined(RTE_RUNNABLEAPI_CE_WriteAll)
#elif defined(RTE_RUNNABLEAPI_CE_WriteBlock)
#elif defined(RTE_RUNNABLEAPI_CE_WritePRAMBlock)
#elif defined(RTE_RUNNABLEAPI_SE_MainFunction)
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/* API Mapping Macros */
#ifndef RTE_CORE

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Schedulable Entity Prototypes
 ***
 *******************************************************/

#define NVM_START_SEC_CODE
#include "NvM_MemMap.h"
FUNC(void, NVM_CODE) NvM_MainFunction(void);
#define NVM_STOP_SEC_CODE
#include "NvM_MemMap.h"

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !SchM_NvM */
