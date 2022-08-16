/*
 * This is a template file. It defines integration functions necessary to complete RTA-BSW.
 * The integrator must complete the templates before deploying software containing functions defined in this file.
 * Once templates have been completed, the integrator should delete the #error line.
 * Note: The integrator is responsible for updates made to this file.
 *
 * To remove the following error define the macro NOT_READY_FOR_TESTING_OR_DEPLOYMENT with a compiler option (e.g. -D NOT_READY_FOR_TESTING_OR_DEPLOYMENT)
 * The removal of the error only allows the user to proceed with the building phase
 */
#ifndef NOT_READY_FOR_TESTING_OR_DEPLOYMENT
#error The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#else
//#warning The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#endif /* NOT_READY_FOR_TESTING_OR_DEPLOYMENT */


/* NvM_MemMap.h for AUTOSAR Memory Mapping R4.0 Rev 3 */
/* MR12 DIR 4.10 VIOLATION: MemMap header concept - no protection against repeated inclusion intended */
/* MR12 DIR 1.2 VIOLATION: MemMap header concept - no protection against repeated inclusion intended */
/* MR12 RULE 20.14 VIOLATION: All #if are balanced, no failure expected */
/* MR12 RULE 20.5 VIOLATION: AUTOSAR MemMap concept requires #undef,
   AUTOSAR MemMap requirements are incompatible to MISRA
*/
/* Note related to MR12 RULE 20.5 VIOLATION (refer also to Change Request 126381):
   - MISRA C comment scope needs to be extended to the rest of the header by deleting empty lines.
   - Introduction of comments is ok to structure the code
*/
/*
 **********************************************************************************************************************
 * Necessary for service components: RTE uses unchanged SWCD short name for runnables on ASW side
 **********************************************************************************************************************
*/
#if defined NvM_START_SEC_CODE
    #undef  NvM_START_SEC_CODE
    #define NVM_START_SEC_CODE
#elif defined NvM_STOP_SEC_CODE
    #undef  NvM_STOP_SEC_CODE
    #define NVM_STOP_SEC_CODE
#endif
/*
 **********************************************************************************************************************
 * Variables mapping
 **********************************************************************************************************************
*/
/* ========================================================== */
/* == Variables that are cleared to zero after every reset == */
/* ========================================================== */
#if defined NVM_START_SEC_VAR_CLEARED_8
    #undef NVM_START_SEC_VAR_CLEARED_8
    #define BSW_START_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_8
    #undef NVM_STOP_SEC_VAR_CLEARED_8
    #define BSW_STOP_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_16
    #undef NVM_START_SEC_VAR_CLEARED_16
    #define BSW_START_SEC_VAR_CLEARED_16
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_16
    #undef NVM_STOP_SEC_VAR_CLEARED_16
    #define BSW_STOP_SEC_VAR_CLEARED_16
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_32
    #undef NVM_START_SEC_VAR_CLEARED_32
    #define BSW_START_SEC_VAR_CLEARED_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_32
    #undef NVM_STOP_SEC_VAR_CLEARED_32
    #define BSW_STOP_SEC_VAR_CLEARED_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef NVM_START_SEC_VAR_CLEARED_UNSPECIFIED
    #define BSW_START_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #define BSW_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.h"
/* ========================================================== */
/* == Initialized Variables                                == */
/* ========================================================== */
#elif defined NVM_START_SEC_VAR_INIT_8
    #undef NVM_START_SEC_VAR_INIT_8
    #define BSW_START_SEC_VAR_INIT_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_INIT_8
    #undef NVM_STOP_SEC_VAR_INIT_8
    #define BSW_STOP_SEC_VAR_INIT_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_INIT_16
    #undef NVM_START_SEC_VAR_INIT_16
    #define BSW_START_SEC_VAR_INIT_16
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_INIT_16
    #undef NVM_STOP_SEC_VAR_INIT_16
    #define BSW_STOP_SEC_VAR_INIT_16
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_INIT_32
    #undef NVM_START_SEC_VAR_INIT_32
    #define BSW_START_SEC_VAR_INIT_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_INIT_32
    #undef NVM_STOP_SEC_VAR_INIT_32
    #define BSW_STOP_SEC_VAR_INIT_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_INIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_INIT_UNSPECIFIED
    #define BSW_START_SEC_VAR_INIT_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #define BSW_STOP_SEC_VAR_INIT_UNSPECIFIED
    #include "Bsw_MemMap.h"
