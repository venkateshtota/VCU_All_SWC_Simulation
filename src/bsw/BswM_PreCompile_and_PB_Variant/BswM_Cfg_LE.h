#ifndef BSWM_CFG_LE_H
#define BSWM_CFG_LE_H

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include "Std_Types.h"

#include "Mcu.h"

#include "CanIf.h"

#include "Can.h"

#include "Rte_Main.h"

#include "CanSM.h"

#include "NvM_Multiblock_Integration.h"

/*
 **********************************************************************************************************************
 * Defines/Macros
 **********************************************************************************************************************
 */

/******************************     BswM Logical Expression    *****************************************/

#define BSWMLOGEXP_BSWM_LE_INITBLOCKREADALLCOMPLETE  \
                    ( RTE_MODE_MDG_ECUM_STATE_ECUM_STATE_STARTUP_TWO  ==  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].dataMode_u16 )

#define BSWMLOGEXP_BSWM_LE_INITBLOCKTWO  \
                    ( RTE_MODE_MDG_ECUM_STATE_ECUM_STATE_STARTUP_ONE  ==  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].dataMode_u16 )

#define BSWMLOGEXP_BSWM_LE_RUN  \
                    ( RTE_MODE_MDG_ECUM_STATE_ECUM_STATE_APP_RUN  ==  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].dataMode_u16 )

#define BSWMLOGEXP_BSWM_LE_STARTCOM  \
                    ( RTE_MODE_MDG_ECUM_STATE_ECUM_STATE_RUN  ==  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].dataMode_u16 )

#define BSWMLOGEXP_BSWM_LE_SWCMODEREQUEST  \
                    ( RTE_MODE_MDG_ShutDown_SHUT_DOWN  ==  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_SWCMODEREQUEST].dataMode_u16 )

/******************   Macros for checking whether the ModeValues are defined   ******************************/

#define BSWMMODEVALUE_BSWM_LE_INITBLOCKREADALLCOMPLETE  \
        ( FALSE  !=  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].isValidModePresent_b )

#define BSWMMODEVALUE_BSWM_LE_INITBLOCKTWO  \
        ( FALSE  !=  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].isValidModePresent_b )

#define BSWMMODEVALUE_BSWM_LE_RUN  \
        ( FALSE  !=  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].isValidModePresent_b )

#define BSWMMODEVALUE_BSWM_LE_STARTCOM  \
        ( FALSE  !=  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_BSWM_MDG].isValidModePresent_b )

#define BSWMMODEVALUE_BSWM_LE_SWCMODEREQUEST  \
        ( FALSE  !=  BswM_Cfg_GenericReqModeInfo_ast[BSWM_IDX_BSWM_MRP_SWCMODEREQUEST].isValidModePresent_b )

/*
 **********************************************************************************************************************
 * Extern declarations
 **********************************************************************************************************************
 */

/********************************  LogicalExpressionEvaluateFunctions  ***************************************/
#define BSWM_START_SEC_CODE
#include "BswM_MemMap.h"

extern void BswM_Cfg_LE_BswM_LE_InitBlockReadAllComplete(
		boolean *isValidMode_pb, boolean *hasLogExpRes_pb);
extern void BswM_Cfg_LE_BswM_LE_InitBlockTwo(boolean *isValidMode_pb,
		boolean *hasLogExpRes_pb);
extern void BswM_Cfg_LE_BswM_LE_Run(boolean *isValidMode_pb,
		boolean *hasLogExpRes_pb);
extern void BswM_Cfg_LE_BswM_LE_StartCom(boolean *isValidMode_pb,
		boolean *hasLogExpRes_pb);
extern void BswM_Cfg_LE_BswM_LE_SwcModeRequest(boolean *isValidMode_pb,
		boolean *hasLogExpRes_pb);

#define BSWM_STOP_SEC_CODE
#include "BswM_MemMap.h"

#endif  /* BSWM_CFG_LE_H */
/**********************************************************************************************************************
 * End of header file
 **********************************************************************************************************************/
