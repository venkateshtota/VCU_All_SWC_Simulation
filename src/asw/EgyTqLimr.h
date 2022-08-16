/*
 * File: EgyTqLimr.h
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

#ifndef RTW_HEADER_EgyTqLimr_h_
#define RTW_HEADER_EgyTqLimr_h_
#include <math.h>
#ifndef EgyTqLimr_COMMON_INCLUDES_
#define EgyTqLimr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EgyTqLimr.h"
#endif                                 /* EgyTqLimr_COMMON_INCLUDES_ */

#include "EgyTqLimr_types.h"

/* Macros for accessing real-time model data structure */

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: PwrLoss_T)
   * Referenced by:
   *   '<S5>/2-D Lookup Table'
   *   '<S7>/2-D Lookup Table'
   */
  float32 pooled7[4141];

  /* Pooled Parameter (Expression: PwrLossTq_CA)
   * Referenced by:
   *   '<S5>/2-D Lookup Table'
   *   '<S7>/2-D Lookup Table'
   */
  float32 pooled8[101];

  /* Pooled Parameter (Expression: PwrLossAgrVel_CA)
   * Referenced by:
   *   '<S5>/2-D Lookup Table'
   *   '<S7>/2-D Lookup Table'
   */
  float32 pooled9[41];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S5>/2-D Lookup Table'
   *   '<S7>/2-D Lookup Table'
   */
  uint32 pooled10[2];
} ConstP_EgyTqLimr_T;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define EgyTqLimr_START_SEC_QmRamSlow32bitCleared
#include "EgyTqLimr_MemMap.h"

extern float32 EmTqMotngCpby_PD_sig;   /* '<S10>/Switch1' */
extern float32 EmTqGenngCpby_PD_sig;   /* '<S11>/Switch1' */
extern float32 EmTqGenngCpby_Batt_sig; /* '<S5>/Abs1' */
extern float32 EmTqGenngCpby_sig;      /* '<S1>/MinMax1' */
extern float32 EmTqMotngCpby_sig;      /* '<S1>/MinMax' */
extern float32 EmTqNegLimShoTerm_sig;  /* '<S6>/Gain1' */
extern float32 EmTqPosLimShoTerm_sig;  /* '<S17>/Switch1' */
extern float32 EmTqMotngCpby_Batt_sig; /* '<S19>/Multiplication1' */

#define EgyTqLimr_STOP_SEC_QmRamSlow32bitCleared
#include "EgyTqLimr_MemMap.h"

/* Constant parameters (default storage) */
extern const ConstP_EgyTqLimr_T EgyTqLimr_ConstP = {1000.0,1000.0};

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
 * '<Root>' : 'EgyTqLimr'
 * '<S1>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys'
 * '<S2>'   : 'EgyTqLimr/EgyTqLimr_Init'
 * '<S3>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/Doc Block'
 * '<S4>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqCpby_PD'
 * '<S5>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqGenngCpby_Batt'
 * '<S6>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqLimShoTerm'
 * '<S7>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqMotngCpby_Batt'
 * '<S8>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/Model Info'
 * '<S9>'   : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqCpby_PD/Enumerated Constant'
 * '<S10>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqCpby_PD/If Then Else'
 * '<S11>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqCpby_PD/If Then Else1'
 * '<S12>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqGenngCpby_Batt/Division Zero Protection'
 * '<S13>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqGenngCpby_Batt/Division Zero Protection/IfThenElse'
 * '<S14>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqGenngCpby_Batt/Division Zero Protection/Signum'
 * '<S15>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqLimShoTerm/Enumerated Constant'
 * '<S16>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqLimShoTerm/Enumerated Constant1'
 * '<S17>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqLimShoTerm/If Then Elseif Else'
 * '<S18>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqLimShoTerm/If Then Elseif Else1'
 * '<S19>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqMotngCpby_Batt/Division Zero Protection'
 * '<S20>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqMotngCpby_Batt/Division Zero Protection/IfThenElse'
 * '<S21>'  : 'EgyTqLimr/EgyTqLimr_10ms_sys/EmTqMotngCpby_Batt/Division Zero Protection/Signum'
 */
#endif                                 /* RTW_HEADER_EgyTqLimr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
