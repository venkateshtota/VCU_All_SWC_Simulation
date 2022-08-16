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
 * Component: /ComSWC/ComSWC
 * Runnable : All Runnables in SwComponent
 *****************************************************************************
 * Tool Version: ISOLAR-A/B 9.2
 * Author: MIS1MI
 * Date : Wed Feb 16 15:01:23 2022
 ****************************************************************************/

#include "Rte_ComSWC.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedIncludes :RE_ComSWC_main_10ms) ENABLED START */
/* Start of user defined includes  - Do not remove this comment */
/* End of user defined includes - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedConstants :RE_ComSWC_main_10ms) ENABLED START */
/* Start of user defined constant definitions - Do not remove this comment */
/* End of user defined constant definitions - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedVariables :RE_ComSWC_main_10ms) ENABLED START */
/* Start of user variable defintions - Do not remove this comment  */
/* End of user variable defintions - Do not remove this comment  */
/*PROTECTED REGION END */
#define ComSWC_START_SEC_CODE
#include "ComSWC_MemMap.h"
FUNC (void, ComSWC_CODE) RE_ComSWC_main_10ms/* return value & FctID */
(
		void
)
{
    boolean comParkStatus = FALSE;
    boolean comParkControl = FALSE;

    // Read park control signal from CAN and forward to ParkSWC
    Rte_Read_RP_comParkControl_DE_ParkState(&comParkControl);
    Rte_Write_PP_ParkControl_DE_ParkState(comParkControl);

    // Read park status signal from ParkSWC and forward to CAN
    Rte_Read_RP_ParkStatus_DE_ParkState(&comParkStatus);
    Rte_Write_PP_comParkStatus_DE_ParkState(comParkStatus);
}
#define ComSWC_STOP_SEC_CODE
#include "ComSWC_MemMap.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedFunctions :ComSWC) ENABLED START */
/* Start of user defined functions  - Do not remove this comment */
/* End of user defined functions - Do not remove this comment */
/*PROTECTED REGION END */
