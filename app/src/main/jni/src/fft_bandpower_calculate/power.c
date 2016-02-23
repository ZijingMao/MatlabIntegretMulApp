/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: power.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Feb-2016 19:46:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fft_bandpower_calculate.h"
#include "power.h"

/* Function Definitions */

/*
 * Arguments    : const double a_data[]
 *                const int a_size[2]
 *                double y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
void b_power(const double a_data[], const int a_size[2], double y_data[], int
             y_size[2])
{
  int k;
  y_size[0] = 1;
  y_size[1] = (unsigned char)a_size[1];
  for (k = 0; k + 1 <= a_size[1]; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }
}

/*
 * Arguments    : const double a[129]
 *                double y[129]
 * Return Type  : void
 */
void power(const double a[129], double y[129])
{
  int k;
  for (k = 0; k < 129; k++) {
    y[k] = a[k] * a[k];
  }
}

/*
 * File trailer for power.c
 *
 * [EOF]
 */
