/*
 * File: fixedPoint_model_q3_d.h
 *
 * Code generated for Simulink model 'fixedPoint_model_q3_d'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Dec 26 21:32:27 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fixedPoint_model_q3_d_h_
#define RTW_HEADER_fixedPoint_model_q3_d_h_
#include <stddef.h>
#ifndef fixedPoint_model_q3_d_COMMON_INCLUDES_
#define fixedPoint_model_q3_d_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                              /* fixedPoint_model_q3_d_COMMON_INCLUDES_ */

#include "fixedPoint_model_q3_d_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int16_T Delay_DSTATE;                /* '<Root>/Delay' */
  int16_T Delay2_DSTATE;               /* '<Root>/Delay2' */
  int16_T Delay1_DSTATE;               /* '<Root>/Delay1' */
  int16_T Delay3_DSTATE;               /* '<Root>/Delay3' */
  int16_T Delay6_DSTATE;               /* '<Root>/Delay6' */
  int16_T Delay5_DSTATE;               /* '<Root>/Delay5' */
  int16_T Delay7_DSTATE;               /* '<Root>/Delay7' */
} DW_fixedPoint_model_q3_d_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T In1;                         /* '<Root>/In1' */
} ExtU_fixedPoint_model_q3_d_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T Out1;                        /* '<Root>/Out1' */
} ExtY_fixedPoint_model_q3_d_T;

/* Parameters (default storage) */
struct P_fixedPoint_model_q3_d_T_ {
  int16_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
  int16_T Gain3_Gain;                  /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
  int16_T Gain6_Gain;                  /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<Root>/Gain6'
                                        */
  int16_T Gain5_Gain;                  /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<Root>/Gain5'
                                        */
  int16_T Gain7_Gain;                  /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<Root>/Gain7'
                                        */
  int16_T Gain4_Gain;                  /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<Root>/Gain4'
                                        */
  int16_T Gain8_Gain;                  /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<Root>/Gain8'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  int16_T Delay_InitialCondition;  /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<Root>/Delay'
                                    */
  int16_T Delay2_InitialCondition;/* Computed Parameter: Delay2_InitialCondition
                                   * Referenced by: '<Root>/Delay2'
                                   */
  int16_T Delay1_InitialCondition;/* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<Root>/Delay1'
                                   */
  int16_T Delay3_InitialCondition;/* Computed Parameter: Delay3_InitialCondition
                                   * Referenced by: '<Root>/Delay3'
                                   */
  int16_T Delay4_InitialCondition;/* Computed Parameter: Delay4_InitialCondition
                                   * Referenced by: '<Root>/Delay4'
                                   */
  int16_T Delay6_InitialCondition;/* Computed Parameter: Delay6_InitialCondition
                                   * Referenced by: '<Root>/Delay6'
                                   */
  int16_T Delay5_InitialCondition;/* Computed Parameter: Delay5_InitialCondition
                                   * Referenced by: '<Root>/Delay5'
                                   */
  int16_T Delay7_InitialCondition;/* Computed Parameter: Delay7_InitialCondition
                                   * Referenced by: '<Root>/Delay7'
                                   */
};

/* Real-time Model Data Structure */
struct tag_RTM_fixedPoint_model_q3_d_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_P;

/* Block states (default storage) */
extern DW_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_Y;

/* Model entry point functions */
extern void fixedPoint_model_q3_d_initialize(void);
extern void fixedPoint_model_q3_d_step(void);
extern void fixedPoint_model_q3_d_terminate(void);

/* Real-time Model object */
extern RT_MODEL_fixedPoint_model_q3__T *const fixedPoint_model_q3_d_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'fixedPoint_model_q3_d'
 */
#endif                                 /* RTW_HEADER_fixedPoint_model_q3_d_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
