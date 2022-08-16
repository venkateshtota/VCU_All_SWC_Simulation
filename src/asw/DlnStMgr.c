/*
 * File: DlnStMgr.c
 *
 * Code generated for Simulink model 'DlnStMgr'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Jun 30 17:00:21 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DlnStMgr.h"
#include "DlnStMgr_private.h"

/* Named constants for Chart: '<S1>/DlnStMgrStMac' */
#define DlnStMgr_IN_Drive              ((uint8)1U)
#define DlnStMgr_IN_Init               ((uint8)1U)
#define DlnStMgr_IN_NO_ACTIVE_CHILD    ((uint8)0U)
#define DlnStMgr_IN_Neutral            ((uint8)2U)
#define DlnStMgr_IN_Neutral_Invalid    ((uint8)2U)
#define DlnStMgr_IN_Not_Park           ((uint8)3U)
#define DlnStMgr_IN_Park               ((uint8)4U)
#define DlnStMgr_IN_Reverse            ((uint8)3U)

/* Block signals (default storage) */
B_DlnStMgr_T DlnStMgr_B;

/* Block states (default storage) */
DW_DlnStMgr_T DlnStMgr_DW;

/* Model step function */

/* SwAddrMethod QmCode for Runnable */
#define DlnStMgr_START_SEC_QmCode
#include "DlnStMgr_MemMap.h"

