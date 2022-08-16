/*
 * File: TqSplt.h
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

#ifndef RTW_HEADER_TqSplt_h_
#define RTW_HEADER_TqSplt_h_
#include <math.h>
#ifndef TqSplt_COMMON_INCLUDES_
#define TqSplt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TqSplt.h"
#endif                                 /* TqSplt_COMMON_INCLUDES_ */

#include "TqSplt_types.h"

/* Macros for accessing real-time model data structure */

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Nd_Lookup_Tbl1_tableData
   * Referenced by: '<S8>/Nd_Lookup_Tbl1'
   */
  float32 Nd_Lookup_Tbl1_tableData[2];
} ConstP_TqSplt_T;

/* Static Memory for Internal Data */

/* SwAddrMethod QmRamSlow32bitCleared for Internal Data */
#define TqSplt_START_SEC_QmRamSlow32bitCleared
#include "TqSplt_MemMap.h"

extern float32 RgnAmnt_sig;            /* '<S14>/Switch1' */
extern float32 EmTqReqPrel_sig;        /* '<S4>/Add3' */
extern float32 FoudnBrkTqReqPrel_sig;  /* '<S8>/Abs1' */
extern float32 FoudnBrkTqReq_sig;      /* '<S6>/Add4' */
extern float32 EmTqReqLimd_sig;        /* '<S10>/Switch' */

#define TqSplt_STOP_SEC_QmRamSlow32bitCleared
#include "TqSplt_MemMap.h"

/* Constant parameters (default storage) */
extern const ConstP_TqSplt_T TqSplt_ConstP = {1000.0,1000.0};

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
 * '<Root>' : 'TqSplt'
 * '<S1>'   : 'TqSplt/TqSplt_10ms_sys'
 * '<S2>'   : 'TqSplt/TqSplt_Init'
 * '<S3>'   : 'TqSplt/TqSplt_10ms_sys/Doc Block'
 * '<S4>'   : 'TqSplt/TqSplt_10ms_sys/EmTqReq'
 * '<S5>'   : 'TqSplt/TqSplt_10ms_sys/EmTqReqLimr'
 * '<S6>'   : 'TqSplt/TqSplt_10ms_sys/FoudnBrkTqReq'
 * '<S7>'   : 'TqSplt/TqSplt_10ms_sys/Model Info'
 * '<S8>'   : 'TqSplt/TqSplt_10ms_sys/RgnTqReq'
 * '<S9>'   : 'TqSplt/TqSplt_10ms_sys/EmTqReq/If Then Else'
 * '<S10>'  : 'TqSplt/TqSplt_10ms_sys/EmTqReqLimr/Limiter'
 * '<S11>'  : 'TqSplt/TqSplt_10ms_sys/FoudnBrkTqReq/If Then Else2'
 * '<S12>'  : 'TqSplt/TqSplt_10ms_sys/RgnTqReq/If Then Else'
 * '<S13>'  : 'TqSplt/TqSplt_10ms_sys/RgnTqReq/If Then Else1'
 * '<S14>'  : 'TqSplt/TqSplt_10ms_sys/RgnTqReq/If Then Else2'
 */
#endif                                 /* RTW_HEADER_TqSplt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
