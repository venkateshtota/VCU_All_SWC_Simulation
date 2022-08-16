

 
/*<VersionHead>
 * This Configuration File is generated using versions (automatically filled in) as listed below.
 *
 * $Generator__: Com / AR42.10.0.0                Module Package Version
 * $Editor_____: ISOLAR-A/B 9.2_9.2.0                Tool Version
 * $Model______: 2.3.0.4                ECU Parameter Definition Version
 *
 
 </VersionHead>*/


/*
 * If COM_DontUseExternalSymbolicNames is defined before including Com_Cfg.h file, then external symbolic names will
 * not be visible.
 * Com_PBcfg.c file should not use external symbolic names.
 * This mechanism is used to prevent the accidental usage of external symbolic names in this file
 * This file should use only internal symbolic name defined in  Com_PBcfg_InternalSymbolicNames.h
 */
#define COM_DontUseExternalSymbolicNames
#include "Com_Prv.h"
#include "Com_Cbk.h"
#include "PduR_Com.h"
#include "Com_PBcfg_Common.h"
#include "Com_PBcfg_Variant.h"

/*
 * The file Com_PBcfg_InternalSymbolicNames.h defines internal symbolic names
 * These names should be used in the tables generated in this file
 * Regular symbolic names should not be used here
 */
#define COM_PBCFG_INCLUDE_INT_SYM_NAMES
#include "Com_PBcfg_InternalSymbolicNames.h"



/* START: Tx Signal Details  */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_Prv_xTxSigCfg_tst Com_Prv_xTxSigCfg_acst[COM_NUM_TX_SIGNALS] =
{
        
    {  /* S_ParkStatus_bool_Can_Network_Channel_CAN_Tx */
#ifdef COM_TxInvalid
        0x0uL,             /* DataInvalid_Val*/
#endif
#ifndef COM_INITVALOPTIMIZATION
        0x0uL,             /* Init_Val*/
#endif

        /*
        {
            TransProp       : 3;    = TRIGGERED
            FilterAlgorithm : 4;    = ALWAYS
            DataInvalidType : 1;    = false
            TimeOutEnabled  : 1;    = false
        }Com_TxSigPropType;    */
        0x4,                                               /* Transmission Fields */

#ifdef COM_TxSigUpdateBit
        COM_UPDATE_MAX,                                    /*Update bit Position*/
#endif /* #ifdef COM_TxSigUpdateBit */

        0,                                                /*BitPosition*/

        1,/*BitSize*/

#ifdef COM_TxFilters
        COM_MAX_U8_VALUE,                                              /*Filter_Index*/
#endif

#ifdef COM_EffectiveSigTOC
        COM_MAX_U8_VALUE,                                              /*OldVal_Index*/
#endif

        (Com_IpduId_tuo)ComIPdu_Internal_IP_ParkStatus_Can_Network_Channel_CAN_Tx,             /*Ipdu Reference*/
#ifdef COM_INITVALOPTIMIZATION
        0u,                                                               /* Init_Val_Index*/
#endif
        /*
        {
            Type:5;       = UINT8
            Endianess:1;  = LITTLE_ENDIAN
            UpdBitConf:1; = false
            Not_Used:1;
        }Com_GeneralType;*/
        0x0                                               /*General*/

    }

};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: Tx Signal Details  */

/* START: Rx Signal Details  */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_Prv_xRxSigCfg_tst Com_Prv_xRxSigCfg_acst[COM_NUM_RX_SIGNALS] =
{    
        
    {  /* S_ParkControl_bool_Can_Network_Channel_CAN_Rx */
#ifdef COM_RxSignalNotify
        /* Notification Signal part */
        &Rte_COMCbk_S_ParkControl_bool_Can_Network_Channel_CAN_Rx,
#endif
#ifdef COM_RxSigInvalidNotify
        /* Com Invalid Notification */
        
        NULL_PTR,
#endif
#ifdef COM_RxSigInvalid
       0x0uL,              /* DataInvalid_Val */
#endif
#ifndef COM_INITVALOPTIMIZATION
       0x0uL,              /* Init_Val */
#endif

#ifdef COM_RxSigUpdateBit
       COM_UPDATE_MAX,                    /*Update bit Position*/
#endif
       0,                         /*BitPosition*/
       0,                /* Signal Buffer Index */
       
      1, /*BitSize*/

#ifdef COM_RxFilters
        COM_MAX_U8_VALUE,                           /*Filter_Index*/
#endif

       (Com_IpduId_tuo)ComIPdu_Internal_IP_ParkControl_Can_Network_Channel_CAN_Rx,                       /*Ipdu Reference*/
#ifdef COM_INITVALOPTIMIZATION
        0u,                                                             /* Init_Val_Index*/
#endif
        /*
        {
            Type:5;        = UINT8
            Endianess:1;   = LITTLE_ENDIAN
            UpdBitConf:1;  = false
            Not_Used:1;
        }Com_GeneralType; */
        0x0,       /*General*/

        /*
        {
            DataInvalidType:2;   = NONE
            FilterAlgorithm:4;   = COM_NOTCONFIGURED
            DataTimeoutType:1;   = NONE
            IsGwSignal:1         = false
        } Com_RxSigPropType; */
        0x28         /* Reception Fields */
    }
    

};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: Rx Signal Details  */