void DlnStMgr_10ms(void)
{
  float32 rtb_DrvOrRvsToNeut_sig_tmp;
  float32 rtb_Switch1_d;
  float32 rtb_ToPark_sig_tmp_tmp;
  uint8 rtb_DlnSt_write;
  uint8 rtb_ToPark_sig_tmp;
  uint8 rtb_ToPark_sig_tmp_0;
  uint8 rtb_Switch1_k;
  uint8 tmp;
  uint8 rtb_DrvOrRvsToNeut_sig_tmp_0;
  boolean rtb_AND_c;
  boolean rtb_AND_cn;
  boolean rtb_DrvOrRvsToNeut_sig;
  boolean rtb_OR1_e;
  boolean rtb_OR1_h;
  boolean rtb_ToPark_sig;

  /* Outputs for Atomic SubSystem: '<Root>/DlnStMgr_10ms_sys' */
  /* Abs: '<S4>/Abs1' incorporates:
   *  Abs: '<S8>/Abs4'
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/Rp_VehSpdLgt_De_VehSpdLgt'
   *  Switch: '<S51>/Switch1'
   */
  rtb_ToPark_sig_tmp_tmp = fabsf(3.6F * ((float32)
    Rte_IRead_DlnStMgr_10ms_Rp_VehSpdLgt_De_VehSpdLgt()));

  /* RelationalOperator: '<S4>/Relational Operator3' incorporates:
   *  Inport: '<Root>/Rp_EpbSts_De_EpbSts'
   *  RelationalOperator: '<S4>/Relational Operator21'
   *  RelationalOperator: '<S4>/Relational Operator22'
   *  RelationalOperator: '<S4>/Relational Operator26'
   *  RelationalOperator: '<S4>/Relational Operator31'
   *  RelationalOperator: '<S4>/Relational Operator39'
   *  RelationalOperator: '<S4>/Relational Operator40'
   *  RelationalOperator: '<S4>/Relational Operator5'
   *  RelationalOperator: '<S4>/Relational Operator7'
   *  RelationalOperator: '<S4>/Relational Operator8'
   *  RelationalOperator: '<S8>/Relational Operator1'
   *  RelationalOperator: '<S8>/Relational Operator10'
   *  RelationalOperator: '<S8>/Relational Operator16'
   *  RelationalOperator: '<S8>/Relational Operator4'
   *  RelationalOperator: '<S8>/Relational Operator7'
   *  Switch: '<S51>/Switch1'
   */
  rtb_ToPark_sig_tmp = Rte_IRead_DlnStMgr_10ms_Rp_EpbSts_De_EpbSts();

  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  Abs: '<S4>/Abs1'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S4>/Constant Value1'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  RelationalOperator: '<S4>/Relational Operator4'
   */
  rtb_ToPark_sig = ((EpbSts_Appld == ((uint32)rtb_ToPark_sig_tmp)) &&
                    (rtb_ToPark_sig_tmp_tmp < 1.0F));

  /* Abs: '<S4>/Abs6' incorporates:
   *  Inport: '<Root>/Rp_JstkYpos_De_JstkYpos'
   *  RelationalOperator: '<S4>/Relational Operator28'
   *  RelationalOperator: '<S4>/Relational Operator29'
   *  RelationalOperator: '<S4>/Relational Operator33'
   *  RelationalOperator: '<S4>/Relational Operator34'
   */
  rtb_DrvOrRvsToNeut_sig_tmp = Rte_IRead_DlnStMgr_10ms_Rp_JstkYpos_De_JstkYpos();

  /* RelationalOperator: '<S4>/Relational Operator20' incorporates:
   *  Inport: '<Root>/Rp_VehSt_De_VehSt'
   *  RelationalOperator: '<S4>/Relational Operator25'
   *  RelationalOperator: '<S4>/Relational Operator30'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator15'
   *  RelationalOperator: '<S8>/Relational Operator5'
   *  RelationalOperator: '<S8>/Relational Operator6'
   *  Switch: '<S51>/Switch1'
   */
  rtb_DrvOrRvsToNeut_sig_tmp_0 = Rte_IRead_DlnStMgr_10ms_Rp_VehSt_De_VehSt();

  /* Logic: '<S4>/Logical Operator7' incorporates:
   *  Abs: '<S4>/Abs1'
   *  Abs: '<S4>/Abs6'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S4>/Constant Value4'
   *  Constant: '<S4>/Constant Value5'
   *  Inport: '<Root>/Rp_JstkYpos_De_JstkYpos'
   *  RelationalOperator: '<S4>/Relational Operator20'
   *  RelationalOperator: '<S4>/Relational Operator22'
   *  RelationalOperator: '<S4>/Relational Operator23'
   *  RelationalOperator: '<S4>/Relational Operator24'
   */
  rtb_DrvOrRvsToNeut_sig = ((((VehSt_DrvgMan == ((uint32)
    rtb_DrvOrRvsToNeut_sig_tmp_0)) && (EpbSts_Reld == ((uint32)
    rtb_ToPark_sig_tmp))) && (rtb_ToPark_sig_tmp_tmp < 1.0F)) && (fabsf((float32)
    rtb_DrvOrRvsToNeut_sig_tmp) < 0.4F));

  /* RelationalOperator: '<S4>/Relational Operator36' incorporates:
   *  RelationalOperator: '<S4>/Relational Operator6'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  rtb_Switch1_k = DlnStMgr_DW.UnitDelay1_DSTATE_hy;

  /* Outputs for Atomic SubSystem: '<S4>/Signal Latch On With Reset1' */
  /* Logic: '<S27>/OR1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S24>/Constant'
   *  Logic: '<S27>/NOT'
   *  Logic: '<S27>/OR'
   *  RelationalOperator: '<S4>/Relational Operator36'
   *  RelationalOperator: '<S4>/Relational Operator8'
   *  UnitDelay: '<S27>/Unit Delay'
   */
  rtb_OR1_e = ((ParkReq_Apply == ((uint32)rtb_Switch1_k)) || ((EpbSts_Appld !=
    ((uint32)rtb_ToPark_sig_tmp)) && (DlnStMgr_DW.UnitDelay_DSTATE_k)));

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  DlnStMgr_DW.UnitDelay_DSTATE_k = rtb_OR1_e;

  /* End of Outputs for SubSystem: '<S4>/Signal Latch On With Reset1' */

  /* Logic: '<S4>/Logical Operator13' incorporates:
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S4>/Relational Operator5'
   */
  rtb_OR1_e = (rtb_OR1_e && (((uint32)rtb_ToPark_sig_tmp) != EpbSts_Appld));

  /* Outputs for Atomic SubSystem: '<S4>/Debounce Rising' */
  /* Outputs for Atomic SubSystem: '<S9>/EdgeRisng' */
  /* Logic: '<S29>/AND' incorporates:
   *  Logic: '<S29>/OR1'
   *  UnitDelay: '<S29>/Unit Delay1'
   */
  rtb_AND_c = (rtb_OR1_e && (!DlnStMgr_DW.UnitDelay1_DSTATE_h));

  /* Update for UnitDelay: '<S29>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_h = rtb_OR1_e;

  /* End of Outputs for SubSystem: '<S9>/EdgeRisng' */

  /* Switch: '<S9>/Switch1' incorporates:
   *  Logic: '<S9>/OR'
   *  Logic: '<S9>/OR1'
   */
  if ((!rtb_OR1_e) || rtb_AND_c) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant Value1'
     */
    rtb_Switch1_d = 0.0F;
  } else {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant Value'
     *  MinMax: '<S9>/Minimum'
     *  Sum: '<S9>/Summation'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_Switch1_d = fminf(DlnStMgr_ConstB.Divide_h,
                          DlnStMgr_DW.UnitDelay_DSTATE_p + 1.0F);
  }

  /* End of Switch: '<S9>/Switch1' */

  /* Logic: '<S9>/AND' incorporates:
   *  RelationalOperator: '<S9>/Greater  Than'
   */
  rtb_OR1_e = (rtb_OR1_e && (rtb_Switch1_d >= DlnStMgr_ConstB.Divide_h));

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  DlnStMgr_DW.UnitDelay_DSTATE_p = rtb_Switch1_d;

  /* End of Outputs for SubSystem: '<S4>/Debounce Rising' */

  /* Outputs for Atomic SubSystem: '<S4>/Signal Latch On With Reset2' */
  /* Logic: '<S28>/OR1' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S26>/Constant'
   *  Logic: '<S28>/NOT'
   *  Logic: '<S28>/OR'
   *  RelationalOperator: '<S4>/Relational Operator6'
   *  RelationalOperator: '<S4>/Relational Operator7'
   *  UnitDelay: '<S28>/Unit Delay'
   */
  rtb_AND_c = ((ParkReq_Rels == ((uint32)rtb_Switch1_k)) || ((EpbSts_Reld !=
    ((uint32)rtb_ToPark_sig_tmp)) && (DlnStMgr_DW.UnitDelay_DSTATE_e)));

  /* Update for UnitDelay: '<S28>/Unit Delay' */
  DlnStMgr_DW.UnitDelay_DSTATE_e = rtb_AND_c;

  /* End of Outputs for SubSystem: '<S4>/Signal Latch On With Reset2' */

  /* Logic: '<S4>/Logical Operator14' incorporates:
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S4>/Relational Operator39'
   */
  rtb_AND_c = (rtb_AND_c && (((uint32)rtb_ToPark_sig_tmp) != EpbSts_Reld));

  /* Outputs for Atomic SubSystem: '<S4>/Debounce Rising1' */
  /* Outputs for Atomic SubSystem: '<S10>/EdgeRisng' */
  /* Logic: '<S30>/AND' incorporates:
   *  Logic: '<S30>/OR1'
   *  UnitDelay: '<S30>/Unit Delay1'
   */
  rtb_AND_cn = (rtb_AND_c && (!DlnStMgr_DW.UnitDelay1_DSTATE_m));

  /* Update for UnitDelay: '<S30>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_m = rtb_AND_c;

  /* End of Outputs for SubSystem: '<S10>/EdgeRisng' */

  /* Switch: '<S10>/Switch1' incorporates:
   *  Logic: '<S10>/OR'
   *  Logic: '<S10>/OR1'
   */
  if ((!rtb_AND_c) || rtb_AND_cn) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value1'
     */
    rtb_Switch1_d = 0.0F;
  } else {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value'
     *  MinMax: '<S10>/Minimum'
     *  Sum: '<S10>/Summation'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_Switch1_d = fminf(DlnStMgr_ConstB.Divide, DlnStMgr_DW.UnitDelay_DSTATE +
                          1.0F);
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  DlnStMgr_DW.UnitDelay_DSTATE = rtb_Switch1_d;

  /* End of Outputs for SubSystem: '<S4>/Debounce Rising1' */

  /* RelationalOperator: '<S4>/Relational Operator40' incorporates:
   *  Constant: '<S23>/Constant'
   */
  rtb_AND_cn = (EpbSts_Appld == ((uint32)rtb_ToPark_sig_tmp));

  /* Outputs for Atomic SubSystem: '<S4>/Edge Rising2' */
  /* Logic: '<S11>/OR1' incorporates:
   *  UnitDelay: '<S11>/Unit Delay1'
   */
  rtb_OR1_h = !DlnStMgr_DW.UnitDelay1_DSTATE_c;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_c = rtb_AND_cn;

  /* End of Outputs for SubSystem: '<S4>/Edge Rising2' */

  /* Chart: '<S1>/DlnStMgrStMac' incorporates:
   *  Abs: '<S4>/Abs1'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S4>/Constant Value10'
   *  Constant: '<S4>/Constant Value2'
   *  Constant: '<S4>/Constant Value3'
   *  Constant: '<S4>/Constant Value6'
   *  Constant: '<S4>/Constant Value7'
   *  Constant: '<S4>/Constant Value8'
   *  Constant: '<S4>/Constant Value9'
   *  Logic: '<S10>/AND'
   *  Logic: '<S11>/AND'
   *  Logic: '<S4>/Logical Operator10'
   *  Logic: '<S4>/Logical Operator11'
   *  Logic: '<S4>/Logical Operator12'
   *  Logic: '<S4>/Logical Operator9'
   *  RelationalOperator: '<S10>/Greater  Than'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  RelationalOperator: '<S4>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator21'
   *  RelationalOperator: '<S4>/Relational Operator25'
   *  RelationalOperator: '<S4>/Relational Operator26'
   *  RelationalOperator: '<S4>/Relational Operator28'
   *  RelationalOperator: '<S4>/Relational Operator29'
   *  RelationalOperator: '<S4>/Relational Operator30'
   *  RelationalOperator: '<S4>/Relational Operator31'
   *  RelationalOperator: '<S4>/Relational Operator33'
   *  RelationalOperator: '<S4>/Relational Operator34'
   *  RelationalOperator: '<S4>/Relational Operator35'
   *
   * Block description for '<S1>/DlnStMgrStMac':
   *  DrivelineStateManagerStateMachine
   */
  if (((uint32)DlnStMgr_DW.is_active_c3_DlnStMgr) == 0U) {
    DlnStMgr_DW.is_active_c3_DlnStMgr = 1U;
    DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Init;
    rtb_DlnSt_write = DlnSt_Park;
    DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
    DlnStMgr_B.Startup = true;
  } else {
    switch (DlnStMgr_DW.is_c3_DlnStMgr) {
     case DlnStMgr_IN_Init:
      rtb_DlnSt_write = DlnSt_Park;
      if ((rtb_ToPark_sig_tmp_tmp > 1.0F) || rtb_OR1_e) {
        DlnStMgr_B.Startup = false;
        DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Neutral_Invalid;
        rtb_DlnSt_write = DlnSt_Neut;
        DlnStMgr_B.DlnStVldty_write = DlnStVldty_Invld;
      } else {
        if (rtb_ToPark_sig) {
          DlnStMgr_B.Startup = false;
          DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Park;
          DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
        }
      }
      break;

     case DlnStMgr_IN_Neutral_Invalid:
      rtb_DlnSt_write = DlnSt_Neut;

      /* Outputs for Atomic SubSystem: '<S4>/Edge Rising2' */
      if ((rtb_AND_cn && rtb_OR1_h) && rtb_ToPark_sig) {
        DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Park;
        rtb_DlnSt_write = DlnSt_Park;
        DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
      }

      /* End of Outputs for SubSystem: '<S4>/Edge Rising2' */
      break;

     case DlnStMgr_IN_Not_Park:
      if (rtb_OR1_e) {
        DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_NO_ACTIVE_CHILD;
        DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Neutral_Invalid;
        rtb_DlnSt_write = DlnSt_Neut;
        DlnStMgr_B.DlnStVldty_write = DlnStVldty_Invld;
      } else if (rtb_ToPark_sig) {
        DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_NO_ACTIVE_CHILD;
        DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Park;
        rtb_DlnSt_write = DlnSt_Park;
        DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
      } else {
        switch (DlnStMgr_DW.is_Not_Park) {
         case DlnStMgr_IN_Drive:
          rtb_DlnSt_write = DlnSt_Drv;
          if (rtb_DrvOrRvsToNeut_sig) {
            DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_Neutral;
            rtb_DlnSt_write = DlnSt_Neut;
          }
          break;

         case DlnStMgr_IN_Neutral:
          rtb_DlnSt_write = DlnSt_Neut;
          if ((((VehSt_DrvgMan == ((uint32)rtb_DrvOrRvsToNeut_sig_tmp_0)) &&
                (EpbSts_Reld == ((uint32)rtb_ToPark_sig_tmp))) &&
               ((rtb_DrvOrRvsToNeut_sig_tmp >= ((float32)0.4F)) &&
                (rtb_DrvOrRvsToNeut_sig_tmp < ((float32)12.0F)))) &&
              (rtb_ToPark_sig_tmp_tmp < 1.0F)) {
            DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_Drive;
            rtb_DlnSt_write = DlnSt_Drv;
          } else {
            if ((((VehSt_DrvgMan == ((uint32)rtb_DrvOrRvsToNeut_sig_tmp_0)) &&
                  (EpbSts_Reld == ((uint32)rtb_ToPark_sig_tmp))) &&
                 ((rtb_DrvOrRvsToNeut_sig_tmp > ((float32)-12.0F)) &&
                  (rtb_DrvOrRvsToNeut_sig_tmp <= ((float32)-0.4F)))) &&
                (rtb_ToPark_sig_tmp_tmp < 1.0F)) {
              DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_Reverse;
              rtb_DlnSt_write = DlnSt_Rvs;
            }
          }
          break;

         default:
          /* case IN_Reverse: */
          rtb_DlnSt_write = DlnSt_Rvs;
          if (rtb_DrvOrRvsToNeut_sig) {
            DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_Neutral;
            rtb_DlnSt_write = DlnSt_Neut;
          }
          break;
        }
      }
      break;

     default:
      /* case IN_Park: */
      rtb_DlnSt_write = DlnSt_Park;
      if (EpbSts_Reld == ((uint32)rtb_ToPark_sig_tmp)) {
        DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Not_Park;
        DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_Neutral;
        rtb_DlnSt_write = DlnSt_Neut;
      } else {
        /* Outputs for Atomic SubSystem: '<S4>/Debounce Rising1' */
        if (rtb_AND_c && (rtb_Switch1_d >= DlnStMgr_ConstB.Divide)) {
          DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_Neutral_Invalid;
          rtb_DlnSt_write = DlnSt_Neut;
          DlnStMgr_B.DlnStVldty_write = DlnStVldty_Invld;
        }

        /* End of Outputs for SubSystem: '<S4>/Debounce Rising1' */
      }
      break;
    }
  }

  /* End of Chart: '<S1>/DlnStMgrStMac' */

  /* RelationalOperator: '<S8>/Relational Operator19' incorporates:
   *  Inport: '<Root>/Rp_EpbSwtSts_De_EpbSwtSts'
   *  RelationalOperator: '<S8>/Relational Operator18'
   */
  rtb_ToPark_sig_tmp_0 = Rte_IRead_DlnStMgr_10ms_Rp_EpbSwtSts_De_EpbSwtSts();

  /* RelationalOperator: '<S8>/Relational Operator19' incorporates:
   *  Constant: '<S40>/Constant'
   */
  rtb_ToPark_sig = (EpbSwtSts_SwtPsd == ((uint32)rtb_ToPark_sig_tmp_0));

  /* Outputs for Atomic SubSystem: '<S8>/Edge Rising' */
  /* Logic: '<S33>/OR1' incorporates:
   *  UnitDelay: '<S33>/Unit Delay1'
   */
  rtb_DrvOrRvsToNeut_sig = !DlnStMgr_DW.UnitDelay1_DSTATE_e;

  /* Update for UnitDelay: '<S33>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_e = rtb_ToPark_sig;

  /* End of Outputs for SubSystem: '<S8>/Edge Rising' */

  /* RelationalOperator: '<S8>/Relational Operator18' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_OR1_e = (EpbSwtSts_SwtPsd == ((uint32)rtb_ToPark_sig_tmp_0));

  /* Outputs for Atomic SubSystem: '<S8>/Edge Rising1' */
  /* Logic: '<S34>/OR1' incorporates:
   *  UnitDelay: '<S34>/Unit Delay1'
   */
  rtb_AND_c = !DlnStMgr_DW.UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S34>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE = rtb_OR1_e;

  /* End of Outputs for SubSystem: '<S8>/Edge Rising1' */

  /* RelationalOperator: '<S8>/Relational Operator9' incorporates:
   *  Inport: '<Root>/Rp_VcuWakeup_De_VcuWakeup'
   *  RelationalOperator: '<S8>/Relational Operator12'
   */
  tmp = Rte_IRead_DlnStMgr_10ms_Rp_VcuWakeup_De_VcuWakeup();

  /* Outputs for Atomic SubSystem: '<S8>/Edge Rising1' */
  /* Switch: '<S51>/Switch1' incorporates:
   *  Abs: '<S4>/Abs1'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S50>/Constant'
   *  Constant: '<S8>/Constant Value1'
   *  Constant: '<S8>/Constant Value2'
   *  Constant: '<S8>/Constant Value3'
   *  Constant: '<S8>/Constant Value5'
   *  Constant: '<S8>/Constant Value6'
   *  Logic: '<S33>/AND'
   *  Logic: '<S34>/AND'
   *  Logic: '<S8>/Logical Operator'
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator2'
   *  Logic: '<S8>/Logical Operator3'
   *  Logic: '<S8>/Logical Operator4'
   *  Logic: '<S8>/Logical Operator5'
   *  Logic: '<S8>/Logical Operator6'
   *  Logic: '<S8>/Logical Operator8'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator1'
   *  RelationalOperator: '<S8>/Relational Operator10'
   *  RelationalOperator: '<S8>/Relational Operator11'
   *  RelationalOperator: '<S8>/Relational Operator12'
   *  RelationalOperator: '<S8>/Relational Operator13'
   *  RelationalOperator: '<S8>/Relational Operator15'
   *  RelationalOperator: '<S8>/Relational Operator16'
   *  RelationalOperator: '<S8>/Relational Operator17'
   *  RelationalOperator: '<S8>/Relational Operator2'
   *  RelationalOperator: '<S8>/Relational Operator4'
   *  RelationalOperator: '<S8>/Relational Operator5'
   *  RelationalOperator: '<S8>/Relational Operator6'
   *  RelationalOperator: '<S8>/Relational Operator7'
   *  RelationalOperator: '<S8>/Relational Operator8'
   *  RelationalOperator: '<S8>/Relational Operator9'
   *  Switch: '<S51>/Switch2'
   */
  if ((((((DlnStMgr_B.Startup) && (rtb_ToPark_sig_tmp_tmp <= 1.0F)) &&
         (EpbSts_Reld == ((uint32)rtb_ToPark_sig_tmp))) || ((((VehSt_DrvgMan ==
            ((uint32)rtb_DrvOrRvsToNeut_sig_tmp_0)) && (EpbSts_Reld == ((uint32)
             rtb_ToPark_sig_tmp))) && (rtb_ToPark_sig_tmp_tmp < 1.0F)) &&
         (rtb_OR1_e && rtb_AND_c))) || ((((VehSt_ChrgrCnctd == ((uint32)
            rtb_DrvOrRvsToNeut_sig_tmp_0)) || (((uint32)
            rtb_DrvOrRvsToNeut_sig_tmp_0) == VehSt_Chrgng)) && (EpbSts_Reld ==
          ((uint32)rtb_ToPark_sig_tmp))) && (rtb_ToPark_sig_tmp_tmp < 1.0F))) ||
      ((((VcuWakeup_On != ((uint32)tmp)) && (((uint32)tmp) != VcuWakeup_Drv)) &&
        (EpbSts_Reld == ((uint32)rtb_ToPark_sig_tmp))) &&
       (rtb_ToPark_sig_tmp_tmp < 1.0F))) {
    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S44>/Constant'
     */
    rtb_Switch1_k = ParkReq_Apply;
  } else {
    /* Outputs for Atomic SubSystem: '<S8>/Edge Rising' */
    if ((((VehSt_DrvgMan == ((uint32)rtb_DrvOrRvsToNeut_sig_tmp_0)) &&
          (EpbSts_Appld == ((uint32)rtb_ToPark_sig_tmp))) &&
         (rtb_ToPark_sig_tmp_tmp < 1.0F)) && (rtb_ToPark_sig &&
         rtb_DrvOrRvsToNeut_sig)) {
      /* Switch: '<S51>/Switch2' incorporates:
       *  Constant: '<S41>/Constant'
       *  Switch: '<S51>/Switch1'
       */
      rtb_Switch1_k = ParkReq_Rels;
    } else {
      /* Switch: '<S51>/Switch1' incorporates:
       *  Constant: '<S42>/Constant'
       *  Switch: '<S51>/Switch2'
       */
      rtb_Switch1_k = ParkReq_NoReq;
    }

    /* End of Outputs for SubSystem: '<S8>/Edge Rising' */
  }

  /* End of Outputs for SubSystem: '<S8>/Edge Rising1' */

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  Switch: '<S51>/Switch1'
   */
  DlnStMgr_DW.UnitDelay1_DSTATE_hy = rtb_Switch1_k;

  /* End of Outputs for SubSystem: '<Root>/DlnStMgr_10ms_sys' */

  /* Outport: '<Root>/Pp_ParkReq_De_ParkReq' incorporates:
   *  Switch: '<S51>/Switch1'
   */
  Rte_IWrite_DlnStMgr_10ms_Pp_ParkReq_De_ParkReq(rtb_Switch1_k);

  /* Outport: '<Root>/Pp_DlnSt_De_DlnSt' */
  Rte_IWrite_DlnStMgr_10ms_Pp_DlnSt_De_DlnSt(rtb_DlnSt_write);

  /* Outputs for Atomic SubSystem: '<Root>/DlnStMgr_10ms_sys' */
  /* Outport: '<Root>/Pp_EmTqActv_De_EmTqActv' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Rp_VehSt_De_VehSt'
   *  Logic: '<S6>/Logical Operator15'
   *  RelationalOperator: '<S6>/Relational Operator41'
   *  RelationalOperator: '<S6>/Relational Operator42'
   */
  Rte_IWrite_DlnStMgr_10ms_Pp_EmTqActv_De_EmTqActv((VehSt_DrvgMan == ((uint32)
    Rte_IRead_DlnStMgr_10ms_Rp_VehSt_De_VehSt())) || (((uint32)
    Rte_IRead_DlnStMgr_10ms_Rp_VehSt_De_VehSt()) == VehSt_Ad));

  /* End of Outputs for SubSystem: '<Root>/DlnStMgr_10ms_sys' */

  /* Outport: '<Root>/Pp_DlnStVldty_De_DlnStVldty' */
  Rte_IWrite_DlnStMgr_10ms_Pp_DlnStVldty_De_DlnStVldty
    (DlnStMgr_B.DlnStVldty_write);
}

