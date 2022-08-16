/*
 * File: EmTqFil.c
 *
 * Code generated for Simulink model 'EmTqFil'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Jun 27 10:12:41 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EmTqFil.h"
#include "EmTqFil_private.h"

/* Block states (default storage) */
DW_EmTqFil_T EmTqFil_DW;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define EmTqFil_START_SEC_QmRamSlow32bitCleared
#include "EmTqFil_MemMap.h"

float32 EmTqFil_EmTqReqFild_sig;       /* '<S7>/Sum1' */

#define EmTqFil_STOP_SEC_QmRamSlow32bitCleared
#include "EmTqFil_MemMap.h"

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define EmTqFil_START_SEC_QmCode
#include "EmTqFil_MemMap.h"

void EmTqFil_EmTqFil_10ms(void)
{
  float32 rtb_Switch1_d_tmp;
  float32 rtb_Switch1_idx_0;
  float32 rtb_Switch1_idx_1;
  float32 rtb_Switch1_a;

  /* Outputs for Atomic SubSystem: '<Root>/EmTqFil_10ms_sys' */
  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S9>/Constant'
   *  Inport: '<Root>/Rp_DlnSt_De_DlnSt'
   *  RelationalOperator: '<S6>/Relational Operator'
   */
  if (DlnSt_Drv == ((uint32)Rte_IRead_EmTqFil_10ms_Rp_DlnSt_De_DlnSt())) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S6>/Constant Value'
     *  Constant: '<S6>/Constant Value1'
     */
    rtb_Switch1_idx_0 = Rte_CData_EmTqIncRateLim_C();
    rtb_Switch1_idx_1 = Rte_CData_EmTqDecRateLim_C();
  } else {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S6>/Constant Value2'
     *  Constant: '<S6>/Constant Value3'
     */
    rtb_Switch1_idx_0 = Rte_CData_EmTqDecRateLim_C();
    rtb_Switch1_idx_1 = Rte_CData_EmTqIncRateLim_C();
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S4>/LpFilWithRateLimr' */
  /* Product: '<S7>/Product2' incorporates:
   *  Constant: '<S4>/Constant Value5'
   */
  rtb_Switch1_idx_0 *= (float32)0.01F;

  /* Product: '<S7>/Product5' incorporates:
   *  Constant: '<S4>/Constant Value5'
   *  Gain: '<S6>/Gain1'
   */
  rtb_Switch1_idx_1 = (float32)((float32)(0.01F * ((float32)((float32)
    (-rtb_Switch1_idx_1)))));

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S4>/Constant Value4'
   *  Constant: '<S4>/Constant Value5'
   *  Constant: '<S7>/Constant Value'
   *  Product: '<S7>/Product1'
   */
  rtb_Switch1_a = 0.0314159282F * ((float32)Rte_CData_EmTqLpFilCoeff_C());

  /* Sum: '<S7>/Sum3' incorporates:
   *  Inport: '<Root>/Rp_EmTqReqLimd_De_EmTqReqLimd'
   *  UnitDelay: '<S7>/Unit Delay'
   * */
  rtb_Switch1_d_tmp = Rte_IRead_EmTqFil_10ms_Rp_EmTqReqLimd_De_EmTqReqLimd();

  /* Product: '<S7>/Product4' incorporates:
   *  Constant: '<S7>/Constant Value1'
   *  Gain: '<S7>/Gain'
   *  Inport: '<Root>/Rp_EmTqReqLimd_De_EmTqReqLimd'
   *  Product: '<S7>/Product3'
   *  Sum: '<S7>/Sum'
   *  Sum: '<S7>/Sum3'
   *  Sum: '<S7>/Sum4'
   *  UnitDelay: '<S7>/Unit Delay'
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  rtb_Switch1_a = (rtb_Switch1_a / (rtb_Switch1_a + 1.0F)) * ((float32)
    (((float32)((float32)(rtb_Switch1_d_tmp + EmTqFil_DW.UnitDelay_DSTATE))) -
     (2.0F * EmTqFil_EmTqReqFild_sig)));

  /* Outputs for Atomic SubSystem: '<S7>/Limiter1' */
  /* Switch: '<S8>/Switch1' incorporates:
   *  RelationalOperator: '<S8>/Relational Operator'
   */
  if (rtb_Switch1_idx_0 < ((float32)rtb_Switch1_a)) {
    /* Switch: '<S8>/Switch1' */
    rtb_Switch1_a = (float32)rtb_Switch1_idx_0;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Switch: '<S8>/Switch' incorporates:
   *  RelationalOperator: '<S8>/Relational Operator1'
   */
  if (rtb_Switch1_a > ((float32)rtb_Switch1_idx_1)) {
    rtb_Switch1_idx_1 = (float32)rtb_Switch1_a;
  }

  /* End of Switch: '<S8>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/Limiter1' */

  /* Sum: '<S7>/Sum1' incorporates:
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  EmTqFil_EmTqReqFild_sig = (float32)((float32)(rtb_Switch1_idx_1 + ((float32)
    EmTqFil_EmTqReqFild_sig)));

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  EmTqFil_DW.UnitDelay_DSTATE = rtb_Switch1_d_tmp;

  /* End of Outputs for SubSystem: '<S4>/LpFilWithRateLimr' */

  /* Gain: '<S4>/Gain1' */
  rtb_Switch1_idx_0 = (float32)((float32)(0.5F * EmTqFil_EmTqReqFild_sig));

  /* End of Outputs for SubSystem: '<Root>/EmTqFil_10ms_sys' */

  /* Outport: '<Root>/Pp_EmTqReqReLe_De_EmTqReqReLe' */
  Rte_IWrite_EmTqFil_10ms_Pp_EmTqReqReLe_De_EmTqReqReLe((float32)
    rtb_Switch1_idx_0);

  /* Outport: '<Root>/Pp_EmTqReqReRi_De_EmTqReqReRi' */
  Rte_IWrite_EmTqFil_10ms_Pp_EmTqReqReRi_De_EmTqReqReRi((float32)
    rtb_Switch1_idx_0);
}

#define EmTqFil_STOP_SEC_QmCode
#include "EmTqFil_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define EmTqFil_START_SEC_QmCode
#include "EmTqFil_MemMap.h"

void EmTqFil_EmTqFil_Init(void)
{
  /* Registration code */

  /* Unstructured storage class initialization */
  EmTqFil_EmTqReqFild_sig = 0.0F;

  /* states (dwork) */
  (void) memset((void *)&EmTqFil_DW, 0,
                sizeof(DW_EmTqFil_T));
}

#define EmTqFil_STOP_SEC_QmCode
#include "EmTqFil_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
