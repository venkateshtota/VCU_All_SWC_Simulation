/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include "BswM.h"

/*
 **********************************************************************************************************************
 * Defines/Macros
 **********************************************************************************************************************
 */

#define BSWM_CFG_VERSION_INFO  {    /*Version details*/  \
                    6U, /*Vendor Id*/  \
                    42U, /*Module Id*/  \
                    8U, /*SW Major version*/  \
                    0U, /*SW Minor version*/  \
                    0U /*SW Patch version*/  \
               }

/*
 **********************************************************************************************************************
 * Variables
 **********************************************************************************************************************
 */

#define BSWM_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED 
#include "BswM_MemMap.h"

/*MR12 RULE 5.5 VIOLATION:identifier name depends on the configured pre-defined variants hence the first 31 significant
 * characters of one macro may match macro name generated for another config set*/
static const BswM_Cfg_ActionListType_tst BswM_Cfg_AL_cast[5];

/* Definition for Rule Structures */

static const BswM_Cfg_RuleType_tst BswM_Cfg_Rule_cast[5] = { { /*   Rule Structure for the configuration container BswM_AR_InitBlockTwo    */
BSWM_FALSE, &BswM_Cfg_LE_BswM_LE_InitBlockTwo, &BswM_Cfg_AL_cast[1], /* trueActionList */
NULL_PTR }, { /*   Rule Structure for the configuration container BswM_AR_PostRun    */
BSWM_FALSE, &BswM_Cfg_LE_BswM_LE_Run, &BswM_Cfg_AL_cast[4], /* trueActionList */
NULL_PTR }, { /*   Rule Structure for the configuration container BswM_AR_ReadAllComplete    */
BSWM_FALSE, &BswM_Cfg_LE_BswM_LE_InitBlockReadAllComplete, &BswM_Cfg_AL_cast[0], /* trueActionList */
NULL_PTR }, { /*   Rule Structure for the configuration container BswM_AR_StartCom    */
BSWM_FALSE, &BswM_Cfg_LE_BswM_LE_StartCom, &BswM_Cfg_AL_cast[2], /* trueActionList */
NULL_PTR }, { /*   Rule Structure for the configuration container BswM_AR_SwcModeRequest    */
BSWM_FALSE, &BswM_Cfg_LE_BswM_LE_SwcModeRequest, &BswM_Cfg_AL_cast[3], /* trueActionList */
NULL_PTR } };

/* ModeRequestPort structure for MRP BswM_MRP_ApplicationRequestPort. Variant : __KW_COMMON
 * - ModeInit Value Present flag (isModeInitValuePresent_b) 
 * - UserId (idUser_u16)
 * - Max requested mode (dataModeMax_u16)
 * - ModeInit Value (dataModeInitValue_u16)
 * - RequestProcessing (dataReqProcessing_en)
 * - Number of associated rules (nrAssociatedRules_u16)
 * - Reference to ListOfRules Array (adrRulesRef_pu16)
 */
#define BSWM_CFG_BSWM_MRP_APPLICATIONREQUESTPORT { \
	    FALSE,        \
	    0,   \
	    3,  \
	    0,         \
	    BSWM_DEFERRED,    \
	    0, \
	    NULL_PTR \
}

/*Array of BswMRule indexes associated with ModeReqPort BswM_MRP_BswM_MDG. Variant :  __KW_COMMON*/
static const uint16 BswM_Cfg_ListOfRules_BswM_MRP_BswM_MDG_cau16[] = { 0, 1, 2,
		3 };

/* ModeRequestPort structure for MRP BswM_MRP_BswM_MDG. Variant : __KW_COMMON
 * - ModeInit Value Present flag (isModeInitValuePresent_b) 
 * - UserId (idUser_u16)
 * - Max requested mode (dataModeMax_u16)
 * - ModeInit Value (dataModeInitValue_u16)
 * - RequestProcessing (dataReqProcessing_en)
 * - Number of associated rules (nrAssociatedRules_u16)
 * - Reference to ListOfRules Array (adrRulesRef_pu16)
 */
#define BSWM_CFG_BSWM_MRP_BSWM_MDG { \
        FALSE,        \
        1,    \
        65535,                \
        0,         \
        BSWM_IMMEDIATE,    \
        4, \
        &BswM_Cfg_ListOfRules_BswM_MRP_BswM_MDG_cau16[0]  \
}

/*Array of BswMRule indexes associated with ModeReqPort BswM_MRP_SwcModeRequest. Variant :  __KW_COMMON*/
static const uint16 BswM_Cfg_ListOfRules_BswM_MRP_SwcModeRequest_cau16[] = { 4 };

