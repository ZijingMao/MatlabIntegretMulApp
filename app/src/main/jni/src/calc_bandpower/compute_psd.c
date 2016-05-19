/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: compute_psd.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "calc_bandpower.h"
#include "compute_psd.h"

/* Function Definitions */

/*
 * Arguments    : const creal_T Sxx[512]
 *                creal_T Pxx[257]
 * Return Type  : void
 */
void compute_psd(const creal_T Sxx[512], creal_T Pxx[257])
{
  int i;
  double ar;
  double ai;

  /*  EVEN */
  /*  Take only [0,pi] or [0,pi) */
  /*  Don't double unique Nyquist point */
  if (Sxx[0].im == 0.0) {
    Pxx[0].re = Sxx[0].re / 256.0;
    Pxx[0].im = 0.0;
  } else if (Sxx[0].re == 0.0) {
    Pxx[0].re = 0.0;
    Pxx[0].im = Sxx[0].im / 256.0;
  } else {
    Pxx[0].re = Sxx[0].re / 256.0;
    Pxx[0].im = Sxx[0].im / 256.0;
  }

  for (i = 0; i < 255; i++) {
    ar = 2.0 * Sxx[i + 1].re;
    ai = 2.0 * Sxx[i + 1].im;
    if (ai == 0.0) {
      Pxx[i + 1].re = ar / 256.0;
      Pxx[i + 1].im = 0.0;
    } else if (ar == 0.0) {
      Pxx[i + 1].re = 0.0;
      Pxx[i + 1].im = ai / 256.0;
    } else {
      Pxx[i + 1].re = ar / 256.0;
      Pxx[i + 1].im = ai / 256.0;
    }
  }

  if (Sxx[256].im == 0.0) {
    Pxx[256].re = Sxx[256].re / 256.0;
    Pxx[256].im = 0.0;
  } else if (Sxx[256].re == 0.0) {
    Pxx[256].re = 0.0;
    Pxx[256].im = Sxx[256].im / 256.0;
  } else {
    Pxx[256].re = Sxx[256].re / 256.0;
    Pxx[256].im = Sxx[256].im / 256.0;
  }

  /*  Scale by the sampling frequency to obtain the psd */
}

/*
 * File trailer for compute_psd.c
 *
 * [EOF]
 */
