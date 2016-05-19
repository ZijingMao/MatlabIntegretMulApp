/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: power.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "power.h"

/* Function Definitions */

/*
 * Arguments    : const double a[513]
 *                double y[513]
 * Return Type  : void
 */
void power(const double a[513], double y[513])
{
  int k;
  for (k = 0; k < 513; k++) {
    y[k] = a[k] * a[k];
  }
}

/*
 * File trailer for power.c
 *
 * [EOF]
 */
