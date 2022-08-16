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



/**********************************************************************************************************************
* Defines/Macros
**********************************************************************************************************************
*/
/* Crc_MemMap.h for AUTOSAR Memory Mapping R4.0 Rev 1-2 */

/*
**********************************************************************************************************************
The following section checks which of the preprocessor constants are defined for
the memory layout. Each .c file will do the following for each function
definition:

1. define the CRC_START_SEC_<type>
2. include this file
3. define the function itself
4. define CRC_STOP_SEC_<type> after the function,
5. include this file again.

There are two options for layout definitions in this file:

1. The standard Memmap concept using a central definition in another file.
   Projects that do not use the RTA-BSW SW, In the case of a project using the
   RTA-BSW SW, the BSW memmap header file will be available e.g.

        #if defined CRC_START_SEC_<section name>
            #define  BSW_START_SEC_<section name>
            #include "Bsw_MemMap.h"
            #undef CRC_START_SEC_<section name>

2. Alternatively, the definition can be made directly in Crc with a #pragma e.g.

        #elif defined (CRC_START_SEC_<section name>)
           #undef      CRC_START_SEC_<section name>
           #pragma section ".text.bsw" ax

There are many different section names possible. Only those currently used in the
Crc module are defined below.
**********************************************************************************************************************
*/

/* Default code section */
/* MR12 RULE 1.2, DIR 4.10 VIOLATION: MemMap header concept - no protection against multiple inclusion intended */
#if defined CRC_START_SEC_CODE
    #define  BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
/* MR12 RULE 20.5 VIOLATION: AUTOSAR MemMap concept requires #undef, AUTOSAR MemMap requirements are incompatible to MISRA */
    #undef CRC_START_SEC_CODE
/* memory sec for code */
#elif defined CRC_STOP_SEC_CODE
    #define  BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef CRC_STOP_SEC_CODE
/* Constants which allocate 64 bits */
#elif defined CRC_START_SEC_CONST_64
    #define BSW_START_SEC_CONST_32
    #include "Bsw_MemMap.h"
    #undef CRC_START_SEC_CONST_64
#elif defined CRC_STOP_SEC_CONST_64
    #define BSW_STOP_SEC_CONST_32
    #include "Bsw_MemMap.h"
    #undef CRC_STOP_SEC_CONST_64
/* Constants which allocate 32 bits */
#elif defined CRC_START_SEC_CONST_32
    #define BSW_START_SEC_CONST_32
    #include "Bsw_MemMap.h"
    #undef CRC_START_SEC_CONST_32
#elif defined CRC_STOP_SEC_CONST_32
    #define BSW_STOP_SEC_CONST_32
    #include "Bsw_MemMap.h"
    #undef CRC_STOP_SEC_CONST_32
/* Constants which allocate 16 bits */
#elif defined CRC_START_SEC_CONST_16
    #define BSW_START_SEC_CONST_16
    #include "Bsw_MemMap.h"
    #undef CRC_START_SEC_CONST_16
#elif defined CRC_STOP_SEC_CONST_16
    #define BSW_STOP_SEC_CONST_16
    #include "Bsw_MemMap.h"
    #undef CRC_STOP_SEC_CONST_16
/* Constants which allocate 8 bits */
#elif defined CRC_START_SEC_CONST_8
    #define BSW_START_SEC_CONST_8
    #include "Bsw_MemMap.h"
    #undef CRC_START_SEC_CONST_8
#elif defined CRC_STOP_SEC_CONST_8
    #define BSW_STOP_SEC_CONST_8
    #include "Bsw_MemMap.h"
    #undef CRC_STOP_SEC_CONST_8
#elif defined TESTCD_CRC_START_SEC_CODE
    #define  BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef TESTCD_CRC_START_SEC_CODE
#elif defined TESTCD_CRC_STOP_SEC_CODE
    #define  BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef TESTCD_CRC_STOP_SEC_CODE

#else
    #error "No valid memmap constant defined before including Crc_MemMap.h"
#endif
