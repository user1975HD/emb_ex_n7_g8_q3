/*
 * File: fixedPoint_model_q3_d.c
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

#include "fixedPoint_model_q3_d.h"
#include "fixedPoint_model_q3_d_private.h"

/* Block states (default storage) */
DW_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_DW;

/* External inputs (root inport signals with default storage) */
ExtU_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fixedPoint_model_q3_d_T fixedPoint_model_q3_d_Y;

/* Real-time model */
static RT_MODEL_fixedPoint_model_q3__T fixedPoint_model_q3_d_M_;
RT_MODEL_fixedPoint_model_q3__T *const fixedPoint_model_q3_d_M =
  &fixedPoint_model_q3_d_M_;

/* Model step function */
void fixedPoint_model_q3_d_step(void)
{
  int16_T rtb_Delay;
  int16_T rtb_Delay1;
  int16_T rtb_Delay2;
  int16_T rtb_Delay4;
  int16_T rtb_Delay5;
  int16_T rtb_Delay6;
  int16_T rtb_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtb_Gain = (int16_T)(((int32_T)fixedPoint_model_q3_d_P.Gain_Gain *
                        fixedPoint_model_q3_d_U.In1) >> 26);

  /* Delay: '<Root>/Delay' */
  rtb_Delay = fixedPoint_model_q3_d_DW.Delay_DSTATE;

  /* Delay: '<Root>/Delay2' */
  rtb_Delay2 = fixedPoint_model_q3_d_DW.Delay2_DSTATE;

  /* Delay: '<Root>/Delay1' */
  rtb_Delay1 = fixedPoint_model_q3_d_DW.Delay1_DSTATE;

  /* Delay: '<Root>/Delay4' */
  rtb_Delay4 = fixedPoint_model_q3_d_Y.Out1;

  /* Delay: '<Root>/Delay6' */
  rtb_Delay6 = fixedPoint_model_q3_d_DW.Delay6_DSTATE;

  /* Delay: '<Root>/Delay5' */
  rtb_Delay5 = fixedPoint_model_q3_d_DW.Delay5_DSTATE;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Delay: '<Root>/Delay'
   *  Delay: '<Root>/Delay1'
   *  Delay: '<Root>/Delay2'
   *  Delay: '<Root>/Delay3'
   *  Delay: '<Root>/Delay4'
   *  Delay: '<Root>/Delay5'
   *  Delay: '<Root>/Delay6'
   *  Delay: '<Root>/Delay7'
   *  Gain: '<Root>/Gain'
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   *  Gain: '<Root>/Gain3'
   *  Gain: '<Root>/Gain4'
   *  Gain: '<Root>/Gain5'
   *  Gain: '<Root>/Gain6'
   *  Gain: '<Root>/Gain7'
   *  Gain: '<Root>/Gain8'
   *  Sum: '<Root>/Sum'
   *  Sum: '<Root>/Sum2'
   *  Sum: '<Root>/Sum4'
   *  Sum: '<Root>/Sum5'
   *  Sum: '<Root>/Sum7'
   */
  fixedPoint_model_q3_d_Y.Out1 = ((((((((int16_T)(((int32_T)
    fixedPoint_model_q3_d_P.Gain1_Gain * fixedPoint_model_q3_d_DW.Delay_DSTATE) >>
    12) + rtb_Gain) + (int16_T)(((int32_T)fixedPoint_model_q3_d_P.Gain2_Gain *
    fixedPoint_model_q3_d_DW.Delay2_DSTATE) >> 12)) + (int16_T)(((int32_T)
    fixedPoint_model_q3_d_P.Gain3_Gain * fixedPoint_model_q3_d_DW.Delay1_DSTATE)
    >> 12)) + (int16_T)(((int32_T)fixedPoint_model_q3_d_P.Gain4_Gain *
    fixedPoint_model_q3_d_DW.Delay3_DSTATE) >> 14)) - (int16_T)(((int32_T)
    fixedPoint_model_q3_d_P.Gain5_Gain * rtb_Delay4) >> 13)) - (int16_T)
    (((int32_T)fixedPoint_model_q3_d_P.Gain6_Gain *
      fixedPoint_model_q3_d_DW.Delay6_DSTATE) >> 12)) - (int16_T)(((int32_T)
    fixedPoint_model_q3_d_P.Gain7_Gain * fixedPoint_model_q3_d_DW.Delay5_DSTATE)
    >> 13)) - (int16_T)(((int32_T)fixedPoint_model_q3_d_P.Gain8_Gain *
    fixedPoint_model_q3_d_DW.Delay7_DSTATE) >> 16);

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  Gain: '<Root>/Gain'
   */
  fixedPoint_model_q3_d_DW.Delay_DSTATE = rtb_Gain;

  /* Update for Delay: '<Root>/Delay2' incorporates:
   *  Delay: '<Root>/Delay'
   */
  fixedPoint_model_q3_d_DW.Delay2_DSTATE = rtb_Delay;

  /* Update for Delay: '<Root>/Delay1' incorporates:
   *  Delay: '<Root>/Delay2'
   */
  fixedPoint_model_q3_d_DW.Delay1_DSTATE = rtb_Delay2;

  /* Update for Delay: '<Root>/Delay3' incorporates:
   *  Delay: '<Root>/Delay1'
   */
  fixedPoint_model_q3_d_DW.Delay3_DSTATE = rtb_Delay1;

  /* Update for Delay: '<Root>/Delay6' incorporates:
   *  Delay: '<Root>/Delay4'
   */
  fixedPoint_model_q3_d_DW.Delay6_DSTATE = rtb_Delay4;

  /* Update for Delay: '<Root>/Delay5' incorporates:
   *  Delay: '<Root>/Delay6'
   */
  fixedPoint_model_q3_d_DW.Delay5_DSTATE = rtb_Delay6;

  /* Update for Delay: '<Root>/Delay7' incorporates:
   *  Delay: '<Root>/Delay5'
   */
  fixedPoint_model_q3_d_DW.Delay7_DSTATE = rtb_Delay5;
}

/* Model initialize function */
void fixedPoint_model_q3_d_initialize(void)
{
  /* InitializeConditions for Delay: '<Root>/Delay' */
  fixedPoint_model_q3_d_DW.Delay_DSTATE =
    fixedPoint_model_q3_d_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay2' */
  fixedPoint_model_q3_d_DW.Delay2_DSTATE =
    fixedPoint_model_q3_d_P.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  fixedPoint_model_q3_d_DW.Delay1_DSTATE =
    fixedPoint_model_q3_d_P.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay3' */
  fixedPoint_model_q3_d_DW.Delay3_DSTATE =
    fixedPoint_model_q3_d_P.Delay3_InitialCondition;

  /* InitializeConditions for Sum: '<Root>/Sum1' incorporates:
   *  Delay: '<Root>/Delay4'
   */
  fixedPoint_model_q3_d_Y.Out1 = fixedPoint_model_q3_d_P.Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay6' */
  fixedPoint_model_q3_d_DW.Delay6_DSTATE =
    fixedPoint_model_q3_d_P.Delay6_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay5' */
  fixedPoint_model_q3_d_DW.Delay5_DSTATE =
    fixedPoint_model_q3_d_P.Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay7' */
  fixedPoint_model_q3_d_DW.Delay7_DSTATE =
    fixedPoint_model_q3_d_P.Delay7_InitialCondition;
}

/* Model terminate function */
void fixedPoint_model_q3_d_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
