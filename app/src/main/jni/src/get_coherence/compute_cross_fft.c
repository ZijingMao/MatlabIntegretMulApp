/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: compute_cross_fft.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "compute_cross_fft.h"
#include "rdivide.h"
#include "fft.h"

/* Function Definitions */

/*
 * make it to column
 * Arguments    : const double x_data[]
 *                const double y_data[]
 *                const double win[170]
 *                creal_T P[1024]
 * Return Type  : void
 */
void compute_cross_fft(const double x_data[], const double y_data[], const
  double win[170], creal_T P[1024])
{
  double x[170];
  int i;
  creal_T Xx[1024];
  creal_T Yy[1024];
  creal_T b_Xx[1024];
  double d1;

  /*  Window the data */
  /*  compensates for the power of the window. */
  /*  fft the data */
  for (i = 0; i < 170; i++) {
    x[i] = x_data[i] * win[i];
  }

  b_fft(x, Xx);
  for (i = 0; i < 170; i++) {
    x[i] = y_data[i] * win[i];
  }

  b_fft(x, Yy);
  for (i = 0; i < 1024; i++) {
    b_Xx[i].re = Xx[i].re * Yy[i].re - Xx[i].im * -Yy[i].im;
    b_Xx[i].im = Xx[i].re * -Yy[i].im + Xx[i].im * Yy[i].re;
  }

  d1 = 0.0;
  for (i = 0; i < 170; i++) {
    d1 += win[i] * win[i];
  }

  rdivide(b_Xx, d1, P);

  /*  Auto spectrum. */
}

/*
 * File trailer for compute_cross_fft.c
 *
 * [EOF]
 */
