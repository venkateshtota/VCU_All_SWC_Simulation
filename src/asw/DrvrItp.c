/*
 * File: DrvrItp.c
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

#include "DrvrItp.h"
#include "DrvrItp_private.h"
#include "look2_iflf_binlcapw.h"

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define DrvrItp_START_SEC_QmRamSlow32bitCleared
#include "DrvrItp_MemMap.h"

float32 DrvrTqReq_sig;                 /* '<S6>/Multiport Switch1' */

#define DrvrItp_STOP_SEC_QmRamSlow32bitCleared
#include "DrvrItp_MemMap.h"

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow8bitCleared for Internal Data */
#define DrvrItp_START_SEC_QmRamSlow8bitCleared
#include "DrvrItp_MemMap.h"

boolean BrkAppld_sig;                  /* '<S3>/Logical Operator2' */
boolean BrkReqd_sig;                   /* '<S4>/Logical Operator5' */

#define DrvrItp_STOP_SEC_QmRamSlow8bitCleared
#include "DrvrItp_MemMap.h"

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define DrvrItp_START_SEC_QmCode
#include "DrvrItp_MemMap.h"

void DrvrItp_DrvrItp_10ms(void)
{
  float32 BrkAppld_sig_tmp;
  uint8 BrkAppld_sig_tmp_0;

  /* Outputs for Atomic SubSystem: '<Root>/DrvrItp_10ms_sys' */
  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  Inport: '<Root>/Rp_JstkYpos_De_JstkYpos'
   *  Lookup_n-D: '<S6>/Torque_Map_in_Drive'
   *  Lookup_n-D: '<S6>/Torque_Map_in_Reverse'
   *  MultiPortSwitch: '<S6>/Multiport Switch1'
   *  RelationalOperator: '<S3>/Relational Operator3'
   */
  BrkAppld_sig_tmp = Rte_IRead_DrvrItp_10ms_Rp_JstkYpos_De_JstkYpos();

  /* RelationalOperator: '<S3>/Relational Operator' incorporates:
   *  Inport: '<Root>/Rp_DlnSt_De_DlnSt'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator6'
   */
  BrkAppld_sig_tmp_0 = Rte_IRead_DrvrItp_10ms_Rp_DlnSt_De_DlnSt();

  /* Logic: '<S3>/Logical Operator2' incorporates:
   *  Constant: '<S3>/Constant Value'
   *  Constant: '<S3>/Constant Value1'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Gain: '<S3>/Gain1'
   *  Inport: '<Root>/Rp_JstkYpos_De_JstkYpos'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  RelationalOperator: '<S3>/Relational Operator3'
   */
  BrkAppld_sig = (((DlnSt_Drv == ((uint32)BrkAppld_sig_tmp_0)) &&
                   (BrkAppld_sig_tmp < (-Rte_CData_BrkAppldTolr_C()))) ||
                  ((DlnSt_Rvs == ((uint32)BrkAppld_sig_tmp_0)) &&
                   (BrkAppld_sig_tmp > Rte_CData_BrkAppldTolr_C())));

  /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
   *  Inport: '<Root>/Rp_DlnSt_De_DlnSt'
   */
  switch (Rte_IRead_DrvrItp_10ms_Rp_DlnSt_De_DlnSt()) {
   case DlnSt_Drv:
    /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
     *  Constant: '<S6>/Constant Value'
     *  Inport: '<Root>/Rp_VehSpdLgt_De_VehSpdLgt'
     *  Lookup_n-D: '<S6>/Torque_Map_in_Drive'
     *  Product: '<S6>/Product'
     */
    DrvrTqReq_sig = look2_iflf_binlcapw(3.6F * ((float32)
      Rte_IRead_DrvrItp_10ms_Rp_VehSpdLgt_De_VehSpdLgt()), (float32)
      BrkAppld_sig_tmp, DrvrItp_ConstP.Torque_Map_in_Drive_bp01Data,
      DrvrItp_ConstP.pooled1, DrvrItp_ConstP.Torque_Map_in_Drive_tableData,
      DrvrItp_ConstP.Torque_Map_in_Drive_maxIndex, 14U);
    break;

   case DlnSt_Rvs:
    /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
     *  Constant: '<S6>/Constant Value'
     *  Inport: '<Root>/Rp_VehSpdLgt_De_VehSpdLgt'
     *  Lookup_n-D: '<S6>/Torque_Map_in_Reverse'
     *  Product: '<S6>/Product'
     */
    DrvrTqReq_sig = look2_iflf_binlcapw(3.6F * ((float32)
      Rte_IRead_DrvrItp_10ms_Rp_VehSpdLgt_De_VehSpdLgt()), (float32)
      BrkAppld_sig_tmp, DrvrItp_ConstP.Torque_Map_in_Reverse_bp01Data,
      DrvrItp_ConstP.pooled1, DrvrItp_ConstP.Torque_Map_in_Reverse_tableData,
      DrvrItp_ConstP.Torque_Map_in_Reverse_maxIndex, 10U);
    break;

   default:
    /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
     *  Constant: '<S6>/Constant Value1'
     */
    DrvrTqReq_sig = 0.0F;
    break;
  }

  /* Logic: '<S4>/Logical Operator5' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S4>/Constant Value3'
   *  Constant: '<S4>/Constant Value4'
   *  Logic: '<S4>/Logical Operator3'
   *  Logic: '<S4>/Logical Operator4'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   *  RelationalOperator: '<S4>/Relational Operator6'
   *  RelationalOperator: '<S4>/Relational Operator7'
   */
  BrkReqd_sig = (((DlnSt_Drv == ((uint32)BrkAppld_sig_tmp_0)) && (DrvrTqReq_sig <
    0.0F)) || ((DlnSt_Rvs == ((uint32)BrkAppld_sig_tmp_0)) && (DrvrTqReq_sig >
    0.0F)));

  /* End of Outputs for SubSystem: '<Root>/DrvrItp_10ms_sys' */

  /* Outport: '<Root>/Pp_BrkAppld_De_BrkAppld' */
  Rte_IWrite_DrvrItp_10ms_Pp_BrkAppld_De_BrkAppld(BrkAppld_sig);

  /* Outport: '<Root>/Pp_BrkReqd_De_BrkReqd' */
  Rte_IWrite_DrvrItp_10ms_Pp_BrkReqd_De_BrkReqd(BrkReqd_sig);

  /* Outport: '<Root>/Pp_DrvrTqReq_De_DrvrTqReq' */
  Rte_IWrite_DrvrItp_10ms_Pp_DrvrTqReq_De_DrvrTqReq((float32)DrvrTqReq_sig);
}

#define DrvrItp_STOP_SEC_QmCode
#include "DrvrItp_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define DrvrItp_START_SEC_QmCode
#include "DrvrItp_MemMap.h"

void DrvrItp_DrvrItp_Init(void)
{
  /* Registration code */

  /* Unstructured storage class initialization */
  DrvrTqReq_sig = 0.0F;

  /* Unstructured storage class initialization */
  BrkAppld_sig = false;
  BrkReqd_sig = false;
}

#define DrvrItp_STOP_SEC_QmCode
#include "DrvrItp_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
