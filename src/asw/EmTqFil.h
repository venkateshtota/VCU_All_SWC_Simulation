/*
 * File: EmTqFil.h
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

#ifndef RTW_HEADER_EmTqFil_h_
#define RTW_HEADER_EmTqFil_h_
#include <string.h>
#ifndef EmTqFil_COMMON_INCLUDES_
#define EmTqFil_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EmTqFil.h"
#endif                                 /* EmTqFil_COMMON_INCLUDES_ */

#include "EmTqFil_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EmTqFil_T {
  float32 UnitDelay_DSTATE;            /* '<S7>/Unit Delay' */
} DW_EmTqFil_T;

/* Block states (default storage) */
extern DW_EmTqFil_T EmTqFil_DW;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define EmTqFil_START_SEC_QmRamSlow32bitCleared
#include "EmTqFil_MemMap.h"

extern float32 EmTqFil_EmTqReqFild_sig;/* '<S7>/Sum1' */

#define EmTqFil_STOP_SEC_QmRamSlow32bitCleared
#include "EmTqFil_MemMap.h"

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
 * '<Root>' : 'EmTqFil'
 * '<S1>'   : 'EmTqFil/EmTqFil_10ms_sys'
 * '<S2>'   : 'EmTqFil/EmTqFil_Init'
 * '<S3>'   : 'EmTqFil/EmTqFil_10ms_sys/Doc Block'
 * '<S4>'   : 'EmTqFil/EmTqFil_10ms_sys/FilA ndRateLimr'
 * '<S5>'   : 'EmTqFil/EmTqFil_10ms_sys/Model Info'
 * '<S6>'   : 'EmTqFil/EmTqFil_10ms_sys/RateLimBnd'
 * '<S7>'   : 'EmTqFil/EmTqFil_10ms_sys/FilA ndRateLimr/LpFilWithRateLimr'
 * '<S8>'   : 'EmTqFil/EmTqFil_10ms_sys/FilA ndRateLimr/LpFilWithRateLimr/Limiter1'
 * '<S9>'   : 'EmTqFil/EmTqFil_10ms_sys/RateLimBnd/Enumerated Constant'
 * '<S10>'  : 'EmTqFil/EmTqFil_10ms_sys/RateLimBnd/If Then Else'
 */
#endif                                 /* RTW_HEADER_EmTqFil_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