/* START: TMS Details  */


/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* IP_ParkStatus_Can_Network_Channel_CAN_Tx has a TMS switch */
static const Com_TransModeInfo_tst Com_IP_ParkStatus_Can_Network_Channel_CAN_Tx_TransModeInfo_acst[] =
{
    /* True Mode configuration */
    {
        10, /* TimePeriod */
        
        1, /* TimeOffset */
        
        0, /* RepetitionPeriod */
        
        0,  /* NumRepetitions */
#ifdef COM_MIXEDPHASESHIFT
        COM_TXMODE_PERIODIC, /* Mode */
        COM_FALSE    /* MixedPhaseShift status */
#else
        COM_TXMODE_PERIODIC /* Mode */
#endif /* #ifdef COM_MIXEDPHASESHIFT */
    }
,
    /* False Mode configuration */
    {
        10, /* TimePeriod */
        
        1, /* TimeOffset */
        
        0, /* RepetitionPeriod */
        
        0,  /* NumRepetitions */

#ifdef COM_MIXEDPHASESHIFT
        COM_TXMODE_PERIODIC, /* Mode */
        COM_FALSE    /* MixedPhaseShift status */
#else
        COM_TXMODE_PERIODIC /* Mode */
#endif /* #ifdef COM_MIXEDPHASESHIFT */

    }
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: TMS Details  */






/* START: Tx IPDU Details  */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_Prv_xTxIpduInfoCfg_tst Com_Prv_xTxIpduCfg_acst[COM_NUM_TX_IPDU] =
{
    {   /*Ipdu: IP_ParkStatus_Can_Network_Channel_CAN_Tx*/

        Com_dIP_ParkStatus_Can_Network_Channel_CAN_TxByte,              /*Pointer to the Ipdu Buffer*/

        Com_IP_ParkStatus_Can_Network_Channel_CAN_Tx_TransModeInfo_acst,
        

        #ifdef COM_TxIPduCallOuts
        /* Ipdu Callout Function*/
        NULL_PTR,
        #endif
        #ifdef COM_TxIPduNotification
        /* Ipdu Notification Function*/

        NULL_PTR,
        #endif

        #ifdef COM_ERRORNOTIFICATION
        /* Error Notification part */

        NULL_PTR,
        #endif

        #ifdef COM_TxIPduTimeOutNotify
        /* Timeout Notification part*/

        NULL_PTR,
        #endif


        #ifdef COM_METADATA_SUPPORT
        NULL_PTR,               /* Pointer to the MetaData Ipdu Buffer */
        #endif

        1                                      /*Size in Bytes*/,

        #ifdef COM_TxIPduTimeOut
        10,               /*Timeout Fact*/
        #endif
        0, /*MinDelay Time factor*/

        1,                    /*No Of Signals present in the IPDU*/
        #ifdef COM_TX_SIGNALGROUP

        0,               /*No of Signal Groups present in the IPDU*/
        #endif

        PduRConf_PduRSrcPdu_ParkStatus_Com2PduR_Can_Network_Channel_CAN,              /* PduR Id */


        (Com_TxIntSignalId_tuo)ComSignal_Internal_S_ParkStatus_bool_Can_Network_Channel_CAN_Tx,     /*Index to First Signal within this Ipdu*/
        #ifdef COM_TX_SIGNALGROUP

        0,                            /*This IPDU does not contain any Signal Groups*/
        #endif

        /*
        {
            Signal_Processing:1;          = IMMEDIATE
            TMSCalclation:2;              = MODE_VALID
            NoneModeTimeOut:1;            = COM_FALSE
            ClearUpdBit:2                 = CLEAR_UPDATEBIT_NOT_APPLICABLE
            FilterEvalReq:1               = true
            IsDynPdu:1;                   = false
            IsGwDestPdu:1;                = false
            IsCalloutFrmTrigTrans:1;      = false
            isLargeDataPdu:1;             = false
            isCancelTransmitSupported:1;  = false
            ipduPartOfIpduGrp:1;          = true
            defaultTMSStatus:1;           = false
            Is_MetaDataPdu:1;             = false
            Not_Used:1;
        }Com_TxIpduFlagType;
        */
        0x1040,  /*Transmission Type*/


#ifdef COM_TX_IPDUCOUNTER
        COM_TXIPDU_CNTR_INV_IDX,      /* Index to TxIPduCounter */
#endif

        /* Com_MainFunctionTx() */
        ComMainFunction_Internal_MainFunctionTx,

        0xFF               /*Padding Byte*/

    }
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: Tx IPDU Details  */

/* START : Time out information structure for signals with update-bits */
#ifdef COM_RxSigUpdateTimeout
#endif /* #ifdef COM_RxSigUpdateTimeout */
/* END : Time out information structure for signals with update-bits */

/* START : Time out information structure for signal groups with update-bits */
#ifdef COM_RxSigGrpUpdateTimeout
#endif /* #ifdef COM_RxSigGrpUpdateTimeout */
/* END : Time out information structure for signal groups with update-bits */



/* START: Rx IPDU Details  */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


const Com_Prv_xRxIpduInfoCfg_tst Com_Prv_xRxIpduCfg_acst[COM_NUM_RX_IPDU] =
{
    {   /*Ipdu: IP_ParkControl_Can_Network_Channel_CAN_Rx*/
        

        Com_dIP_ParkControl_Can_Network_Channel_CAN_RxByte,              /*Pointer to the Local Ipdu Buffer*/
        
        #ifdef COM_RxSigUpdateTimeout

        NULL_PTR,                       /* Pointer to timeout information structure for signals with update-bits, within the IPdu */
        #endif /* #ifdef COM_RxSigUpdateTimeout */
        #ifdef COM_RxSigGrpUpdateTimeout

        NULL_PTR,                       /* Pointer to timeout information structure for signal groups with update-bits, within the IPdu */
        #endif /* #ifdef COM_RxSigGrpUpdateTimeout */

        #ifdef COM_RxIPduCallOuts
        /* Ipdu Callout */

        NULL_PTR,
        #endif

        #ifdef COM_RxIPduTimeoutNotify
        /* Timeout Notification part*/

        NULL_PTR,
        #endif /* COM_RxIPduTimeoutNotify */

        #ifdef COM_RxIPduNotification
        /* Ipdu Notification Function*/

        NULL_PTR,  /* Rx IPdu notification callback */
        #endif

        #ifdef COM_METADATA_SUPPORT
        NULL_PTR,               /* Pointer to the MetaData Rx Ipdu Buffer */
        #endif

        1                                  /*Size in Bytes*/,
        #ifdef COM_RxIPduTimeout

        0,        /* First time out value after IPDU group start */

        0,              /* Support Rx IPDU Timeout */
        #endif /* #ifdef COM_RxIPduTimeout */

        1,                /*No Of Signals present in the IPDU*/

        #ifdef COM_RX_SIGNALGROUP

        0,           /*No of Signal Groups present in the IPDU*/
        #endif

        (Com_RxIntSignalId_tuo)ComSignal_Internal_S_ParkControl_bool_Can_Network_Channel_CAN_Rx,   /*Index to First Signal within this Ipdu*/
         #ifdef COM_RX_SIGNALGROUP
        0,                            /*This IPDU does not contain any Signal Groups*/
        #endif
#ifdef COM_SIGNALGATEWAY
        0,       /* Number of signals with gateway */
#endif
#ifdef COM_SIGNALGROUPGATEWAY
        0,   /* Number of signal groups with gateway */
#endif

#ifdef COM_RX_IPDUCOUNTER
        COM_RXIPDU_CNTR_INV_IDX,      /* Index to RxIPduCounter */
#endif

        /* Com_MainFunctionRx() */
        ComMainFunction_Internal_MainFunctionRx,

        /*
        {
            Signal_Processing:1;  = IMMEDIATE
            Notify_Cbk:1;         = true
            IsGwIPdu:1;           = false
            ipduPartOfIpduGrp:1;  = true
            IS_TP_TYPE:1;         = false
            TP_INV_CFG:1;         = false
            Is_MetaDataPdu:1;     = false
            Not_Used:1;
        } Com_RxIpduFlagType;
        */
        0xA                 /* Reception Type */


    }
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: Rx IPDU Details  */



/* START: IPDU Group Details  */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_Prv_xIpduGrpInfoCfg_tst Com_Prv_xIpduGrpCfg_acst[2] =
{
    /* "Index of First IPdu"               "No of Rx-Ipdus" */

    /* ComIPduGroup_Rx */
    { 0, 1 },
    /* ComIPduGroup_Tx */
    { 1, 0 }

};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

/* END: IPDU Group Details  */

/* Reference to Ipdus belonging to the Ipdu Groups */

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


const Com_IpduId_tuo Com_Prv_xIPduGrp_IpduRefCfg_acuo[2] =
{

    /* ComIPduGroup_Rx */

    ComIPdu_Internal_IP_ParkControl_Can_Network_Channel_CAN_Rx,
    /* ComIPduGroup_Tx */

    (COM_NUM_RX_IPDU + (Com_IpduId_tuo)ComIPdu_Internal_IP_ParkStatus_Can_Network_Channel_CAN_Tx)
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"








#ifdef COM_F_ONEEVERYN

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
const Com_OneEveryN_tst Com_OneEveryN_Const_acst[1] =
{
    /* Period   Offset  Occurence*/


    {    1,    5, 1    }    /*  DummyForMisra    */
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#endif /* #ifdef COM_F_ONEEVERYN */


#if defined (COM_F_MASKEDNEWEQUALSX ) || defined(COM_F_MASKEDNEWDIFFERSX)

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_MaskX_tst Com_MaskX_acst[1] =
{
    /*Mask       X*/



    {    1,    5    }    /*  DummyForMisra    */
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#endif /* #if defined (COM_F_MASKEDNEWEQUALSX ) || defined(COM_F_MASKEDNEWDIFFERSX) */

#ifdef COM_F_MASKEDNEWDIFFERSOLD

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_32
#include "Com_MemMap.h"

const uint32 Com_Mask_acu32[1] =
{
    /*Mask*/
    1    /* DummyForMisra */
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_32
#include "Com_MemMap.h"

#endif /* #ifdef COM_F_MASKEDNEWDIFFERSOLD */

#if defined (COM_F_NEWISWITHIN_POS) || defined(COM_F_NEWISOUTSIDE_POS)

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_POSMinMax_tst Com_POSMinMax_acst[1]=
{
    /*  Min      Max */





    {    1,    5    }    /*  DummyForMisra    */


};


/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#endif /* #if defined (COM_F_NEWISWITHIN_POS) || defined(COM_F_NEWISOUTSIDE_POS) */

#if defined (COM_F_NEWISWITHIN_NEG) || defined(COM_F_NEWISOUTSIDE_NEG)

/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_NEGMinMax_tst Com_NEGMinMax_acst[1] =
{
    /*  Min      Max */


    {    1,    5    }    /*  DummyForMisra    */
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#endif /* #if defined (COM_F_NEWISWITHIN_NEG) || defined(COM_F_NEWISOUTSIDE_NEG) */


/* Begin section for constants */
#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

const Com_MainFunctionCfgType_tst Com_MainFunctionCfg_acst[ COM_NUM_OF_MAINFUNCTION ] =
{
    {
        /* Com_MainFunctionRx() - cylce time Rx: 0.01 s */
        0u,  /* Start RxIPdu-Id */
        1u,  /* Num of RxIpdus */
        10u /* TimeBase in ms */
    }
    ,{
        /* Com_MainFunctionTx() - cylce time Tx: 0.01 s */
        0u,  /* Start TxIPdu-Id */
        1u,  /* Num of TxIpdus */
        10u /* TimeBase in ms */
    }
};

/* End section for constants */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"





