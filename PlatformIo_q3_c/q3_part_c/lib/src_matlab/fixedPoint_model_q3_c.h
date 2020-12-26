/*
 * File: fixedPoint_model_q3_c.h
 *
 * Code generated for Simulink model 'fixedPoint_model_q3_c'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Dec 24 21:10:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fixedPoint_model_q3_c_h_
#define RTW_HEADER_fixedPoint_model_q3_c_h_
#ifndef fixedPoint_model_q3_c_COMMON_INCLUDES_
#define fixedPoint_model_q3_c_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                              /* fixedPoint_model_q3_c_COMMON_INCLUDES_ */

#include "fixedPoint_model_q3_c_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S1>/Delay' */
  real_T Delay2_DSTATE;                /* '<S1>/Delay2' */
  real_T Delay1_DSTATE;                /* '<S1>/Delay1' */
  real_T Delay3_DSTATE;                /* '<S1>/Delay3' */
  real_T Delay6_DSTATE;                /* '<S1>/Delay6' */
  real_T Delay5_DSTATE;                /* '<S1>/Delay5' */
  real_T Delay7_DSTATE;                /* '<S1>/Delay7' */
} DW_fixedPoint_model_q3_c_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_fixedPoint_model_q3_c_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_fixedPoint_model_q3_c_T;

/* Real-time Model Data Structure */
struct tag_RTM_fixedPoint_model_q3_c_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_Y;

/* Model entry point functions */
extern void fixedPoint_model_q3_c_initialize(void);
extern void fixedPoint_model_q3_c_step(void);
extern void fixedPoint_model_q3_c_terminate(void);

/* Real-time Model object */
extern RT_MODEL_fixedPoint_model_q3__T *const fixedPoint_model_q3_c_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Gain4' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'fixedPoint_model_q3_c'
 * '<S1>'   : 'fixedPoint_model_q3_c/Subsystem'
 */
#endif                                 /* RTW_HEADER_fixedPoint_model_q3_c_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
