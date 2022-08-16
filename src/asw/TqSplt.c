/*
 * File: TqSplt.c
 *
 * Code generated for Simulink model 'TqSplt'.
 *
 * Model version                  : 1.95
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Jun 30 08:16:52 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TqSplt.h"
#include "TqSplt_private.h"
#include "look1_iflf_binlcapw.h"

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define TqSplt_START_SEC_QmRamSlow32bitCleared
#include "TqSplt_MemMap.h"

float32 RgnAmnt_sig;                   /* '<S14>/Switch1' */
float32 EmTqReqPrel_sig;               /* '<S4>/Add3' */
float32 FoudnBrkTqReqPrel_sig;         /* '<S8>/Abs1' */
float32 FoudnBrkTqReq_sig;             /* '<S6>/Add4' */
float32 EmTqReqLimd_sig;               /* '<S10>/Switch' */

#define TqSplt_STOP_SEC_QmRamSlow32bitCleared
#include "TqSplt_MemMap.h"

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define TqSplt_START_SEC_QmCode
#include "TqSplt_MemMap.h"

void TqSplt_TqSplt_10ms(void)
{
  float32 rtb_TmpSignalConversionAtNd_Loo[2];
  float32 rtb_Product;
  float32 EmTqReqPrel_sig_tmp_tmp;
  float32 rtb_Abs;

  /* Outputs for Atomic SubSystem: '<Root>/TqSplt_10ms_sys' */
  /* Switch: '<S13>/Switch1' incorporates:
   *  Inport: '<Root>/Rp_EmTqActv_De_EmTqActv'
   */
  if (Rte_IRead_TqSplt_10ms_Rp_EmTqActv_De_EmTqActv()) {
    /* SignalConversion generated from: '<S8>/Nd_Lookup_Tbl1' incorporates:
     *  Constant: '<S8>/VehSpdLgtRgnFull_C'
     *  Constant: '<S8>/VehSpdLgtRgnStrt_C'
     */
    rtb_TmpSignalConversionAtNd_Loo[0] = Rte_CData_VehSpdLgtRgnStrt_C();
    rtb_TmpSignalConversionAtNd_Loo[1] = Rte_CData_VehSpdLgtRgnFull_C();

    /* Lookup_n-D: '<S8>/Nd_Lookup_Tbl1' incorporates:
     *  Abs: '<S8>/Abs'
     *  Gain: '<S8>/Gain'
     *  Inport: '<Root>/Rp_VehSpdLgt_De_VehSpdLgt'
     */
    rtb_Product = (float32)look1_iflf_binlcapw(fabsf(3.6F * ((float32)
      Rte_IRead_TqSplt_10ms_Rp_VehSpdLgt_De_VehSpdLgt())),
      rtb_TmpSignalConversionAtNd_Loo, TqSplt_ConstP.Nd_Lookup_Tbl1_tableData,
      1U);

    /* Product: '<S8>/Product' incorporates:
     *  Gain: '<S8>/Gain1'
     */
    rtb_Product = (float32)((float32)(0.01F * ((float32)rtb_Product)));
  } else {
    /* Product: '<S8>/Product' incorporates:
     *  Constant: '<S8>/Constant Value2'
     */
    rtb_Product = (float32)0.0F;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S14>/Switch1' incorporates:
   *  Inport: '<Root>/Rp_BrkReqd_De_BrkReqd'
   */
  if (Rte_IRead_TqSplt_10ms_Rp_BrkReqd_De_BrkReqd()) {
    /* Switch: '<S14>/Switch1' */
    RgnAmnt_sig = (float32)rtb_Product;
  } else {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S8>/Constant Value3'
     */
    RgnAmnt_sig = 0.0F;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Product: '<S4>/Product1' incorporates:
   *  Inport: '<Root>/Rp_DrvrTqReq_De_DrvrTqReq'
   *  Switch: '<S9>/Switch1'
   */
  EmTqReqPrel_sig_tmp_tmp = Rte_IRead_TqSplt_10ms_Rp_DrvrTqReq_De_DrvrTqReq();

  /* Switch: '<S9>/Switch1' incorporates:
   *  Constant: '<S4>/Constant Value'
   *  Inport: '<Root>/Rp_BrkReqd_De_BrkReqd'
   *  Inport: '<Root>/Rp_EmTqActv_De_EmTqActv'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator2'
   */
  if ((!Rte_IRead_TqSplt_10ms_Rp_BrkReqd_De_BrkReqd()) &&
      (Rte_IRead_TqSplt_10ms_Rp_EmTqActv_De_EmTqActv())) {
    rtb_Abs = (float32)EmTqReqPrel_sig_tmp_tmp;
  } else {
    rtb_Abs = 0.0F;
  }

  /* Sum: '<S4>/Add3' incorporates:
   *  Inport: '<Root>/Rp_DrvrTqReq_De_DrvrTqReq'
   *  Product: '<S4>/Product1'
   */
  EmTqReqPrel_sig = (float32)(((float32)((float32)(EmTqReqPrel_sig_tmp_tmp *
    ((float32)RgnAmnt_sig)))) + rtb_Abs);

  /* Outputs for Atomic SubSystem: '<S5>/Limiter' */
  /* Switch: '<S10>/Switch1' incorporates:
   *  Inport: '<Root>/Rp_EmTqReqMax_De_EmTqPosLimShoTerm'
   *  RelationalOperator: '<S10>/Relational Operator'
   */
  if (Rte_IRead_TqSplt_10ms_Rp_EmTqReqMax_De_EmTqPosLimShoTerm() < ((float32)
       EmTqReqPrel_sig)) {
    /* Abs: '<S6>/Abs' */
    rtb_Abs = (float32)Rte_IRead_TqSplt_10ms_Rp_EmTqReqMax_De_EmTqPosLimShoTerm();
  } else {
    /* Abs: '<S6>/Abs' */
    rtb_Abs = EmTqReqPrel_sig;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Switch: '<S10>/Switch' incorporates:
   *  Inport: '<Root>/Rp_EmTqReqMin_De_EmTqNegLimShoTerm'
   *  RelationalOperator: '<S10>/Relational Operator1'
   */
  if (rtb_Abs > ((float32)
                 Rte_IRead_TqSplt_10ms_Rp_EmTqReqMin_De_EmTqNegLimShoTerm())) {
    /* Switch: '<S10>/Switch' */
    EmTqReqLimd_sig = (float32)rtb_Abs;
  } else {
    /* Switch: '<S10>/Switch' */
    EmTqReqLimd_sig = Rte_IRead_TqSplt_10ms_Rp_EmTqReqMin_De_EmTqNegLimShoTerm();
  }

  /* End of Switch: '<S10>/Switch' */
  /* End of Outputs for SubSystem: '<S5>/Limiter' */

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S6>/Constant Value4'
   *  Inport: '<Root>/Rp_BrkReqd_De_BrkReqd'
   *  Sum: '<S6>/Add2'
   *  Switch: '<S11>/Switch1'
   */
  if (Rte_IRead_TqSplt_10ms_Rp_BrkReqd_De_BrkReqd()) {
    rtb_Abs = EmTqReqPrel_sig - ((float32)EmTqReqLimd_sig);
  } else {
    /* Product: '<S8>/Product' incorporates:
     *  Constant: '<S8>/Constant Value1'
     */
    rtb_Product = (float32)1.0F;
    rtb_Abs = 0.0F;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Abs: '<S8>/Abs1' incorporates:
   *  Constant: '<S8>/Constant Value1'
   *  Inport: '<Root>/Rp_DrvrTqReq_De_DrvrTqReq'
   *  Product: '<S4>/Product1'
   *  Product: '<S8>/Product'
   *  Sum: '<S8>/Add1'
   */
  FoudnBrkTqReqPrel_sig = (float32)fabsf((1.0F - ((float32)rtb_Product)) *
    ((float32)EmTqReqPrel_sig_tmp_tmp));

  /* Sum: '<S6>/Add4' incorporates:
   *  Abs: '<S6>/Abs'
   */
  FoudnBrkTqReq_sig = fabsf(rtb_Abs) + ((float32)FoudnBrkTqReqPrel_sig);

  /* End of Outputs for SubSystem: '<Root>/TqSplt_10ms_sys' */

  /* Outport: '<Root>/Pp_EmTqReqLimd_De_EmTqReqLimd' */
  Rte_IWrite_TqSplt_10ms_Pp_EmTqReqLimd_De_EmTqReqLimd(EmTqReqLimd_sig);

  /* Outport: '<Root>/Pp_FoudnBrkTqReq_De_FoudnBrkTqReq' */
  Rte_IWrite_TqSplt_10ms_Pp_FoudnBrkTqReq_De_FoudnBrkTqReq((float32)
    FoudnBrkTqReq_sig);
}

#define TqSplt_STOP_SEC_QmCode
#include "TqSplt_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define TqSplt_START_SEC_QmCode
#include "TqSplt_MemMap.h"

void TqSplt_TqSplt_Init(void)
{
  /* Registration code */

  /* Unstructured storage class initialization */
  RgnAmnt_sig = 0.0F;
  EmTqReqPrel_sig = 0.0F;
  FoudnBrkTqReqPrel_sig = 0.0F;
  FoudnBrkTqReq_sig = 0.0F;
  EmTqReqLimd_sig = 0.0F;
}

#define TqSplt_STOP_SEC_QmCode
#include "TqSplt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
