/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: matrix_multiplication.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 21-Feb-2016 20:55:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "matrix_multiplication.h"

/* Function Definitions */

/*
 * Arguments    : const double a[6]
 *                const double b[6]
 *                double c[4]
 * Return Type  : void
 */
void matrix_multiplication(const double a[6], const double b[6], double c[4])
{
  int i0;
  int i1;
  int i2;
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 2; i1++) {
      c[i0 + (i1 << 1)] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        c[i0 + (i1 << 1)] += a[i0 + (i2 << 1)] * b[i2 + 3 * i1];
      }
    }
  }
}

/*
 * File trailer for matrix_multiplication.c
 *
 * [EOF]
 */
