/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: linspace.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "linspace.h"

/* Function Definitions */

/*
 * Arguments    : double y[513]
 * Return Type  : void
 */
void linspace(double y[513])
{
  int k;
  y[512] = 1.0;
  y[0] = 0.0;
  for (k = 0; k < 511; k++) {
    y[1 + k] = (1.0 + (double)k) * 0.001953125;
  }
}

/*
 * File trailer for linspace.c
 *
 * [EOF]
 */
