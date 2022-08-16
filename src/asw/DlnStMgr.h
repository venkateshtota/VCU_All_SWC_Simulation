/*
 * File: DlnStMgr.h
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

#ifndef RTW_HEADER_DlnStMgr_h_
#define RTW_HEADER_DlnStMgr_h_
#include <math.h>
#include <string.h>
#ifndef DlnStMgr_COMMON_INCLUDES_
#define DlnStMgr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DlnStMgr.h"
#endif                                 /* DlnStMgr_COMMON_INCLUDES_ */

#include "DlnStMgr_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_DlnStMgr_T {
  boolean Startup;                     /* '<S1>/DlnStMgrStMac' */
  uint8 DlnStVldty_write;              /* '<S1>/DlnStMgrStMac' */
} B_DlnStMgr_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DlnStMgr_T {
  float32 UnitDelay_DSTATE;            /* '<S10>/Unit Delay' */
  float32 UnitDelay_DSTATE_p;          /* '<S9>/Unit Delay' */
  boolean UnitDelay1_DSTATE;           /* '<S34>/Unit Delay1' */
  boolean UnitDelay1_DSTATE_e;         /* '<S33>/Unit Delay1' */
  boolean UnitDelay_DSTATE_e;          /* '<S28>/Unit Delay' */
  boolean UnitDelay_DSTATE_k;          /* '<S27>/Unit Delay' */
  boolean UnitDelay1_DSTATE_c;         /* '<S11>/Unit Delay1' */
  boolean UnitDelay1_DSTATE_m;         /* '<S30>/Unit Delay1' */
  boolean UnitDelay1_DSTATE_h;         /* '<S29>/Unit Delay1' */
  uint8 UnitDelay1_DSTATE_hy;          /* '<S1>/Unit Delay1' */
  uint8 is_active_c3_DlnStMgr;         /* '<S1>/DlnStMgrStMac' */
  uint8 is_c3_DlnStMgr;                /* '<S1>/DlnStMgrStMac' */
  uint8 is_Not_Park;                   /* '<S1>/DlnStMgrStMac' */
} DW_DlnStMgr_T;

/* Invariant block signals (default storage) */
typedef struct {
  const float32 Divide;                /* '<S10>/Divide' */
  const float32 Divide_h;              /* '<S9>/Divide' */
} ConstB_DlnStMgr_T;

/* Block signals (default storage) */
extern B_DlnStMgr_T DlnStMgr_B;

/* Block states (default storage) */
extern DW_DlnStMgr_T DlnStMgr_DW;

extern const ConstB_DlnStMgr_T DlnStMgr_ConstB = {1000.0,1000.0};;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S1>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S1>/Signal Copy2' : Eliminate redundant signal conversion block
 */

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
 * '<Root>' : 'DlnStMgr'
 * '<S1>'   : 'DlnStMgr/DlnStMgr_10ms_sys'
 * '<S2>'   : 'DlnStMgr/DlnStMgr_Init'
 * '<S3>'   : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrStMac'
 * '<S4>'   : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran'
 * '<S5>'   : 'DlnStMgr/DlnStMgr_10ms_sys/Doc Block'
 * '<S6>'   : 'DlnStMgr/DlnStMgr_10ms_sys/EmTqActv'
 * '<S7>'   : 'DlnStMgr/DlnStMgr_10ms_sys/Model Info'
 * '<S8>'   : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd'
 * '<S9>'   : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Debounce Rising'
 * '<S10>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Debounce Rising1'
 * '<S11>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Edge Rising2'
 * '<S12>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant1'
 * '<S13>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant14'
 * '<S14>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant15'
 * '<S15>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant16'
 * '<S16>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant17'
 * '<S17>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant18'
 * '<S18>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant2'
 * '<S19>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant20'
 * '<S20>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant21'
 * '<S21>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant23'
 * '<S22>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant26'
 * '<S23>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant27'
 * '<S24>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant3'
 * '<S25>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant4'
 * '<S26>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Enumerated Constant5'
 * '<S27>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Signal Latch On With Reset1'
 * '<S28>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Signal Latch On With Reset2'
 * '<S29>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Debounce Rising/EdgeRisng'
 * '<S30>'  : 'DlnStMgr/DlnStMgr_10ms_sys/DlnStMgrTran/Debounce Rising1/EdgeRisng'
 * '<S31>'  : 'DlnStMgr/DlnStMgr_10ms_sys/EmTqActv/Enumerated Constant28'
 * '<S32>'  : 'DlnStMgr/DlnStMgr_10ms_sys/EmTqActv/Enumerated Constant29'
 * '<S33>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Edge Rising'
 * '<S34>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Edge Rising1'
 * '<S35>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant'
 * '<S36>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant1'
 * '<S37>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant10'
 * '<S38>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant11'
 * '<S39>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant12'
 * '<S40>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant13'
 * '<S41>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant14'
 * '<S42>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant15'
 * '<S43>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant16'
 * '<S44>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant2'
 * '<S45>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant3'
 * '<S46>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant4'
 * '<S47>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant5'
 * '<S48>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant6'
 * '<S49>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant7'
 * '<S50>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/Enumerated Constant8'
 * '<S51>'  : 'DlnStMgr/DlnStMgr_10ms_sys/ParkReqCmd/If Then Elseif Else'
 */
#endif                                 /* RTW_HEADER_DlnStMgr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
