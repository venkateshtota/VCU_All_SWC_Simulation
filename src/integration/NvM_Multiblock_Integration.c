/* *****************************************************************************
 * BEGIN: Banner
 *-----------------------------------------------------------------------------
 *                                 ETAS GmbH
 *                      D-70469 Stuttgart, Borsigstr. 14
 *-----------------------------------------------------------------------------
 * Name: NvM_Multiblock_Integration.c
 * Description:
 * Version: 1.0
 *-----------------------------------------------------------------------------
 * END: Banner
 ******************************************************************************

 * Project : ParkBrake
 *****************************************************************************
 * Author: Andrea Misuraca
 * Date : Mon Nov 29 10:59:10 2021
 ****************************************************************************/

#include "MemIf.h"
#include "NvM.h"

void readAllMemory(void)
{
    NvM_Rb_StatusType status_NvM;
    MemIf_StatusType stMemIf_en;

    NvM_ReadAll();

#ifdef _GNU_C_TRICORE_
    /* disable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(0);
#endif
#ifdef  _TASKING_C_TRICORE_
    /* disable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(0);
#endif

    do
    {
        NvM_MainFunction();
        MemIf_Rb_MainFunction();

        NvM_Rb_GetStatus(&status_NvM);
        stMemIf_en = MemIf_Rb_GetStatus();
    }
    while ( (status_NvM == NVM_RB_STATUS_BUSY ) || (stMemIf_en == MEMIF_BUSY));
#ifdef _GNU_C_TRICORE_
    /* enable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(1);
#endif
#ifdef  _TASKING_C_TRICORE_
    /* enable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(1);
#endif
}


void writeAllMemory ( void )
{
    NvM_Rb_StatusType status_NvM;
    MemIf_StatusType stMemIf_en;

    NvM_WriteAll();

#ifdef _GNU_C_TRICORE_
    /* disable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(0);
#endif
#ifdef _TASKING_C_TRICORE_
    /* disable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(0);
#endif

    do
    {
        NvM_MainFunction();
        MemIf_Rb_MainFunction();

        NvM_Rb_GetStatus(&status_NvM);
        stMemIf_en = MemIf_Rb_GetStatus();
    }
    while ( (status_NvM == NVM_RB_STATUS_BUSY ) || (stMemIf_en == MEMIF_BUSY));

    /**
     * In case of page swap is required a second loop to complete the
     * write of the updated block after the page swap
     */
    NvM_WriteAll();

    do
    {
        NvM_MainFunction();
        MemIf_Rb_MainFunction();

        NvM_Rb_GetStatus(&status_NvM);
        stMemIf_en = MemIf_Rb_GetStatus();
    }
    while ( (status_NvM == NVM_RB_STATUS_BUSY ) || (stMemIf_en == MEMIF_BUSY));

#ifdef _GNU_C_TRICORE_
    /* enable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(1);
#endif
#ifdef _TASKING_C_TRICORE_
    /* enable detection and report of timeout for FLS */
    Fls_ControlTimeoutDet(1);
#endif
}
