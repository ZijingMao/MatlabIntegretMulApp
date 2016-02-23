/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: linspace.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Feb-2016 20:51:15
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fft_bandpower_calculate.h"
#include "linspace.h"

/* Function Definitions */

/*
 * Arguments    : double y[129]
 * Return Type  : void
 */
void linspace(double y[129])
{
  int k;
  y[128] = 1.0;
  y[0] = 0.0;
  for (k = 0; k < 127; k++) {
    y[1 + k] = (1.0 + (double)k) * 0.0078125;
  }
}

/*
 * File trailer for linspace.c
 *
 * [EOF]
 */
