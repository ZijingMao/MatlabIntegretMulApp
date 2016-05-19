/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: filter.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "filter.h"
#include "fir1_window_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *b
 *                const emxArray_real_T *x
 *                const emxArray_real_T *zi
 *                emxArray_real_T *y
 *                emxArray_real_T *zf
 * Return Type  : void
 */
void filter(const emxArray_real_T *b, const emxArray_real_T *x, const
            emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf)
{
  int ndbuffer;
  signed char zicase;
  emxArray_real_T *dbuffer;
  unsigned int x_idx_0;
  int k;
  int j;
  if (1 >= b->size[1]) {
    ndbuffer = 0;
  } else {
    ndbuffer = b->size[1] - 1;
  }

  if (ndbuffer == zi->size[0]) {
    zicase = 1;
  } else {
    zicase = 2;
  }

  emxInit_real_T1(&dbuffer, 1);
  x_idx_0 = (unsigned int)x->size[0];
  k = y->size[0];
  y->size[0] = (int)x_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  k = zf->size[0];
  zf->size[0] = ndbuffer;
  emxEnsureCapacity((emxArray__common *)zf, k, (int)sizeof(double));
  k = dbuffer->size[0];
  dbuffer->size[0] = ndbuffer + 1;
  emxEnsureCapacity((emxArray__common *)dbuffer, k, (int)sizeof(double));
  if (zicase == 2) {
    for (k = 1; k <= ndbuffer; k++) {
      dbuffer->data[k] = zi->data[k - 1];
    }
  } else {
    for (k = 1; k <= ndbuffer; k++) {
      dbuffer->data[k] = zi->data[k - 1];
    }
  }

  for (j = 0; j + 1 <= x->size[0]; j++) {
    for (k = 1; k <= ndbuffer; k++) {
      dbuffer->data[k - 1] = dbuffer->data[k];
    }

    dbuffer->data[ndbuffer] = 0.0;
    for (k = 0; k + 1 <= b->size[1]; k++) {
      dbuffer->data[k] += x->data[j] * b->data[k];
    }

    y->data[j] = dbuffer->data[0];
  }

  for (k = 1; k <= ndbuffer; k++) {
    zf->data[k - 1] = dbuffer->data[k];
  }

  emxFree_real_T(&dbuffer);
}

/*
 * File trailer for filter.c
 *
 * [EOF]
 */
