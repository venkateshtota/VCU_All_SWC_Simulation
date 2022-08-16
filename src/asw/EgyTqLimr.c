/*
 * File: EgyTqLimr.c
 *
 * Code generated for Simulink model 'EgyTqLimr'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Tue May 31 08:40:11 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EgyTqLimr.h"
#include "EgyTqLimr_private.h"
#include "look2_iflf_binlcapw.h"

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define EgyTqLimr_START_SEC_QmRamSlow32bitCleared
#include "EgyTqLimr_MemMap.h"

float32 EmTqMotngCpby_PD_sig;          /* '<S10>/Switch1' */
float32 EmTqGenngCpby_PD_sig;          /* '<S11>/Switch1' */
float32 EmTqGenngCpby_Batt_sig;        /* '<S5>/Abs1' */
float32 EmTqGenngCpby_sig;             /* '<S1>/MinMax1' */
float32 EmTqMotngCpby_sig;             /* '<S1>/MinMax' */
float32 EmTqNegLimShoTerm_sig;         /* '<S6>/Gain1' */
float32 EmTqPosLimShoTerm_sig;         /* '<S17>/Switch1' */
float32 EmTqMotngCpby_Batt_sig;        /* '<S19>/Multiplication1' */

#define EgyTqLimr_STOP_SEC_QmRamSlow32bitCleared
#include "EgyTqLimr_MemMap.h"

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define EgyTqLimr_START_SEC_QmCode
#include "EgyTqLimr_MemMap.h"

