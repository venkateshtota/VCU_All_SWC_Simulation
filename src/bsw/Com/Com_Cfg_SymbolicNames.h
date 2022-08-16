


 
/*<VersionHead>
 * This Configuration File is generated using versions (automatically filled in) as listed below.
 *
 * $Generator__: Com / AR42.10.0.0                Module Package Version
 * $Editor_____: ISOLAR-A/B 9.2_9.2.0                Tool Version
 * $Model______: 2.3.0.4                ECU Parameter Definition Version
 *
 
 </VersionHead>*/

#ifndef COM_CFG_SYMBOLICNAMES_H
#define COM_CFG_SYMBOLICNAMES_H


/* if COM_DontUseExternalSymbolicNames is defined while including this file, then the below symbolic names will not
   be visible in the including file */
#ifndef     COM_DontUseExternalSymbolicNames

/* ------------------------------------------------------------------------ */
/* Begin section for IPdu symbolic names */

/* Tx IPdus */
        #define ComConf_ComIPdu_IP_ParkStatus_Can_Network_Channel_CAN_Tx 0
    /* Rx IPdus */
        #define ComConf_ComIPdu_IP_ParkControl_Can_Network_Channel_CAN_Rx 0

/* ------------------------------------------------------------------------ */
/* End section */

/* ------------------------------------------------------------------------ */
/* Begin section for Signal symbolic names */



/* Signal IDs*/
/* Tx Signal ID*/
    #define ComConf_ComSignal_S_ParkStatus_bool_Can_Network_Channel_CAN_Tx 0

/* Rx Signal ID*/
    #define ComConf_ComSignal_S_ParkControl_bool_Can_Network_Channel_CAN_Rx 0



/* ------------------------------------------------------------------------ */
/* End section */

/* ------------------------------------------------------------------------ */
/* Begin section for Signal group symbolic names */



/* Tx SignalGroup ID*/

/* Rx SignalGroup ID*/





/* ------------------------------------------------------------------------ */
/* End section */

/* ------------------------------------------------------------------------ */
/* Begin section for Group signal symbolic names */



/* Tx GroupSignal ID*/

/* Rx GroupSignal ID*/




/* ------------------------------------------------------------------------ */
/* End section */

/* ------------------------------------------------------------------------ */
/* Begin section for IPdu group symbolic names */


/* IPduGroup ID*/
    #define ComConf_ComIPduGroup_ComIPduGroup_Rx 0
    #define ComConf_ComIPduGroup_ComIPduGroup_Tx 1
/* ------------------------------------------------------------------------ */
/* End section */

#endif /* #ifndef     COM_DontUseExternalSymbolicNames */


#endif /* COM_CFG_SYMBOLICNAMES_H */


