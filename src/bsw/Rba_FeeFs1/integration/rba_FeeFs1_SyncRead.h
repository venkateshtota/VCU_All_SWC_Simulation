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

/* BSW-1915 */
#ifndef RBA_FEEFS1_SYNCREAD_H
#define RBA_FEEFS1_SYNCREAD_H

#include "Fls.h"
/* BSW-15220 */
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"
/* END BSW-15220 */
extern Std_ReturnType Fee_Fls_SyncRead( Fls_AddressType SourceAddress,
                                uint8 *TargetAddressPtr,
                                Fls_LengthType Length
                               );

#endif /* RBA_FEEFS1_SYNCREAD_H */
/* END BSW-1915 */
/* BSW-15220 */
#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"
/* END BSW-15220 */