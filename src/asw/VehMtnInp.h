/*
 * File: VehMtnInp.h
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

#ifndef RTW_HEADER_VehMtnInp_h_
#define RTW_HEADER_VehMtnInp_h_
#include <string.h>
#ifndef VehMtnInp_COMMON_INCLUDES_
#define VehMtnInp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VehMtnInp.h"
#endif                                 /* VehMtnInp_COMMON_INCLUDES_ */

#include "VehMtnInp_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_VehMtnInp_T {
  float32 UnitDelay_DSTATE;            /* '<S11>/Unit Delay' */
  float32 UnitDelay_DSTATE_d;          /* '<S10>/Unit Delay' */
  float32 UnitDelay_DSTATE_o;          /* '<S9>/Unit Delay' */
} DW_VehMtnInp_T;

/* Block states (default storage) */
extern DW_VehMtnInp_T VehMtnInp_DW;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define VehMtnInp_START_SEC_QmRamSlow32bitCleared
#include "VehMtnInp_MemMap.h"

extern float32 JstkYpos_sig;           /* '<S1>/Gain4' */

#define VehMtnInp_STOP_SEC_QmRamSlow32bitCleared
#include "VehMtnInp_MemMap.h"

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Gain5' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'VehMtnInp'
 * '<S1>'   : 'VehMtnInp/VehMtnInp_10ms_sys'
 * '<S2>'   : 'VehMtnInp/VehMtnInp_Init'
 * '<S3>'   : 'VehMtnInp/VehMtnInp_10ms_sys/BrkDataFil'
 * '<S4>'   : 'VehMtnInp/VehMtnInp_10ms_sys/Doc Block'
 * '<S5>'   : 'VehMtnInp/VehMtnInp_10ms_sys/EmNFil'
 * '<S6>'   : 'VehMtnInp/VehMtnInp_10ms_sys/If Then Else'
 * '<S7>'   : 'VehMtnInp/VehMtnInp_10ms_sys/Model Info'
 * '<S8>'   : 'VehMtnInp/VehMtnInp_10ms_sys/ThrDataFil'
 * '<S9>'   : 'VehMtnInp/VehMtnInp_10ms_sys/BrkDataFil/FirstOrderLPF2'
 * '<S10>'  : 'VehMtnInp/VehMtnInp_10ms_sys/EmNFil/FirstOrderLPF'
 * '<S11>'  : 'VehMtnInp/VehMtnInp_10ms_sys/ThrDataFil/FirstOrderLPF1'
 */
#endif                                 /* RTW_HEADER_VehMtnInp_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
