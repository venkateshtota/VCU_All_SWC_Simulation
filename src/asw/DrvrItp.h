/*
 * File: DrvrItp.h
 *
 * Code generated for Simulink model 'DrvrItp'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Tue Jun  7 13:40:55 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DrvrItp_h_
#define RTW_HEADER_DrvrItp_h_
#ifndef DrvrItp_COMMON_INCLUDES_
#define DrvrItp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DrvrItp.h"
#endif                                 /* DrvrItp_COMMON_INCLUDES_ */

#include "DrvrItp_types.h"

/* Macros for accessing real-time model data structure */

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: DrvrTqReqInDrv_T
   * Referenced by: '<S6>/Torque_Map_in_Drive'
   */
  float32 Torque_Map_in_Drive_tableData[462];

  /* Expression: VehSpdLgtInDrv_CA
   * Referenced by: '<S6>/Torque_Map_in_Drive'
   */
  float32 Torque_Map_in_Drive_bp01Data[14];

  /* Pooled Parameter (Expression: JstkYpos_CA)
   * Referenced by:
   *   '<S6>/Torque_Map_in_Drive'
   *   '<S6>/Torque_Map_in_Reverse'
   */
  float32 pooled1[33];

  /* Expression: DrvrTqReqInRvs_T
   * Referenced by: '<S6>/Torque_Map_in_Reverse'
   */
  float32 Torque_Map_in_Reverse_tableData[330];

  /* Expression: VehSpdLgtInRvs_CA
   * Referenced by: '<S6>/Torque_Map_in_Reverse'
   */
  float32 Torque_Map_in_Reverse_bp01Data[10];

  /* Computed Parameter: Torque_Map_in_Drive_maxIndex
   * Referenced by: '<S6>/Torque_Map_in_Drive'
   */
  uint32 Torque_Map_in_Drive_maxIndex[2];

  /* Computed Parameter: Torque_Map_in_Reverse_maxIndex
   * Referenced by: '<S6>/Torque_Map_in_Reverse'
   */
  uint32 Torque_Map_in_Reverse_maxIndex[2];
} ConstP_DrvrItp_T;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define DrvrItp_START_SEC_QmRamSlow32bitCleared
#include "DrvrItp_MemMap.h"

extern float32 DrvrTqReq_sig;          /* '<S6>/Multiport Switch1' */

#define DrvrItp_STOP_SEC_QmRamSlow32bitCleared
#include "DrvrItp_MemMap.h"

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow8bitCleared for Internal Data */
#define DrvrItp_START_SEC_QmRamSlow8bitCleared
#include "DrvrItp_MemMap.h"

extern boolean BrkAppld_sig;           /* '<S3>/Logical Operator2' */
extern boolean BrkReqd_sig;            /* '<S4>/Logical Operator5' */

#define DrvrItp_STOP_SEC_QmRamSlow8bitCleared
#include "DrvrItp_MemMap.h"

/* Constant parameters (default storage) */
extern const ConstP_DrvrItp_T DrvrItp_ConstP = {1000.0,1000.0};;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DrvrItp'
 * '<S1>'   : 'DrvrItp/DrvrItp_10ms_sys'
 * '<S2>'   : 'DrvrItp/DrvrItp_Init'
 * '<S3>'   : 'DrvrItp/DrvrItp_10ms_sys/BrkAppld'
 * '<S4>'   : 'DrvrItp/DrvrItp_10ms_sys/BrkReqd'
 * '<S5>'   : 'DrvrItp/DrvrItp_10ms_sys/Doc Block'
 * '<S6>'   : 'DrvrItp/DrvrItp_10ms_sys/DrvrTqReq'
 * '<S7>'   : 'DrvrItp/DrvrItp_10ms_sys/Model Info'
 * '<S8>'   : 'DrvrItp/DrvrItp_10ms_sys/BrkAppld/Enumerated Constant'
 * '<S9>'   : 'DrvrItp/DrvrItp_10ms_sys/BrkAppld/Enumerated Constant1'
 * '<S10>'  : 'DrvrItp/DrvrItp_10ms_sys/BrkReqd/Enumerated Constant2'
 * '<S11>'  : 'DrvrItp/DrvrItp_10ms_sys/BrkReqd/Enumerated Constant3'
 */
#endif                                 /* RTW_HEADER_DrvrItp_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
