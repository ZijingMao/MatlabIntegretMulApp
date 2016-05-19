/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fir1_window_initialize.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "fir1_window_initialize.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void fir1_window_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * File trailer for fir1_window_initialize.c
 *
 * [EOF]
 */
