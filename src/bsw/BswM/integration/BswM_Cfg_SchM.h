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



#ifndef BSWM_CFG_SCHM_H
#define BSWM_CFG_SCHM_H

// ---- Includes --------------------------------------------------------------
#include "SchM_Default.h"

// The integrator shall implement the particular services SchM_Enter and SchM_Exit.


#define SchM_Enter_BswM_ExclusiveArea()    /* The integrator shall place his code here which would disable/lock the interrupt */
#define SchM_Exit_BswM_ExclusiveArea()     /* The integrator shall place his code here which would disable/lock the interrupt */


#endif /* BSWM_CFG_SCHM_H */

/**********************************************************************************************************************
 * End of header file
 **********************************************************************************************************************/