/* ModeRequestPort structure for MRP BswM_MRP_SwcModeRequest. Variant : __KW_COMMON
 * - ModeInit Value Present flag (isModeInitValuePresent_b) 
 * - UserId (idUser_u16)
 * - Max requested mode (dataModeMax_u16)
 * - ModeInit Value (dataModeInitValue_u16)
 * - RequestProcessing (dataReqProcessing_en)
 * - Number of associated rules (nrAssociatedRules_u16)
 * - Reference to ListOfRules Array (adrRulesRef_pu16)
 */
#define BSWM_CFG_BSWM_MRP_SWCMODEREQUEST { \
        FALSE,        \
        2,    \
        65535,                \
        0,         \
        BSWM_DEFERRED,    \
        1, \
        &BswM_Cfg_ListOfRules_BswM_MRP_SwcModeRequest_cau16[0]  \
}

/* Array of GenericRequest MRP structs. Variant : __KW_COMMON */
#define BSWM_CFG_GENERICREQ_MRPS {   \
    BSWM_CFG_BSWM_MRP_APPLICATIONREQUESTPORT,      \
    BSWM_CFG_BSWM_MRP_BSWM_MDG,      \
    BSWM_CFG_BSWM_MRP_SWCMODEREQUEST,      \
}

/* ModeRequestPort structure for MRP BswM_MRP_NvmReadAllComplete. Variant : __KW_COMMON
 * - Mode Init Value present flag 
 * - Configured NvM Service
 * - Configured/Default Mode Init Value
 * - RequestProcessing Enum - Immediate/Deferred 
 * - Number of rules referring to this MRP 
 * - Pointer to array containing indexes of associated rules
 */
#define BSWM_CFG_BSWM_MRP_NVMREADALLCOMPLETE { \
    FALSE,        \
    BSWM_NVMREADALL,       \
    0,         \
    BSWM_IMMEDIATE,       \
    0,          \
    NULL_PTR \
}

/* ModeRequestPort structure for MRP BswM_MRP_NvmWriteAllComplete. Variant : __KW_COMMON
 * - Mode Init Value present flag 
 * - Configured NvM Service
 * - Configured/Default Mode Init Value
 * - RequestProcessing Enum - Immediate/Deferred 
 * - Number of rules referring to this MRP 
 * - Pointer to array containing indexes of associated rules
 */
#define BSWM_CFG_BSWM_MRP_NVMWRITEALLCOMPLETE { \
    FALSE,        \
    BSWM_NVMWRITEALL,       \
    0,         \
    BSWM_IMMEDIATE,       \
    0,          \
    NULL_PTR \
}

/* Array of NvM BlockRequest MRP structs. Variant : __KW_COMMON */
#define BSWM_CFG_NVMJOBMODEIND_MRPS {   \
    BSWM_CFG_BSWM_MRP_NVMREADALLCOMPLETE,      \
    BSWM_CFG_BSWM_MRP_NVMWRITEALLCOMPLETE,      \
}

/* BswM_Cfg_MRPType_tst : Array of structures for different MRP types. Variant : __KW_COMMON
 */
#define BSWM_CFG_MODEREQPORT {       \
	BSWM_CFG_GENERICREQ_MRPS,      \
	BSWM_CFG_NVMJOBMODEIND_MRPS,      \
            }

/* ModeArbitration Type structure  
 * - ModeRequestPortType structure (BswM_Cfg_MRPType_tst)
 * - Number of rules configured for the chosen variant 
 * - Pointer to base address of array of rules (BswM_Cfg_RuleType_tst)
 */
#define BSWM_CFG_MODEARBITRATION {      \
        BSWM_CFG_MODEREQPORT,     \
        5, \
        &BswM_Cfg_Rule_cast[0] \
}

/*
 **********************************************************************************************************************
 * Arrays of BswMPduGroupSwitch Group References for the variant  with contents: 
 *   # BswMPduEnableGroupSwitch Reference/References
 *   # BswMPduDisableGroupSwitch Reference/References
 **********************************************************************************************************************
 */

static const Com_IpduGroupIdType BswM_Cfg_AC_BswM_AI_StartPduGroup_All_BswMPduEnableGrpRef_cau16[2] =
		{ ComConf_ComIPduGroup_ComIPduGroup_Rx,
				ComConf_ComIPduGroup_ComIPduGroup_Tx };

static const Com_IpduGroupIdType BswM_Cfg_AC_BswM_AI_StopPduGroup_All_BswMPduDisableGrpRef_cau16[2] =
		{ ComConf_ComIPduGroup_ComIPduGroup_Rx,
				ComConf_ComIPduGroup_ComIPduGroup_Tx };

/*
 **********************************************************************************************************************
 * Array of BswMPduRouterControl Action for the variant  with contents: 
 *   # Reinit 
 *   # No of EnabledPduGroupRef
 *   # No of DisabledPduGroupRef
 *   # Base Addr of EnabledPduGroupRef
 *   # Base Addr of DisabledPduGroupRef
 **********************************************************************************************************************
 */
