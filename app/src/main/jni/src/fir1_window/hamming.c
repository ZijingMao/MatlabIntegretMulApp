/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: hamming.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "hamming.h"
#include "fir1_window_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : double m
 *                emxArray_real_T *w
 * Return Type  : void
 */
void hamming(double m, emxArray_real_T *w)
{
  double y;
  int n;
  double anew;
  double apnd;
  double ndbl;
  double cdiff;
  emxArray_real_T *b_y;
  int k;
  int nm1d2;
  emxArray_real_T *c_y;
  y = 1.0 / (m - 1.0);
  if (rtIsNaN(y)) {
    n = 1;
    anew = rtNaN;
    apnd = 1.0;
  } else if ((y == 0.0) || (y < 0.0)) {
    n = 0;
    anew = 0.0;
    apnd = 1.0;
  } else if (rtIsInf(y)) {
    n = 1;
    anew = 0.0;
    apnd = 1.0;
  } else {
    anew = 0.0;
    ndbl = floor(1.0 / y + 0.5);
    apnd = ndbl * y;
    if (y > 0.0) {
      cdiff = apnd - 1.0;
    } else {
      cdiff = 1.0 - apnd;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16) {
      ndbl++;
      apnd = 1.0;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) * y;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      n = (int)ndbl;
    } else {
      n = 0;
    }
  }

  emxInit_real_T(&b_y, 2);
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = n;
  emxEnsureCapacity((emxArray__common *)b_y, k, (int)sizeof(double));
  if (n > 0) {
    b_y->data[0] = anew;
    if (n > 1) {
      b_y->data[n - 1] = apnd;
      k = n - 1;
      nm1d2 = k / 2;
      for (k = 1; k < nm1d2; k++) {
        ndbl = (double)k * y;
        b_y->data[k] = anew + ndbl;
        b_y->data[(n - k) - 1] = apnd - ndbl;
      }

      if (nm1d2 << 1 == n - 1) {
        b_y->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        ndbl = (double)nm1d2 * y;
        b_y->data[nm1d2] = anew + ndbl;
        b_y->data[nm1d2 + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T1(&c_y, 1);
  k = c_y->size[0];
  c_y->size[0] = b_y->size[1];
  emxEnsureCapacity((emxArray__common *)c_y, k, (int)sizeof(double));
  nm1d2 = b_y->size[1];
  for (k = 0; k < nm1d2; k++) {
    c_y->data[k] = 6.2831853071795862 * b_y->data[b_y->size[0] * k];
  }

  emxFree_real_T(&b_y);
  k = w->size[0];
  w->size[0] = c_y->size[0];
  emxEnsureCapacity((emxArray__common *)w, k, (int)sizeof(double));
  nm1d2 = c_y->size[0];
  for (k = 0; k < nm1d2; k++) {
    w->data[k] = c_y->data[k];
  }

  for (k = 0; k + 1 <= c_y->size[0]; k++) {
    w->data[k] = cos(w->data[k]);
  }

  emxFree_real_T(&c_y);
  k = w->size[0];
  emxEnsureCapacity((emxArray__common *)w, k, (int)sizeof(double));
  nm1d2 = w->size[0];
  for (k = 0; k < nm1d2; k++) {
    w->data[k] = 0.54347826086956519 - 0.45652173913043481 * w->data[k];
  }
}

/*
 * File trailer for hamming.c
 *
 * [EOF]
 */
