/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: compute_fft.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "calc_bandpower.h"
#include "compute_fft.h"
#include "rdivide.h"
#include "fft.h"

/* Function Definitions */

/*
 * make it to column
 * Arguments    : const double x_data[]
 *                const double win[256]
 *                creal_T P[512]
 * Return Type  : void
 */
void compute_fft(const double x_data[], const double win[256], creal_T P[512])
{
  double x[256];
  int i;
  creal_T Xx[512];
  creal_T b_Xx[512];
  double d0;

  /*  Window the data */
  /*  compensates for the power of the window. */
  /*  fft the data */
  for (i = 0; i < 256; i++) {
    x[i] = x_data[i] * win[i];
  }

  fft(x, Xx);
  for (i = 0; i < 512; i++) {
    b_Xx[i].re = Xx[i].re * Xx[i].re - Xx[i].im * -Xx[i].im;
    b_Xx[i].im = Xx[i].re * -Xx[i].im + Xx[i].im * Xx[i].re;
  }

  d0 = 0.0;
  for (i = 0; i < 256; i++) {
    d0 += win[i] * win[i];
  }

  rdivide(b_Xx, d0, P);

  /*  Auto spectrum. */
}

/*
 * File trailer for compute_fft.c
 *
 * [EOF]
 */
