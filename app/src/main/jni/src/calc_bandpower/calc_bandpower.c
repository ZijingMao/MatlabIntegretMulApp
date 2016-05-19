/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: calc_bandpower.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "calc_bandpower.h"
#include "abs1.h"
#include "pwelch_trans_v2.h"

/* Function Definitions */

/*
 * only read one dimen data
 * Arguments    : const double data[768]
 *                double pxxdB[257]
 *                double f[257]
 * Return Type  : void
 */
void calc_bandpower(const double data[768], double pxxdB[257], double f[257])
{
  creal_T pxx[257];
  int k;

  /* *2 since diveded by 2 later */
  pwelch_trans_v2(data, pxx, f);

  /*  get the db */
  b_abs(pxx, pxxdB);
  for (k = 0; k < 257; k++) {
    pxxdB[k] = 10.0 * log10(pxxdB[k]);
  }
}

/*
 * File trailer for calc_bandpower.c
 *
 * [EOF]
 */
