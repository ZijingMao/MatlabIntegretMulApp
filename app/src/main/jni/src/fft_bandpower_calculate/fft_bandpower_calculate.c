/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fft_bandpower_calculate.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Feb-2016 20:51:15
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fft_bandpower_calculate.h"
#include "sum.h"
#include "power.h"
#include "abs1.h"
#include "linspace.h"
#include "fft.h"

/* Function Definitions */

/*
 * fft_bandpower_calculate
 *    data: the signal of 1 dimension vector
 *    Fs: the frequency provide
 *    band: the band provided, should have upper and lower bound
 * Arguments    : const double data[256]
 *                double Fs
 *                double band[2]
 *                double *totalpower
 *                double *pband
 * Return Type  : void
 */
void fft_bandpower_calculate(const double data[256], double Fs, double band[2],
  double *totalpower, double *pband)
{
  creal_T A[256];
  double y;
  double f[129];
  int i;
  creal_T b_A[256];
  creal_T c_A[129];
  double c_power[129];
  boolean_T bv0[129];
  boolean_T bv1[129];
  double dv0[129];
  unsigned char tmp_data[129];
  int trueCount;
  int partialTrueCount;
  double power_data[129];
  int power_size[2];
  int tmp_size[2];
  double b_tmp_data[129];

  /*  get of the data */
  fft(data, A);
  y = Fs / 2.0;
  linspace(f);
  for (i = 0; i < 129; i++) {
    f[i] *= y;
  }

  for (i = 0; i < 256; i++) {
    if (A[i].im == 0.0) {
      b_A[i].re = A[i].re / 256.0;
      b_A[i].im = 0.0;
    } else if (A[i].re == 0.0) {
      b_A[i].re = 0.0;
      b_A[i].im = A[i].im / 256.0;
    } else {
      b_A[i].re = A[i].re / 256.0;
      b_A[i].im = A[i].im / 256.0;
    }
  }

  memcpy(&c_A[0], &b_A[0], 129U * sizeof(creal_T));
  b_abs(c_A, c_power);
  for (i = 0; i < 129; i++) {
    c_power[i] *= 2.0;
  }

  /*  see if band power is in side the frequency range */
  if (band[1] > f[128]) {
    band[1] = f[128];
  }

  if (band[0] < f[0]) {
    /*  if the band lower bound is less than f(1) */
    band[0] = f[0];
  }

  for (i = 0; i < 129; i++) {
    bv0[i] = (f[i] >= band[0]);
    bv1[i] = (f[i] <= band[1]);
  }

  power(c_power, dv0);
  *totalpower = sum(dv0);
  trueCount = 0;
  for (i = 0; i < 129; i++) {
    if (bv0[i] && bv1[i]) {
      trueCount++;
    }
  }

  partialTrueCount = 0;
  for (i = 0; i < 129; i++) {
    if (bv0[i] && bv1[i]) {
      tmp_data[partialTrueCount] = (unsigned char)(i + 1);
      partialTrueCount++;
    }
  }

  power_size[0] = 1;
  power_size[1] = trueCount;
  for (i = 0; i < trueCount; i++) {
    power_data[i] = c_power[tmp_data[i] - 1];
  }

  b_power(power_data, power_size, b_tmp_data, tmp_size);
  *pband = b_sum(b_tmp_data, tmp_size);
}

/*
 * File trailer for fft_bandpower_calculate.c
 *
 * [EOF]
 */
