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
 * Component: /MemSWC/MemSWC
 * Runnable : All Runnables in SwComponent
 *****************************************************************************
 * Tool Version: ISOLAR-A/B 9.2
 * Author: MIS1MI
 * Date : Wed Feb 16 15:01:36 2022
 ****************************************************************************/

#include "Rte_MemSWC.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedIncludes :RE_MemSWC_StoreData) ENABLED START */
/* Start of user defined includes  - Do not remove this comment */
/* End of user defined includes - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedConstants :RE_MemSWC_StoreData) ENABLED START */
/* Start of user defined constant definitions - Do not remove this comment */
/* End of user defined constant definitions - Do not remove this comment */
/*PROTECTED REGION END */

/*PROTECTED REGION ID(FileHeaderUserDefinedVariables :RE_MemSWC_StoreData) ENABLED START */
/* Start of user variable defintions - Do not remove this comment  */
/* End of user variable defintions - Do not remove this comment  */
/*PROTECTED REGION END */
#define MemSWC_START_SEC_CODE
#include "MemSWC_MemMap.h"
FUNC (void, MemSWC_CODE) RE_MemSWC_StoreData/* return value & FctID */
(
		void
)
{
    boolean parkBrakeStatus = FALSE;
    boolean *parkBrakePIM = Rte_Pim_ParkStatus();
    Rte_Read_RP_ParkStatus_DE_ParkState(&parkBrakeStatus);

    if (parkBrakeStatus != *parkBrakePIM)
    {
        *parkBrakePIM = parkBrakeStatus;
        Rte_Call_RP_NvM_ParkStatus_SetRamBlockStatus(TRUE);
    }
}
#define MemSWC_STOP_SEC_CODE
#include "MemSWC_MemMap.h"

/*PROTECTED REGION ID(FileHeaderUserDefinedFunctions :MemSWC) ENABLED START */
/* Start of user defined functions  - Do not remove this comment */
/* End of user defined functions - Do not remove this comment */
/*PROTECTED REGION END */