void EgyTqLimr_10ms(void)
{
  float32 rtb_Abs;
  float32 rtb_Product1_0;
  float32 rtb_Product1_tmp;
  uint8 tmp;
  boolean rtb_RelationalOperator1;

  /* Outputs for Atomic SubSystem: '<Root>/EgyTqLimr_10ms_sys' */
  /* RelationalOperator: '<S4>/Relational Operator' incorporates:
   *  Inport: '<Root>/Rp_DlnSt_De_DlnSt'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator1'
   */
  tmp = Rte_IRead_EgyTqLimr_10ms_Rp_DlnSt_De_DlnSt();

  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  Switch: '<S11>/Switch1'
   */
  if (DlnSt_Drv == ((uint32)tmp)) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Gain: '<S4>/Gain1'
     *  Gain: '<S4>/Gain2'
     *  Inport: '<Root>/Rp_EmTqReLePosLim_De_EmTqReLePosLim'
     *  Inport: '<Root>/Rp_EmTqReRiPosLim_De_EmTqReRiPosLim'
     *  MinMax: '<S4>/MinMax'
     */
    EmTqMotngCpby_PD_sig = (float32)fminf(2.0F * ((float32)
      Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReLePosLim_De_EmTqReLePosLim()), 2.0F *
      ((float32)Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReRiPosLim_De_EmTqReRiPosLim()));

    /* Switch: '<S11>/Switch1' incorporates:
     *  Gain: '<S4>/Gain3'
     *  Gain: '<S4>/Gain4'
     *  Inport: '<Root>/Rp_EmTqReLeNegLim_De_EmTqReLeNegLim'
     *  Inport: '<Root>/Rp_EmTqReRiNegLim_De_EmTqReRiNegLim'
     *  MinMax: '<S4>/MinMax1'
     */
    EmTqGenngCpby_PD_sig = (float32)fminf(2.0F * ((float32)
      Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReLeNegLim_De_EmTqReLeNegLim()), 2.0F *
      ((float32)Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReRiNegLim_De_EmTqReRiNegLim()));
  } else {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Gain: '<S4>/Gain3'
     *  Gain: '<S4>/Gain4'
     *  Inport: '<Root>/Rp_EmTqReLeNegLim_De_EmTqReLeNegLim'
     *  Inport: '<Root>/Rp_EmTqReRiNegLim_De_EmTqReRiNegLim'
     *  MinMax: '<S4>/MinMax1'
     */
    EmTqMotngCpby_PD_sig = (float32)fminf(2.0F * ((float32)
      Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReLeNegLim_De_EmTqReLeNegLim()), 2.0F *
      ((float32)Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReRiNegLim_De_EmTqReRiNegLim()));

    /* Switch: '<S11>/Switch1' incorporates:
     *  Gain: '<S4>/Gain1'
     *  Gain: '<S4>/Gain2'
     *  Inport: '<Root>/Rp_EmTqReLePosLim_De_EmTqReLePosLim'
     *  Inport: '<Root>/Rp_EmTqReRiPosLim_De_EmTqReRiPosLim'
     *  MinMax: '<S4>/MinMax'
     */
    EmTqGenngCpby_PD_sig = (float32)fminf(2.0F * ((float32)
      Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReLePosLim_De_EmTqReLePosLim()), 2.0F *
      ((float32)Rte_IRead_EgyTqLimr_10ms_Rp_EmTqReRiPosLim_De_EmTqReRiPosLim()));
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Product: '<S5>/Product1' incorporates:
   *  Abs: '<S5>/Abs'
   *  Constant: '<S5>/Constant Value1'
   *  Inport: '<Root>/Rp_EmNFild_De_EmNFild'
   *  Product: '<S7>/Product1'
   */
  rtb_Product1_tmp = fabsf((float32)
    Rte_IRead_EgyTqLimr_10ms_Rp_EmNFild_De_EmNFild()) * 0.1047F;

  /* Product: '<S5>/Product' incorporates:
   *  Inport: '<Root>/Rp_HvBattVltg_De_HvBattVltg'
   *  Product: '<S7>/Product'
   */
  rtb_Abs = (float32)Rte_IRead_EgyTqLimr_10ms_Rp_HvBattVltg_De_HvBattVltg();

  /* Outputs for Atomic SubSystem: '<S5>/Division Zero Protection' */
  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S5>/Constant Value2'
   *  Product: '<S12>/Multiplication'
   *  Product: '<S5>/Product1'
   *  RelationalOperator: '<S12>/Greater  Than'
   */
  if (rtb_Product1_tmp < 0.1F) {
    rtb_Product1_0 = 0.1F;
  } else {
    rtb_Product1_0 = rtb_Product1_tmp;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Abs: '<S5>/Abs1' incorporates:
   *  Constant: '<S5>/Constant Value'
   *  Gain: '<S5>/Gain1'
   *  Gain: '<S5>/Gain2'
   *  Inport: '<Root>/Rp_HvBattVltg_De_HvBattVltg'
   *  Inport: '<Root>/Rp_InvCurrTotAllwdMin_De_InvCurrTotAllwdMin'
   *  Lookup_n-D: '<S5>/2-D Lookup Table'
   *  MinMax: '<S5>/MinMax'
   *  Product: '<S12>/Multiplication1'
   *  Product: '<S5>/Product'
   *  Product: '<S5>/Product1'
   *  Sum: '<S5>/Add1'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  EmTqGenngCpby_Batt_sig = fabsf(fminf((float32)(((float32)((float32)
    (Rte_IRead_EgyTqLimr_10ms_Rp_InvCurrTotAllwdMin_De_InvCurrTotAllwdMin() *
     ((float32)rtb_Abs)))) - ((float32)((float32)(look2_iflf_binlcapw(-0.5F *
    ((float32)EmTqGenngCpby_sig), rtb_Product1_tmp, EgyTqLimr_ConstP.pooled8,
    EgyTqLimr_ConstP.pooled9, EgyTqLimr_ConstP.pooled7,
    EgyTqLimr_ConstP.pooled10, 101U) * ((float32)2.0F))))), 0.0F) /
    rtb_Product1_0);

  /* End of Outputs for SubSystem: '<S5>/Division Zero Protection' */

  /* MinMax: '<S1>/MinMax1' */
  EmTqGenngCpby_sig = (float32)fminf((float32)EmTqGenngCpby_PD_sig,
    EmTqGenngCpby_Batt_sig);

  /* Outputs for Atomic SubSystem: '<S7>/Division Zero Protection' */
  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S7>/Constant Value2'
   *  Product: '<S19>/Multiplication'
   *  RelationalOperator: '<S19>/Greater  Than'
   */
  if (rtb_Product1_tmp < 0.1F) {
    rtb_Product1_0 = 0.1F;
  } else {
    rtb_Product1_0 = rtb_Product1_tmp;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Product: '<S19>/Multiplication1' incorporates:
   *  Constant: '<S7>/Constant Value'
   *  Gain: '<S7>/Gain1'
   *  Gain: '<S7>/Gain2'
   *  Inport: '<Root>/Rp_InvCurrTotAllwdMax_De_InvCurrTotAllwdMax'
   *  Lookup_n-D: '<S7>/2-D Lookup Table'
   *  MinMax: '<S7>/MinMax'
   *  Product: '<S7>/Product'
   *  Sum: '<S7>/Add1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  EmTqMotngCpby_Batt_sig = fmaxf((float32)(((float32)((float32)
    (Rte_IRead_EgyTqLimr_10ms_Rp_InvCurrTotAllwdMax_De_InvCurrTotAllwdMax() *
     ((float32)rtb_Abs)))) - ((float32)((float32)(look2_iflf_binlcapw(0.5F *
    ((float32)EmTqMotngCpby_sig), rtb_Product1_tmp, EgyTqLimr_ConstP.pooled8,
    EgyTqLimr_ConstP.pooled9, EgyTqLimr_ConstP.pooled7,
    EgyTqLimr_ConstP.pooled10, 101U) * ((float32)2.0F))))), 0.0F) /
    rtb_Product1_0;

  /* End of Outputs for SubSystem: '<S7>/Division Zero Protection' */

  /* MinMax: '<S1>/MinMax' */
  EmTqMotngCpby_sig = (float32)fminf(EmTqMotngCpby_Batt_sig, (float32)
    EmTqMotngCpby_PD_sig);

  /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
   *  Constant: '<S16>/Constant'
   */
  rtb_RelationalOperator1 = (((uint32)tmp) == DlnSt_Rvs);

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S15>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  Switch: '<S17>/Switch1'
   *  Switch: '<S17>/Switch2'
   *  Switch: '<S18>/Switch2'
   */
  if (((uint32)tmp) == DlnSt_Drv) {
    /* Gain: '<S6>/Gain1' */
    EmTqNegLimShoTerm_sig = -EmTqGenngCpby_sig;

    /* Switch: '<S17>/Switch1' */
    EmTqPosLimShoTerm_sig = EmTqMotngCpby_sig;
  } else if (rtb_RelationalOperator1) {
    /* Switch: '<S18>/Switch2' incorporates:
     *  Gain: '<S6>/Gain1'
     */
    EmTqNegLimShoTerm_sig = -EmTqMotngCpby_sig;

    /* Switch: '<S17>/Switch2' incorporates:
     *  Switch: '<S17>/Switch1'
     */
    EmTqPosLimShoTerm_sig = EmTqGenngCpby_sig;
  } else {
    /* Gain: '<S6>/Gain1' incorporates:
     *  Constant: '<S6>/Constant Value1'
     *  Switch: '<S18>/Switch2'
     */
    EmTqNegLimShoTerm_sig = (float32)-0.0F;

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S6>/Constant Value'
     *  Switch: '<S17>/Switch2'
     */
    EmTqPosLimShoTerm_sig = (float32)0.0F;
  }

  /* End of Switch: '<S18>/Switch1' */
  /* End of Outputs for SubSystem: '<Root>/EgyTqLimr_10ms_sys' */

  /* Outport: '<Root>/Pp_EmTqPosLimShoTerm_De_EmTqPosLimShoTerm' */
  Rte_IWrite_EgyTqLimr_10ms_Pp_EmTqPosLimShoTerm_De_EmTqPosLimShoTerm((float32)
    EmTqPosLimShoTerm_sig);

  /* Outport: '<Root>/Pp_EmTqNegLimShoTerm_De_EmTqNegLimShoTerm' */
  Rte_IWrite_EgyTqLimr_10ms_Pp_EmTqNegLimShoTerm_De_EmTqNegLimShoTerm((float32)
    EmTqNegLimShoTerm_sig);
}

#define EgyTqLimr_STOP_SEC_QmCode
#include "EgyTqLimr_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define EgyTqLimr_START_SEC_QmCode
#include "EgyTqLimr_MemMap.h"

void EgyTqLimr_Init(void)
{
  /* Registration code */

  /* Unstructured storage class initialization */
  EmTqMotngCpby_PD_sig = 0.0F;
  EmTqGenngCpby_PD_sig = 0.0F;
  EmTqGenngCpby_Batt_sig = 0.0F;
  EmTqGenngCpby_sig = 0.0F;
  EmTqMotngCpby_sig = 0.0F;
  EmTqNegLimShoTerm_sig = 0.0F;
  EmTqPosLimShoTerm_sig = 0.0F;
  EmTqMotngCpby_Batt_sig = 0.0F;
}

#define EgyTqLimr_STOP_SEC_QmCode
#include "EgyTqLimr_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
