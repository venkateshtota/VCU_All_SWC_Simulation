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
 * Component: /ParkSWC/ParkSWC
 * Runnable : All Runnables in SwComponent
 *****************************************************************************
 * Tool Version: ISOLAR-A/B 9.2
 * Author: MIS1MI
 * Date : Wed Feb 16 15:01:55 2022
 ****************************************************************************/

#include "Rte_ParkSWC.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedIncludes :RE_ParkSWC_main) ENABLED START */
/* Start of user defined includes  - Do not remove this comment */
/* End of user defined includes - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedConstants :RE_ParkSWC_main) ENABLED START */
/* Start of user defined constant definitions - Do not remove this comment */
/* End of user defined constant definitions - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedVariables :RE_ParkSWC_main) ENABLED START */
/* Start of user variable defintions - Do not remove this comment  */
/* End of user variable defintions - Do not remove this comment  */
/*PROTECTED REGION END */
#define ParkSWC_START_SEC_CODE
#include "ParkSWC_MemMap.h"
FUNC (void, ParkSWC_CODE) RE_ParkSWC_main/* return value & FctID */
(
		void
)
{
    boolean parkControl = FALSE;
    boolean parkStatus = FALSE;

    // Read park control signal from ComSWC
   // Rte_Read_RP_ParkControl_DE_ParkState(&parkControl);

    // Trigger park brake DIO
    parkStatus = parkControl;

    // Forward park status signal to other SWCs
    Rte_Write_ParkSWC_PP_ParkStatus_DE_ParkState(parkStatus);
}
#define ParkSWC_STOP_SEC_CODE
#include "ParkSWC_MemMap.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedFunctions :ParkSWC) ENABLED START */
/* Start of user defined functions  - Do not remove this comment */
/* End of user defined functions - Do not remove this comment */
/*PROTECTED REGION END */
