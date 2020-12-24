/*
 * File: fixedPoint_model_q3_c.c
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

#include "fixedPoint_model_q3_c.h"
#include "fixedPoint_model_q3_c_private.h"

/* Block states (default storage) */
DW_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_DW;

/* External inputs (root inport signals with default storage) */
ExtU_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fixedPoint_model_q3_c_T fixedPoint_model_q3_c_Y;

/* Real-time model */
static RT_MODEL_fixedPoint_model_q3__T fixedPoint_model_q3_c_M_;
RT_MODEL_fixedPoint_model_q3__T *const fixedPoint_model_q3_c_M =
    &fixedPoint_model_q3_c_M_;

/* Model step function */
void fixedPoint_model_q3_c_step(void)
{
  real_T rtb_Delay;
  real_T rtb_Delay1;
  real_T rtb_Delay2;
  real_T rtb_Delay4;
  real_T rtb_Delay5;
  real_T rtb_Delay6;
  real_T rtb_Gain;

  /* Gain: '<S1>/Gain' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtb_Gain = 0.00029137 * fixedPoint_model_q3_c_U.In1;

  /* Delay: '<S1>/Delay' */
  rtb_Delay = fixedPoint_model_q3_c_DW.Delay_DSTATE;

  /* Delay: '<S1>/Delay2' */
  rtb_Delay2 = fixedPoint_model_q3_c_DW.Delay2_DSTATE;

  /* Delay: '<S1>/Delay1' */
  rtb_Delay1 = fixedPoint_model_q3_c_DW.Delay1_DSTATE;

  /* Delay: '<S1>/Delay4' */
  rtb_Delay4 = fixedPoint_model_q3_c_Y.Out1;

  /* Delay: '<S1>/Delay6' */
  rtb_Delay6 = fixedPoint_model_q3_c_DW.Delay6_DSTATE;

  /* Delay: '<S1>/Delay5' */
  rtb_Delay5 = fixedPoint_model_q3_c_DW.Delay5_DSTATE;

  /* Sum: '<S1>/Sum1' incorporates:
   *  Delay: '<S1>/Delay'
   *  Delay: '<S1>/Delay1'
   *  Delay: '<S1>/Delay2'
   *  Delay: '<S1>/Delay3'
   *  Delay: '<S1>/Delay5'
   *  Delay: '<S1>/Delay6'
   *  Delay: '<S1>/Delay7'
   *  Gain: '<S1>/Gain1'
   *  Gain: '<S1>/Gain2'
   *  Gain: '<S1>/Gain3'
   *  Gain: '<S1>/Gain5'
   *  Gain: '<S1>/Gain6'
   *  Gain: '<S1>/Gain7'
   *  Gain: '<S1>/Gain8'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum2'
   *  Sum: '<S1>/Sum3'
   *  Sum: '<S1>/Sum4'
   *  Sum: '<S1>/Sum5'
   *  Sum: '<S1>/Sum6'
   *  Sum: '<S1>/Sum7'
   */
  fixedPoint_model_q3_c_Y.Out1 = ((((4.0 *
                                         fixedPoint_model_q3_c_DW.Delay1_DSTATE +
                                     fixedPoint_model_q3_c_DW.Delay3_DSTATE) +
                                    6.0 *
                                        fixedPoint_model_q3_c_DW.Delay2_DSTATE) +
                                   4.0 *
                                       fixedPoint_model_q3_c_DW.Delay_DSTATE) +
                                  rtb_Gain) -
                                 (((-2.24604368202622 *
                                        fixedPoint_model_q3_c_DW.Delay5_DSTATE +
                                    0.473506452939151 *
                                        fixedPoint_model_q3_c_DW.Delay7_DSTATE) +
                                   4.03376839272126 *
                                       fixedPoint_model_q3_c_DW.Delay6_DSTATE) +
                                  -3.2565693109588 * rtb_Delay4);

  /* Update for Delay: '<S1>/Delay' */
  fixedPoint_model_q3_c_DW.Delay_DSTATE = rtb_Gain;

  /* Update for Delay: '<S1>/Delay2' */
  fixedPoint_model_q3_c_DW.Delay2_DSTATE = rtb_Delay;

  /* Update for Delay: '<S1>/Delay1' */
  fixedPoint_model_q3_c_DW.Delay1_DSTATE = rtb_Delay2;

  /* Update for Delay: '<S1>/Delay3' */
  fixedPoint_model_q3_c_DW.Delay3_DSTATE = rtb_Delay1;

  /* Update for Delay: '<S1>/Delay6' */
  fixedPoint_model_q3_c_DW.Delay6_DSTATE = rtb_Delay4;

  /* Update for Delay: '<S1>/Delay5' */
  fixedPoint_model_q3_c_DW.Delay5_DSTATE = rtb_Delay6;

  /* Update for Delay: '<S1>/Delay7' */
  fixedPoint_model_q3_c_DW.Delay7_DSTATE = rtb_Delay5;
}

/* Model initialize function */
void fixedPoint_model_q3_c_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void fixedPoint_model_q3_c_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