#define DlnStMgr_STOP_SEC_QmCode
#include "DlnStMgr_MemMap.h"

/* Model initialize function */

/* SwAddrMethod QmCode for Runnable */
#define DlnStMgr_START_SEC_QmCode
#include "DlnStMgr_MemMap.h"

void DlnStMgr_Init(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset(((void *) &DlnStMgr_B), 0,
                sizeof(B_DlnStMgr_T));

  {
    DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
  }

  /* states (dwork) */
  (void) memset((void *)&DlnStMgr_DW, 0,
                sizeof(DW_DlnStMgr_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/DlnStMgr_10ms_sys' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_hy = ParkReq_NoReq;

  /* SystemInitialize for Atomic SubSystem: '<S4>/Debounce Rising' */
  /* SystemInitialize for Atomic SubSystem: '<S9>/EdgeRisng' */
  /* InitializeConditions for UnitDelay: '<S29>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_h = true;

  /* End of SystemInitialize for SubSystem: '<S9>/EdgeRisng' */
  /* End of SystemInitialize for SubSystem: '<S4>/Debounce Rising' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/Debounce Rising1' */
  /* SystemInitialize for Atomic SubSystem: '<S10>/EdgeRisng' */
  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_m = true;

  /* End of SystemInitialize for SubSystem: '<S10>/EdgeRisng' */
  /* End of SystemInitialize for SubSystem: '<S4>/Debounce Rising1' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/Edge Rising2' */
  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_c = true;

  /* End of SystemInitialize for SubSystem: '<S4>/Edge Rising2' */

  /* SystemInitialize for Chart: '<S1>/DlnStMgrStMac'
   *
   * Block description for '<S1>/DlnStMgrStMac':
   *  DrivelineStateManagerStateMachine
   */
  DlnStMgr_DW.is_Not_Park = DlnStMgr_IN_NO_ACTIVE_CHILD;
  DlnStMgr_DW.is_active_c3_DlnStMgr = 0U;
  DlnStMgr_DW.is_c3_DlnStMgr = DlnStMgr_IN_NO_ACTIVE_CHILD;
  DlnStMgr_B.DlnStVldty_write = DlnStVldty_Vld;
  DlnStMgr_B.Startup = false;

  /* SystemInitialize for Atomic SubSystem: '<S8>/Edge Rising' */
  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE_e = true;

  /* End of SystemInitialize for SubSystem: '<S8>/Edge Rising' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/Edge Rising1' */
  /* InitializeConditions for UnitDelay: '<S34>/Unit Delay1' */
  DlnStMgr_DW.UnitDelay1_DSTATE = true;

  /* End of SystemInitialize for SubSystem: '<S8>/Edge Rising1' */
  /* End of SystemInitialize for SubSystem: '<Root>/DlnStMgr_10ms_sys' */
}

#define DlnStMgr_STOP_SEC_QmCode
#include "DlnStMgr_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
