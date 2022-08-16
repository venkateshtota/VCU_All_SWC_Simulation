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


/*********************************************************************************************************************
* CONTAINS THE ECUM-MEMMAP SEC CODE DECLARATIONS
*********************************************************************************************************************/
/* MR12 RULE 1.2 VIOLATION: The MemMap header shall have no include protection because of the concept of MemMap.
   The MemMap header could be included multiple times in a c file. */
#ifndef ECUM_MEMMAP_H
#define ECUM_MEMMAP_H
   #include "EcuM_Cfg_MemMap.h"

/*
***************************************************************
*/
#undef ECUM_MEMMAP_H
#endif//ECUM_MEMMAP_H

