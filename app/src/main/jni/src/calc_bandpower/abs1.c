/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: abs1.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "calc_bandpower.h"
#include "abs1.h"

/* Function Declarations */
static double rt_hypotd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_hypotd_snf(double u0, double u1)
{
  double y;
  double a;
  double b;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = b * sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * sqrt(b * b + 1.0);
  } else if (rtIsNaN(b)) {
    y = b;
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

/*
 * Arguments    : const creal_T x[257]
 *                double y[257]
 * Return Type  : void
 */
void b_abs(const creal_T x[257], double y[257])
{
  int k;
  for (k = 0; k < 257; k++) {
    y[k] = rt_hypotd_snf(x[k].re, x[k].im);
  }
}

/*
 * File trailer for abs1.c
 *
 * [EOF]
 */
