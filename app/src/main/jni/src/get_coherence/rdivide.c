/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: rdivide.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "rdivide.h"

/* Function Definitions */

/*
 * Arguments    : const creal_T x[513]
 *                double y
 *                creal_T z[513]
 * Return Type  : void
 */
void b_rdivide(const creal_T x[513], double y, creal_T z[513])
{
  int i;
  for (i = 0; i < 513; i++) {
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
 * Arguments    : const creal_T x[1024]
 *                double y
 *                creal_T z[1024]
 * Return Type  : void
 */
void rdivide(const creal_T x[1024], double y, creal_T z[1024])
{
  int i;
  for (i = 0; i < 1024; i++) {
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
