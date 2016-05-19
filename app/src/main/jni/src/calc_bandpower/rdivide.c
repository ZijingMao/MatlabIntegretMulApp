/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: rdivide.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "calc_bandpower.h"
#include "rdivide.h"

/* Function Definitions */

/*
 * Arguments    : const creal_T x[512]
 *                double y
 *                creal_T z[512]
 * Return Type  : void
 */
void rdivide(const creal_T x[512], double y, creal_T z[512])
{
  int i;
  for (i = 0; i < 512; i++) {
    if (x[i].im == 0.0) {
      z[i].re = x[i].re / y;
      z[i].im = 0.0;
    } else if (x[i].re == 0.0) {
      z[i].re = 0.0;
      z[i].im = x[i].im / y;
    } else {
      z[i].re = x[i].re / y;
      z[i].im = x[i].im / y;
    }
  }
}

/*
 * File trailer for rdivide.c
 *
 * [EOF]
 */
