/* [$CAN 389]*/
/*******************************************************************************
 * Autogenerated by MCALgen for CAN V1.0.54.30643: Can_Cfg.h
 *******************************************************************************/
#ifndef CAN_CFG_H_
#define CAN_CFG_H_

#define CAN_DEFAULT_CONFIG ((const Can_ConfigType*) 0)

#define CanConf_CanController_Can_Network_CANNODE_0 (0)
#define CanConf_CanHardwareObject_Can_Network_CANNODE_0_Rx_Std_MailBox_1 (0)
#define CanConf_CanHardwareObject_Can_Network_CANNODE_0_Tx_Std_MailBox_1 (1)
#define CAN_WAKEUP_SUPPORT STD_OFF
 // AR version is 4.1.1 onwards
#define CAN_CHECKWAKEUP_API STD_OFF /* [$CAN 1135] */
#define CAN_PUBLIC_ICOM_SUPPORT  STD_OFF /* [$CAN 1154] */
#define CAN_CHANGE_BAUDRATE_API       STD_OFF /* [$CAN 9436] [$CAN 1060] [$CAN  1221] */
#define CAN_DEV_ERROR_DETECT          STD_OFF /* [$CAN 964] [$CAN 1061] [$CAN 82]*/
#define CAN_HW_TRANSMIT_CANCELLATION  STD_OFF /* [$CAN 969] [$CAN 1062] [$CAN 278]*/
#define CAN_IDENTICAL_ID_CANCELLATION STD_OFF /* [$CAN 9378] [$CAN 1063] [$CAN 432]*/
#define CAN_MULTIPLEXED_TRANSMISSION  STD_OFF /* [$CAN 995] [$CAN 1066]*/
#define CAN_VERSION_INFO_API          STD_OFF /* [$CAN 9106] [$CAN 1068] */

/* [$CAN 443] */


extern Can_ConfigType Can_ConfigData;

#endif /* CAN_CFG_H_ */