/*MR12 RULE 5.5 VIOLATION:identifier name depends on the configured pre-defined variants hence the first 31 significant
 * characters of one macro may match macro name generated for another config set*/
static const BswM_Cfg_AC_PduGroupSwitchType_tst BswM_Cfg_AC_BswMPduGroupSwitch_cast[BSWM_NO_OF_AC_IPDUGROUPSWITCH] =
		{ {
		/* BswM_AI_StartPduGroup_All */
		FALSE, 2, 0,

		&BswM_Cfg_AC_BswM_AI_StartPduGroup_All_BswMPduEnableGrpRef_cau16[0],

		NULL_PTR

		}, {
		/* BswM_AI_StopPduGroup_All */
		FALSE, 0, 2,

		NULL_PTR,

		&BswM_Cfg_AC_BswM_AI_StopPduGroup_All_BswMPduDisableGrpRef_cau16[0]

		} };

/*****************************************************************************************
 * Array of ActionListItems for __KW_COMMON with contents:
 * {
 *     AbortOnFailFlag,
 *     ActionListItemType,
 *     PointerToActionListItem
 * }
 *****************************************************************************************/

static const BswM_Cfg_ActionListItemType_tst BswM_Cfg_AL_BswM_AL_BswModules_InitListReadAll_Items_cast[8] =
		{ {
		/* ActionListItemName  :   BswM_ALI_CanInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[1] /* BswM_AI_CanInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_CanIfInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[0] /* BswM_AI_CanIfInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_CanSmInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[2] /* BswM_AI_CanSmInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_PduRInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[13] /* BswM_AI_PduRInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_ComInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[3] /* BswM_AI_ComInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_ComMInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[5] /* BswM_AI_ComMInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_RteTimerStart */
		TRUE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[15] /* BswM_AI_RteTimerStart */
		}, {
		/* ActionListItemName  :   BswM_ALI_BswMRun */
		FALSE, BSWM_ACTION_SCHM_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMSchMSwitch_cast[3] /* BswM_AI_BswMSwitchRun */
		} };

static const BswM_Cfg_ActionListItemType_tst BswM_Cfg_AL_BswM_AL_BswModules_InitListTwo_Items_cast[6] =
		{ {
		/* ActionListItemName  :   BswM_ALI_FlsInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[8] /* BswM_AI_FlsInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_FeeInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[6] /* BswM_AI_FeeInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_FeeRbEndInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[7] /* BswM_AI_FeeRbEndInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_NvmInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[10] /* BswM_AI_NvMInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_BswMStartupTwo */
		FALSE, BSWM_ACTION_SCHM_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMSchMSwitch_cast[4] /* BswM_AI_BswMSwitchStartupTwo */
		}, {
		/* ActionListItemName  :   BswM_ALI_NvMReadAll */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[11] /* BswM_AI_NvMReadAll */
		} };

static const BswM_Cfg_ActionListItemType_tst BswM_Cfg_AL_BswM_AL_FullComm_AllBus_Items_cast[3] =
		{ {
		/* ActionListItemName  :   BswM_ALI_StartPdu */
		FALSE, BSWM_ACTION_PDU_GRP_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMPduGroupSwitch_cast[0] /* BswM_AI_StartPduGroup_All */
		}, {
		/* ActionListItemName  :   BswM_ALI_AllowComm_Can0 */
		FALSE, BSWM_ACTION_COMM_ALLOW_COM,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMComMAllowCom_cast[0] /* BswM_AI_ComMCommAllowed_Can0 */
		}, {
		/* ActionListItemName  :   BswM_ALI_RequestComMode */
		FALSE, BSWM_ACTION_COMM_MODE_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMComMModeSwitch_cast[0] /* BswM_AI_ComMReqFullComm_User0 */
		} };

static const BswM_Cfg_ActionListItemType_tst BswM_Cfg_AL_BswM_AL_Shutdown_Items_cast[4] =
		{ {
		/* ActionListItemName  :   BswM_ALI_RteStop */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[14] /* BswM_AI_RteStop */
		}, {
		/* ActionListItemName  :   BswM_ALI_ComMDeInit */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[4] /* BswM_AI_ComMDeInit */
		}, {
		/* ActionListItemName  :   BswM_ALI_NvMWriteAll */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[12] /* BswM_AI_NvMWriteAll */
		}, {
		/* ActionListItemName  :   BswM_ALI_GoDown */
		FALSE, BSWM_ACTION_USR_CALLOUT,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMUserCallout_cast[9] /* BswM_AI_GoDown */
		} };

