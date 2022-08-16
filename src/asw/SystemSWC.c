/* *****************************************************************************
 * BEGIN: Banner
 *-----------------------------------------------------------------------------
 *                                 ETAS GmbH
 *                      D-70469 Stuttgart, Borsigstr. 14
 *-----------------------------------------------------------------------------
 *    Administrative Information (automatically filled in by ISOLAR)
 *-----------------------------------------------------------------------------
 * Name:
 * Description:
 * Version: 1.0
 *-----------------------------------------------------------------------------
 * END: Banner
 ******************************************************************************

 * Project : ParkBrake
 * Component: /SystemSWC/SystemSWC
 * Runnable : All Runnables in SwComponent
 *****************************************************************************
 * Tool Version: ISOLAR-A/B 9.2
 * Author: MIS1MI
 * Date : Wed Feb 16 15:02:06 2022
 ****************************************************************************/

#include "Rte_SystemSWC.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedIncludes :RE_SystemSWC_main_20ms) ENABLED START */
/* Start of user defined includes  - Do not remove this comment */
/* End of user defined includes - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedConstants :RE_SystemSWC_main_20ms) ENABLED START */
/* Start of user defined constant definitions - Do not remove this comment */
/* End of user defined constant definitions - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedVariables :RE_SystemSWC_main_20ms) ENABLED START */
/* Start of user variable defintions - Do not remove this comment  */
/* End of user variable defintions - Do not remove this comment  */
/*PROTECTED REGION END */

#define SEC2TICK(x)    x*50

#define SystemSWC_START_SEC_CODE
#include "SystemSWC_MemMap.h"
FUNC (void, SystemSWC_CODE) RE_SystemSWC_main_20ms/* return value & FctID */
(
		void
)
{
    static uint32 count = 0;
    if (count++ == SEC2TICK(20))
    {
        vrtaPrintf("Shutdown\n");
        Rte_Switch_PP_ShutdownRequest_MDGP_MSI_ShutDown(RTE_MODE_MDG_ShutDown_SHUT_DOWN);
    }
}
#define SystemSWC_STOP_SEC_CODE
#include "SystemSWC_MemMap.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedFunctions :SystemSWC) ENABLED START */
/* Start of user defined functions  - Do not remove this comment */
/* End of user defined functions - Do not remove this comment */
/*PROTECTED REGION END */
