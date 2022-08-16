


 
/*<VersionHead>
 * This Configuration File is generated using versions (automatically filled in) as listed below.
 *
 * $Generator__: Com / AR42.10.0.0                Module Package Version
 * $Editor_____: ISOLAR-A/B 9.2_9.2.0                Tool Version
 * $Model______: 2.3.0.4                ECU Parameter Definition Version
 *
 
 </VersionHead>*/

#ifndef COM_CBK_H
#define COM_CBK_H

/************* Com Notification in Tx side ************************/

/* Start: ComNotification for Signals */


/* End: ComNotification for Signals */

/* Start: ComNotification for Signals Groups */


/* End: ComNotification for Signals Groups */

/* Start : IPDU notification for TX IPDUs */


/* End : IPDU notification for TX IPDUs */

/******************************************************************/

/************* Com Notification in Rx side ************************/

/* Start: ComNotification for Signals */

#define COM_START_SEC_CODE
#include "Com_MemMap.h"
void Rte_COMCbk_S_ParkControl_bool_Can_Network_Channel_CAN_Rx(void);
#define COM_STOP_SEC_CODE
#include "Com_MemMap.h"


/* End: ComNotification for Signals */

/* Start: ComNotification for Signals Groups */


/* End: ComNotification for Signals Groups */

/* Start: ComNotification for Rx IPdus */

/* End: ComNotification for Rx IPdus */


/******************************************************************/

/************* Com Error Notification in Tx side ************************/

/* Start: ComErrorNotification for Tx-Signals */


/* End: ComErrorNotification for Tx-Signals */

/* Start: ComErrorNotification for Tx-Signals Groups */


/* End: ComErrorNotification for Tx-Signals Groups */

/******************************************************************/

/************* Com Timeout Notification in Tx side ************************/

/* Start: ComTimeoutNotification for Signals */


/* End: ComTimeoutNotification for Signals */

/* Start: ComTimeoutNotification for Signals Groups */


/* End: ComTimeoutNotification for Signals Groups */

/* Start: ComTimeoutNotification For Ipdu's */

/* End: ComTimeoutNotification for Ipdu's */

/******************************************************************/

/************* Timeout Notification in Rx side ************************/

/* Start: ComTimeoutNotification for Signals */

#define COM_START_SEC_CODE
#include "Com_MemMap.h"
void Rte_COMCbkTOut_S_ParkControl_bool_Can_Network_Channel_CAN_Rx(void);
#define COM_STOP_SEC_CODE
#include "Com_MemMap.h"

/* End: ComTimeoutNotification for Signals */

/* Start: ComTimeoutNotification for Signals Groups */

/* End: ComTimeoutNotification for Signals Groups */

/* Start: ComTimeoutNotification For Ipdu's */

/* End: ComTimeoutNotification For Ipdu's */

/******************************************************************/

/************* Com Invalid Notification for Rx************************/

/* Start: ComInvalidNotification for Signals */

/* End: ComInvalidNotification for Signals */

/* Start: ComInvalidNotification for Signals Groups */

/* End: ComInvalidNotification for Signals Groups */

/******************************************************************/

/************* Com Ipdu Callouts ************************/





/******************************************************************/

/* Start: ComIPduCounterErrorNotification */



/* End: ComIPduCounterErrorNotification */


#endif /* COM_CBK_H */