/* ========================================================== */
/* == Variables located in saved zone                      == */
/* ========================================================== */
#elif defined NVM_START_SEC_VAR_SAVED_ZONE_8
    #undef NVM_START_SEC_VAR_SAVED_ZONE_8
    #define BSW_START_SEC_SAVED_ZONE_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_SAVED_ZONE_8
    #undef NVM_STOP_SEC_VAR_SAVED_ZONE_8
    #define BSW_STOP_SEC_SAVED_ZONE_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_SAVED_ZONE_16
    #undef NVM_START_SEC_VAR_SAVED_ZONE_16
    #define BSW_START_SEC_SAVED_ZONE_16
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_SAVED_ZONE_16
    #undef NVM_STOP_SEC_VAR_SAVED_ZONE_16
    #define BSW_STOP_SEC_SAVED_ZONE_16
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_SAVED_ZONE_32
    #undef NVM_START_SEC_VAR_SAVED_ZONE_32
    #define BSW_START_SEC_SAVED_ZONE_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_SAVED_ZONE_32
    #undef NVM_STOP_SEC_VAR_SAVED_ZONE_32
    #define BSW_STOP_SEC_SAVED_ZONE_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef NVM_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #define BSW_START_SEC_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #define BSW_STOP_SEC_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
/*
 **********************************************************************************************************************
 * Constants mapping
 **********************************************************************************************************************
*/
/* ========================================================== */
/* == Global or static Constants                           == */
/* ========================================================== */
#elif defined NVM_START_SEC_CONST_8
    #undef NVM_START_SEC_CONST_8
    #define BSW_START_SEC_CONST_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_8
    #undef NVM_STOP_SEC_CONST_8
    #define BSW_STOP_SEC_CONST_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_16
    #undef NVM_START_SEC_CONST_16
    #define BSW_START_SEC_CONST_16
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_16
    #undef NVM_STOP_SEC_CONST_16
    #define BSW_STOP_SEC_CONST_16
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_32
    #undef NVM_START_SEC_CONST_32
    #define BSW_START_SEC_CONST_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_32
    #undef NVM_STOP_SEC_CONST_32
    #define BSW_STOP_SEC_CONST_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_UNSPECIFIED
    #undef NVM_START_SEC_CONST_UNSPECIFIED
    #define BSW_START_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_UNSPECIFIED
    #undef NVM_STOP_SEC_CONST_UNSPECIFIED
    #define BSW_STOP_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.h"
/* ========================================================== */
/* == ROM buffers of NVRAM blocks                          == */
/* ========================================================== */
#elif defined NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #undef NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #define BSW_START_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #undef NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #define BSW_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #undef NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #define BSW_START_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #undef NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #define BSW_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_16
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #undef NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #define BSW_START_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #undef NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #define BSW_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #undef NVM_START_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #define BSW_START_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #undef NVM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #define BSW_STOP_SEC_CONST_SAVED_RECOVERY_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
/*
**********************************************************************************************************************
* Mapping for special protected variables
**********************************************************************************************************************
*/
#elif defined NVM_START_SEC_VAR_CLEARED_SECURED_8
    #undef NVM_START_SEC_VAR_CLEARED_SECURED_8
    #define BSW_START_SEC_VAR_CLEARED_SECURED_8
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_SECURED_8
    #undef NVM_STOP_SEC_VAR_CLEARED_SECURED_8
    #define BSW_STOP_SEC_VAR_CLEARED_SECURED_8
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_SECURED_32
    #undef NVM_START_SEC_VAR_CLEARED_SECURED_32
    #define BSW_START_SEC_VAR_CLEARED_SECURED_32
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_SECURED_32
    #undef NVM_STOP_SEC_VAR_CLEARED_SECURED_32
    #define BSW_STOP_SEC_VAR_CLEARED_SECURED_32
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #undef NVM_START_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #define BSW_START_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #define BSW_STOP_SEC_VAR_CLEARED_SECURED_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_START_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #undef NVM_START_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #define BSW_START_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #define BSW_STOP_SEC_VAR_CLEARED_SECURED_CACHE_LINE_ALIGNED_UNSPECIFIED
    #include "Bsw_MemMap.h"
/*
 **********************************************************************************************************************
 * Code mapping
 **********************************************************************************************************************
*/
/* ========================================================== */
/* == Code located in normal code section                  == */
/* == (not defined by Autosar!)                            == */
/* ========================================================== */
#elif defined NVM_START_SEC_CODE
    #undef NVM_START_SEC_CODE
    #define  BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
#elif defined NVM_STOP_SEC_CODE
    #undef NVM_STOP_SEC_CODE
    #define  BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
/*********************************************************************************************************************/
#else
    #error "NvM_MemMap.h: unknown MemMap define "
// Intentional empty line

// End
#endif

