/*
 * File: VehMtnInp.c
 *
 * Code generated for Simulink model 'VehMtnInp'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Tue Jul 12 10:13:27 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VehMtnInp.h"
#include "VehMtnInp_private.h"

/* Block states (default storage) */
DW_VehMtnInp_T VehMtnInp_DW;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define VehMtnInp_START_SEC_QmRamSlow32bitCleared
#include "VehMtnInp_MemMap.h"

float32 JstkYpos_sig;                  /* '<S1>/Gain4' */

#define VehMtnInp_STOP_SEC_QmRamSlow32bitCleared
#include "VehMtnInp_MemMap.h"

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define VehMtnInp_START_SEC_QmCode
#include "VehMtnInp_MemMap.h"

void VehMtnInp_VehMtnInp_10ms(void)
{
  float32 rtb_Add;
  float32 rtb_Add_a;
  float32 rtb_Add_p;

  /* Outputs for Atomic SubSystem: '<Root>/VehMtnInp_10ms_sys' */
  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S5>/Constant Value1'
   *  Constant: '<S5>/Constant Value2'
   *  Constant: '<S5>/Constant Value3'
   *  Product: '<S5>/Product'
   */
  rtb_Add = (6.28318548F * ((float32)Rte_CData_EmNLpFilCoeff_C())) * 0.01F;

  /* Outputs for Atomic SubSystem: '<S5>/FirstOrderLPF' */
  /* Sum: '<S10>/Add' incorporates:
   *  Constant: '<S5>/Constant Value4'
   *  Gain: '<S1>/Gain2'
   *  Inport: '<Root>/Rp_EmNEstimReLe_De_EmNEstimReLe'
   *  Inport: '<Root>/Rp_EmNEstimReRi_De_EmNEstimReRi'
   *  Product: '<S10>/Product'
   *  Product: '<S5>/Divide1'
   *  Sum: '<S10>/Subtract'
   *  Sum: '<S1>/Add1'
   *  Sum: '<S5>/Add1'
   *  UnitDelay: '<S10>/Unit Delay'
   */
  rtb_Add_p = (float32)(((float32)(((float32)(((float32)(((float32)((float32)
    (Rte_IRead_VehMtnInp_10ms_Rp_EmNEstimReLe_De_EmNEstimReLe() +
     Rte_IRead_VehMtnInp_10ms_Rp_EmNEstimReRi_De_EmNEstimReRi()))) * 0.5F)) -
    VehMtnInp_DW.UnitDelay_DSTATE_d)) * (rtb_Add / (rtb_Add + 1.0F)))) +
                        VehMtnInp_DW.UnitDelay_DSTATE_d);

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  VehMtnInp_DW.UnitDelay_DSTATE_d = rtb_Add_p;

  /* End of Outputs for SubSystem: '<S5>/FirstOrderLPF' */

  /* Product: '<S3>/Product' incorporates:
   *  Constant: '<S3>/Constant Value1'
   *  Constant: '<S3>/Constant Value2'
   *  Constant: '<S3>/Constant Value3'
   *  Product: '<S8>/Product'
   */
  rtb_Add = (6.28318548F * ((float32)Rte_CData_JstkYposLpFilCoeff_C())) * 0.01F;

  /* Outputs for Atomic SubSystem: '<S3>/FirstOrderLPF2' */
  /* Sum: '<S9>/Add' incorporates:
   *  Constant: '<S3>/Constant Value4'
   *  Inport: '<Root>/Rp_BrkData_De_BrkData'
   *  Product: '<S3>/Divide1'
   *  Product: '<S3>/Product'
   *  Product: '<S9>/Product'
   *  Sum: '<S3>/Add1'
   *  Sum: '<S9>/Subtract'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  rtb_Add_a = ((rtb_Add / (rtb_Add + 1.0F)) *
               (Rte_IRead_VehMtnInp_10ms_Rp_BrkData_De_BrkData() -
                VehMtnInp_DW.UnitDelay_DSTATE_o)) +
    VehMtnInp_DW.UnitDelay_DSTATE_o;

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  VehMtnInp_DW.UnitDelay_DSTATE_o = rtb_Add_a;

  /* End of Outputs for SubSystem: '<S3>/FirstOrderLPF2' */

  /* Outputs for Atomic SubSystem: '<S8>/FirstOrderLPF1' */
  /* Sum: '<S11>/Add' incorporates:
   *  Constant: '<S8>/Constant Value4'
   *  Inport: '<Root>/Rp_ThrData_De_ThrData'
   *  Product: '<S11>/Product'
   *  Product: '<S8>/Divide1'
   *  Sum: '<S11>/Subtract'
   *  Sum: '<S8>/Add1'
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_Add = ((rtb_Add / (rtb_Add + 1.0F)) *
             (Rte_IRead_VehMtnInp_10ms_Rp_ThrData_De_ThrData() -
              VehMtnInp_DW.UnitDelay_DSTATE)) + VehMtnInp_DW.UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  VehMtnInp_DW.UnitDelay_DSTATE = rtb_Add;

  /* End of Outputs for SubSystem: '<S8>/FirstOrderLPF1' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (rtb_Add <= rtb_Add_a) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Gain: '<S1>/Gain3'
     */
    rtb_Add = -rtb_Add_a;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Gain: '<S1>/Gain4' */
  JstkYpos_sig = 0.4F * rtb_Add;

  /* End of Outputs for SubSystem: '<Root>/VehMtnInp_10ms_sys' */

  /* Outport: '<Root>/Pp_EmNFild_De_EmNFild' */
  Rte_IWrite_VehMtnInp_10ms_Pp_EmNFild_De_EmNFild((float32)rtb_Add_p);

  /* Outputs for Atomic SubSystem: '<Root>/VehMtnInp_10ms_sys' */
  /* Outport: '<Root>/Pp_InvCurrTotAllwdMax_De_InvCurrTotAllwdMax' incorporates:
   *  Inport: '<Root>/Rp_CurrMaxAllwdDcha_De_CurrMaxAllwdDcha'
   *  SignalConversion generated from: '<S1>/Gain5'
   */
  Rte_IWrite_VehMtnInp_10ms_Pp_InvCurrTotAllwdMax_De_InvCurrTotAllwdMax
    (Rte_IRead_VehMtnInp_10ms_Rp_CurrMaxAllwdDcha_De_CurrMaxAllwdDcha());

  /* Outport: '<Root>/Pp_InvCurrTotAllwdMin_De_InvCurrTotAllwdMin' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/Rp_CurrMaxAllwdRgn_De_CurrMaxAllwdRgn'
   */
  Rte_IWrite_VehMtnInp_10ms_Pp_InvCurrTotAllwdMin_De_InvCurrTotAllwdMin
    (-Rte_IRead_VehMtnInp_10ms_Rp_CurrMaxAllwdRgn_De_CurrMaxAllwdRgn());

  /* End of Outputs for SubSystem: '<Root>/VehMtnInp_10ms_sys' */

  /* Outport: '<Root>/Pp_JstkYpos_De_JstkYpos' */
  Rte_IWrite_VehMtnInp_10ms_Pp_JstkYpos_De_JstkYpos((float32)JstkYpos_sig);

  /* Outputs for Atomic SubSystem: '<Root>/VehMtnInp_10ms_sys' */
  /* Outport: '<Root>/Pp_VehSpdLgt_De_VehSpdLgt' incorporates:
   *  Constant: '<S1>/Constant Value1'
   *  Constant: '<S1>/Constant Value2'
   *  Product: '<S1>/Product'
   */
  Rte_IWrite_VehMtnInp_10ms_Pp_VehSpdLgt_De_VehSpdLgt((float32)((float32)
    ((rtb_Add_p * 0.33F) * 0.1047F)));

  /* End of Outputs for SubSystem: '<Root>/VehMtnInp_10ms_sys' */
}

#define VehMtnInp_STOP_SEC_QmCode
#include "VehMtnInp_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define VehMtnInp_START_SEC_QmCode
#include "VehMtnInp_MemMap.h"

void VehMtnInp_VehMtnInp_Init(void)
{
  /* Registration code */

  /* Unstructured storage class initialization */
  JstkYpos_sig = 0.0F;

  /* states (dwork) */
  (void) memset((void *)&VehMtnInp_DW, 0,
                sizeof(DW_VehMtnInp_T));
}

#define VehMtnInp_STOP_SEC_QmCode
#include "VehMtnInp_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
