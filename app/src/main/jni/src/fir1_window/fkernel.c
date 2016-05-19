/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fkernel.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "fkernel.h"
#include "fir1_window_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : double m
 *                double f
 *                const emxArray_real_T *w
 *                emxArray_real_T *b
 * Return Type  : void
 */
void fkernel(double m, double f, const emxArray_real_T *w, emxArray_real_T *b)
{
  int k;
  int nm1d2;
  double anew;
  double y;
  int n;
  double apnd;
  double ndbl;
  double cdiff;
  double absa;
  double absb;
  emxArray_real_T *b_m;
  emxArray_int32_T *r0;
  emxArray_real_T *b_y;
  emxArray_real_T *x;
  k = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = w->size[1];
  emxEnsureCapacity((emxArray__common *)b, k, (int)sizeof(double));
  nm1d2 = w->size[1];
  for (k = 0; k < nm1d2; k++) {
    b->data[k] = 0.0;
  }

  anew = -m / 2.0;
  y = m / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(y)) {
    n = 1;
    anew = rtNaN;
    apnd = y;
  } else if (y < anew) {
    n = 0;
    apnd = y;
  } else if (rtIsInf(anew) || rtIsInf(y)) {
    n = 1;
    anew = rtNaN;
    apnd = y;
  } else {
    ndbl = floor((y - anew) + 0.5);
    apnd = anew + ndbl;
    cdiff = apnd - y;
    absa = fabs(anew);
    absb = fabs(y);
    if ((absa >= absb) || rtIsNaN(absb)) {
      absb = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * absb) {
      ndbl++;
      apnd = y;
    } else if (cdiff > 0.0) {
      apnd = anew + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      n = (int)ndbl;
    } else {
      n = 0;
    }
  }

  emxInit_real_T(&b_m, 2);
  k = b_m->size[0] * b_m->size[1];
  b_m->size[0] = 1;
  b_m->size[1] = n;
  emxEnsureCapacity((emxArray__common *)b_m, k, (int)sizeof(double));
  if (n > 0) {
    b_m->data[0] = anew;
    if (n > 1) {
      b_m->data[n - 1] = apnd;
      k = n - 1;
      nm1d2 = k / 2;
      for (k = 1; k < nm1d2; k++) {
        b_m->data[k] = anew + (double)k;
        b_m->data[(n - k) - 1] = apnd - (double)k;
      }

      if (nm1d2 << 1 == n - 1) {
        b_m->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        b_m->data[nm1d2] = anew + (double)nm1d2;
        b_m->data[nm1d2 + 1] = apnd - (double)nm1d2;
      }
    }
  }

  emxInit_int32_T(&r0, 2);
  n = b_m->size[1] - 1;
  nm1d2 = 0;
  for (k = 0; k <= n; k++) {
    if (b_m->data[k] == 0.0) {
      nm1d2++;
    }
  }

  k = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = nm1d2;
  emxEnsureCapacity((emxArray__common *)r0, k, (int)sizeof(int));
  nm1d2 = 0;
  for (k = 0; k <= n; k++) {
    if (b_m->data[k] == 0.0) {
      r0->data[nm1d2] = k + 1;
      nm1d2++;
    }
  }

  nm1d2 = r0->size[0] * r0->size[1];
  for (k = 0; k < nm1d2; k++) {
    b->data[r0->data[k] - 1] = 6.2831853071795862 * f;
  }

  /*  No division by zero */
  n = b_m->size[1] - 1;
  nm1d2 = 0;
  for (k = 0; k <= n; k++) {
    if (b_m->data[k] != 0.0) {
      nm1d2++;
    }
  }

  k = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = nm1d2;
  emxEnsureCapacity((emxArray__common *)r0, k, (int)sizeof(int));
  nm1d2 = 0;
  for (k = 0; k <= n; k++) {
    if (b_m->data[k] != 0.0) {
      r0->data[nm1d2] = k + 1;
      nm1d2++;
    }
  }

  emxInit_real_T(&b_y, 2);
  y = 6.2831853071795862 * f;
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = r0->size[1];
  emxEnsureCapacity((emxArray__common *)b_y, k, (int)sizeof(double));
  nm1d2 = r0->size[0] * r0->size[1];
  for (k = 0; k < nm1d2; k++) {
    b_y->data[k] = y * b_m->data[r0->data[k] - 1];
  }

  emxInit_real_T(&x, 2);
  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_y->size[1];
  emxEnsureCapacity((emxArray__common *)x, k, (int)sizeof(double));
  nm1d2 = b_y->size[0] * b_y->size[1];
  for (k = 0; k < nm1d2; k++) {
    x->data[k] = b_y->data[k];
  }

  for (k = 0; k + 1 <= b_y->size[1]; k++) {
    x->data[k] = sin(x->data[k]);
  }

  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)b_y, k, (int)sizeof(double));
  nm1d2 = x->size[0] * x->size[1];
  for (k = 0; k < nm1d2; k++) {
    b_y->data[k] = x->data[k] / b_m->data[r0->data[k] - 1];
  }

  emxFree_real_T(&x);
  emxFree_int32_T(&r0);
  n = b_m->size[1];
  nm1d2 = 0;
  for (k = 0; k < n; k++) {
    if (b_m->data[k] != 0.0) {
      b->data[k] = b_y->data[nm1d2];
      nm1d2++;
    }
  }

  emxFree_real_T(&b_y);
  emxFree_real_T(&b_m);

  /*  Sinc */
  k = b->size[0] * b->size[1];
  b->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)b, k, (int)sizeof(double));
  nm1d2 = b->size[0];
  k = b->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    b->data[k] *= w->data[k];
  }

  /*  Window */
  if (b->size[1] == 0) {
    y = 0.0;
  } else {
    y = b->data[0];
    for (k = 2; k <= b->size[1]; k++) {
      y += b->data[k - 1];
    }
  }

  k = b->size[0] * b->size[1];
  b->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)b, k, (int)sizeof(double));
  nm1d2 = b->size[0];
  k = b->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    b->data[k] /= y;
  }

  /*  Normalization to unity gain at DC */
}

/*
 * File trailer for fkernel.c
 *
 * [EOF]
 */
