/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: get_coherence.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 18-May-2016 16:04:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "get_coherence.h"
#include "abs1.h"
#include "cpsd_trans.h"
#include "pwelch_trans.h"

/* Function Definitions */

/*
 * Arguments    : const double x[768]
 *                const double y[768]
 *                double fs
 *                double mscxy[513]
 *                double frequency_list[513]
 * Return Type  : void
 */
void get_coherence(const double x[768], const double y[768], double fs, double
                   mscxy[513], double frequency_list[513])
{
  creal_T pxx[513];
  double unusedU0[513];
  creal_T pyy[513];
  double Cxy[513];
  creal_T b_Cxy[513];
  int i;
  double pxx_re;
  double pxx_im;
  double brm;
  double bim;
  double s;

  /*  get of the data */
  pwelch_trans(x, fs, pxx, frequency_list);

  /* Cxx = 2 * abs(pxx(1:NFFT/2+1)); */
  pwelch_trans(y, fs, pyy, unusedU0);

  /* Cyy = 2 * abs(pyy(1:NFFT/2+1)); */
  cpsd_trans(x, y, fs, Cxy, unusedU0);
  for (i = 0; i < 513; i++) {
    pxx_re = pxx[i].re * pyy[i].re - pxx[i].im * pyy[i].im;
    pxx_im = pxx[i].re * pyy[i].im + pxx[i].im * pyy[i].re;
    if (pxx_im == 0.0) {
      b_Cxy[i].re = Cxy[i] / pxx_re;
      b_Cxy[i].im = 0.0;
    } else if (pxx_re == 0.0) {
      if (Cxy[i] == 0.0) {
        b_Cxy[i].re = 0.0 / pxx_im;
        b_Cxy[i].im = 0.0;
      } else {
        b_Cxy[i].re = 0.0;
        b_Cxy[i].im = -(Cxy[i] / pxx_im);
      }
    } else {
      brm = fabs(pxx_re);
      bim = fabs(pxx_im);
      if (brm > bim) {
        s = pxx_im / pxx_re;
        bim = pxx_re + s * pxx_im;
        b_Cxy[i].re = (Cxy[i] + s * 0.0) / bim;
        b_Cxy[i].im = (0.0 - s * Cxy[i]) / bim;
      } else if (bim == brm) {
        if (pxx_re > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        if (pxx_im > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        b_Cxy[i].re = (Cxy[i] * s + 0.0 * bim) / brm;
        b_Cxy[i].im = (0.0 * s - Cxy[i] * bim) / brm;
      } else {
        s = pxx_re / pxx_im;
        bim = pxx_im + s * pxx_re;
        b_Cxy[i].re = s * Cxy[i] / bim;
        b_Cxy[i].im = (s * 0.0 - Cxy[i]) / bim;
      }
    }
  }

  b_abs(b_Cxy, mscxy);

  /*  mscxy = zeros(1, length(Cxy)); */
  /*  for idx = 1:length(Cxy) */
  /*      mscxy(idx) = abs(Cxy(idx)/denomicator(idx)); */
  /*  end */
}

/*
 * File trailer for get_coherence.c
 *
 * [EOF]
 */
