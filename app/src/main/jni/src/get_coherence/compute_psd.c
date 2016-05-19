/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: compute_psd.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "compute_psd.h"
#include "rdivide.h"

/* Function Definitions */

/*
 * Arguments    : const creal_T Sxx[1024]
 *                double Fs
 *                creal_T Pxx[513]
 * Return Type  : void
 */
void compute_psd(const creal_T Sxx[1024], double Fs, creal_T Pxx[513])
{
  creal_T b_Sxx[513];
  int i;

  /*  EVEN */
  /*  Take only [0,pi] or [0,pi) */
  /*  Don't double unique Nyquist point */
  b_Sxx[0] = Sxx[0];
  for (i = 0; i < 511; i++) {
    b_Sxx[i + 1].re = 2.0 * Sxx[i + 1].re;
    b_Sxx[i + 1].im = 2.0 * Sxx[i + 1].im;
  }

  b_Sxx[512] = Sxx[512];
  b_rdivide(b_Sxx, Fs, Pxx);

  /*  Scale by the sampling frequency to obtain the psd */
}

/*
 * File trailer for compute_psd.c
 *
 * [EOF]
 */
