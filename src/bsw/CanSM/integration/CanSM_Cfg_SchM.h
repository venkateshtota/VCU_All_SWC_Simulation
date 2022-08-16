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




#ifndef CANSM_CFG_SCHM_H
#define CANSM_CFG_SCHM_H

#include "SchM.h"

/* If the RTE code generation is Involved, SchM_CanSM.h is included via CanSM_Cfg.h */
#include "CanSM_Cfg.h"

/* The integrator shall implement the particular services SchM_Enter and SchM_Exit */

/* Since there is currently only one resource used, there is no need to consider the resource name */
#define CANSM_START_SEC_CODE
#include "CanSM_MemMap.h"
LOCAL_INLINE void SchM_Enter_CanSM_BOR_Nw_ModesNoNest(void);
LOCAL_INLINE void SchM_Exit_CanSM_BOR_Nw_ModesNoNest(void);

LOCAL_INLINE void SchM_Enter_CanSM_BaudModesNoNest(void);
LOCAL_INLINE void SchM_Exit_CanSM_BaudModesNoNest(void);

LOCAL_INLINE void SchM_Enter_CanSM_GetMutexNoNest(void);
LOCAL_INLINE void SchM_Exit_CanSM_GetMutexNoNest(void);

#define CANSM_STOP_SEC_CODE
#include "CanSM_MemMap.h"


#define CANSM_START_SEC_CODE
#include "CanSM_MemMap.h"

LOCAL_INLINE void SchM_Enter_CanSM_BOR_Nw_ModesNoNest(void)
{
	/* The integrator shall place here the code which would lock the interrupts */
}

LOCAL_INLINE void SchM_Exit_CanSM_BOR_Nw_ModesNoNest(void)
{
	/* The integrator shall place here the code which would unlock the interrupts */
}


LOCAL_INLINE void SchM_Enter_CanSM_BaudModesNoNest(void)
{
	/* The integrator shall place here the code which would lock the interrupts */
}

LOCAL_INLINE void SchM_Exit_CanSM_BaudModesNoNest(void)
{
	/* The integrator shall place here the code which would unlock the interrupts */
}


LOCAL_INLINE void SchM_Enter_CanSM_GetMutexNoNest(void)
{
	/* The integrator shall place here the code which would lock the interrupts */
}

LOCAL_INLINE void SchM_Exit_CanSM_GetMutexNoNest(void)
{
	/* The integrator shall place here the code which would unlock the interrupts */
}

#define CANSM_STOP_SEC_CODE
#include "CanSM_MemMap.h"

#endif /* CANSM_CFG_SCHM_H */