static const BswM_Cfg_ActionListItemType_tst BswM_Cfg_AL_BswM_AL_StopComm_AllBus_Items_cast[4] =
		{ {
		/* ActionListItemName  :   BswM_ALI_RequestNoComMode */
		FALSE, BSWM_ACTION_COMM_MODE_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMComMModeSwitch_cast[1] /* BswM_AI_ComMReqNoComm_User0 */
		}, {
		/* ActionListItemName  :   BswM_ALI_DisAllowComm_Can0 */
		FALSE, BSWM_ACTION_COMM_ALLOW_COM,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMComMAllowCom_cast[1] /* BswM_AI_ComMCommNotAllowed_Can0 */
		}, {
		/* ActionListItemName  :   BswM_ALI_StopPdu */
		FALSE, BSWM_ACTION_PDU_GRP_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMPduGroupSwitch_cast[1] /* BswM_AI_StopPduGroup_All */
		}, {
		/* ActionListItemName  :   BswM_ALI_BswMPostRun */
		FALSE, BSWM_ACTION_SCHM_SWITCH,
		/*MR12 DIR 1.1 VIOLATION: BswM_Prv_Evaluate_Action expects a void pointer to actionlistitem which is then typecast back to the corresponding action type*/
		(const void*) &BswM_Cfg_AC_BswMSchMSwitch_cast[1] /* BswM_AI_BswMSwitchPostRun */
		} };

/*****************************************************************************************
 * Array of ActionLists for __KW_COMMON with contents:
 * {
 *     ExecutionType,
 *     NumberOfActionListItems,
 *     BaseAddressOfActionListItemArray,
 *     Unique Number for ActionList
 * }
 ****************************************************************************************/

static const BswM_Cfg_ActionListType_tst BswM_Cfg_AL_cast[5] = { {
/* ActionListName   :   BswM_AL_BswModules_InitListReadAll */
BSWM_TRIGGER, 8, &BswM_Cfg_AL_BswM_AL_BswModules_InitListReadAll_Items_cast[0],
		0 /* Unique Number for ActionList */
}, {
/* ActionListName   :   BswM_AL_BswModules_InitListTwo */
BSWM_CONDITION, 6, &BswM_Cfg_AL_BswM_AL_BswModules_InitListTwo_Items_cast[0], 1 /* Unique Number for ActionList */
}, {
/* ActionListName   :   BswM_AL_FullComm_AllBus */
BSWM_TRIGGER, 3, &BswM_Cfg_AL_BswM_AL_FullComm_AllBus_Items_cast[0], 2 /* Unique Number for ActionList */
}, {
/* ActionListName   :   BswM_AL_Shutdown */
BSWM_TRIGGER, 4, &BswM_Cfg_AL_BswM_AL_Shutdown_Items_cast[0], 3 /* Unique Number for ActionList */
}, {
/* ActionListName   :   BswM_AL_StopComm_AllBus */
BSWM_TRIGGER, 4, &BswM_Cfg_AL_BswM_AL_StopComm_AllBus_Items_cast[0], 4 /* Unique Number for ActionList */
} };

/* PBAction Type structure Variant : __KW_COMMON
 * - Pointer to base address of array of IPduGroupSwitchType ActionType structure (BswM_Cfg_AC_PduGroupSwitchType_tst)
 */
#define BSWM_CFG_PBACTION                {      \
                &BswM_Cfg_AC_BswMPduGroupSwitch_cast[0],     \
}

/* ModeControl Type structure  
 * - ActionType structure (BswM_Cfg_PBActionType_tst)
 * - Pointer to base address of array of actionlists (BswM_Cfg_ActionListType_tst) Currently NULL_PTR
 */
#define BSWM_CFG_MODECONTROL {      \
        BSWM_CFG_PBACTION,     \
        &BswM_Cfg_AL_cast[0]   \
}

/* BswM_ConfigType  :
 * - ModeArbitration structure (BswM_Cfg_ModeArbitrationType_tst)
 * - ModeControl structure (BswM_Cfg_ModeControlType_tst)
 * - Version info to compare during module initialization
 */
const BswM_ConfigType BswM_Config = {
BSWM_CFG_MODEARBITRATION,
BSWM_CFG_MODECONTROL,
BSWM_CFG_VERSION_INFO };

#define BSWM_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED 
#include "BswM_MemMap.h"

#define BSWM_START_SEC_CONFIG_DATA_POSTBUILD_32
#include "BswM_MemMap.h"

const BswM_ConfigType *const BswM_Configurations_capcst[BSWM_NO_OF_CONFIGSETS] =
		{ &BswM_Config };

#define BSWM_STOP_SEC_CONFIG_DATA_POSTBUILD_32
#include "BswM_MemMap.h"
/**********************************************************************************************************************
 *                                                                                                      
 **********************************************************************************************************************/
