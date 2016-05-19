/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: firfilter.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "firfilter.h"
#include "fir1_window_emxutil.h"
#include "ipermute.h"
#include "filter.h"

/* Function Definitions */

/*
 * Arguments    : double input_data[768]
 *                const emxArray_real_T *b
 * Return Type  : void
 */
void firfilter(double input_data[768], const emxArray_real_T *b)
{
  double groupDelay;
  double ziDataDur;
  int apnd;
  emxArray_real_T *b_b;
  int i1;
  int k;
  int ndbuffer;
  emxArray_real_T *zi;
  emxArray_real_T *dbuffer;
  int ndbl;
  int y_data[2];
  int blockArray_data[3];
  int iBlock;
  emxArray_real_T *temp;
  emxArray_real_T *b_y1;
  emxArray_real_T *b_input_data;
  double d0;
  emxArray_real_T *c_input_data;
  groupDelay = ((double)b->size[1] - 1.0) / 2.0;

  /*  Pad beginning of data with DC constant and get initial conditions */
  if (groupDelay <= 768.0) {
    ziDataDur = groupDelay;
  } else {
    ziDataDur = 768.0;
  }

  if (1.0 > (1.0 + ziDataDur) - 1.0) {
    apnd = 0;
  } else {
    apnd = (int)((1.0 + ziDataDur) - 1.0);
  }

  emxInit_real_T1(&b_b, 1);
  i1 = b_b->size[0];
  b_b->size[0] = (int)groupDelay + apnd;
  emxEnsureCapacity((emxArray__common *)b_b, i1, (int)sizeof(double));
  k = (int)groupDelay;
  for (i1 = 0; i1 < k; i1++) {
    b_b->data[i1] = input_data[0];
  }

  for (i1 = 0; i1 < apnd; i1++) {
    b_b->data[i1 + (int)groupDelay] = input_data[i1];
  }

  if (1 >= b->size[1]) {
    ndbuffer = 0;
  } else {
    ndbuffer = b->size[1] - 1;
  }

  emxInit_real_T1(&zi, 1);
  emxInit_real_T1(&dbuffer, 1);
  i1 = zi->size[0];
  zi->size[0] = ndbuffer;
  emxEnsureCapacity((emxArray__common *)zi, i1, (int)sizeof(double));
  i1 = dbuffer->size[0];
  dbuffer->size[0] = ndbuffer + 1;
  emxEnsureCapacity((emxArray__common *)dbuffer, i1, (int)sizeof(double));
  for (k = 1; k <= ndbuffer; k++) {
    dbuffer->data[k] = 0.0;
  }

  for (apnd = 1; apnd <= b_b->size[0]; apnd++) {
    for (k = 1; k <= ndbuffer; k++) {
      dbuffer->data[k - 1] = dbuffer->data[k];
    }

    dbuffer->data[ndbuffer] = 0.0;
    for (k = 0; k + 1 <= b->size[1]; k++) {
      dbuffer->data[k] += b_b->data[apnd - 1] * b->data[k];
    }
  }

  for (k = 1; k <= ndbuffer; k++) {
    zi->data[k - 1] = dbuffer->data[k];
  }

  emxFree_real_T(&dbuffer);
  if (768.0 < 1.0 + groupDelay) {
    ndbl = 0;
    k = (int)groupDelay + 1;
    apnd = 768;
  } else {
    k = (int)groupDelay + 1;
    ndbl = (int)floor((768.0 - (1.0 + groupDelay)) / 1000.0 + 0.5);
    apnd = ((int)groupDelay + ndbl * 1000) + 1;
    ndbuffer = 1 + (int)groupDelay;
    if (ndbuffer >= 768) {
    } else {
      ndbuffer = 768;
    }

    if (fabs((double)apnd - 768.0) < 4.4408920985006262E-16 * (double)ndbuffer)
    {
      ndbl++;
      apnd = 768;
    } else if (apnd - 768 > 0) {
      apnd = ((int)groupDelay + (ndbl - 1) * 1000) + 1;
    } else {
      ndbl++;
    }
  }

  if (ndbl > 0) {
    y_data[0] = k;
    if (ndbl > 1) {
      y_data[0] = k;
      y_data[1] = apnd;
    }
  }

  for (i1 = 0; i1 < ndbl; i1++) {
    blockArray_data[i1] = y_data[i1];
  }

  blockArray_data[ndbl] = 769;
  iBlock = 0;
  emxInit_real_T(&temp, 2);
  emxInit_real_T1(&b_y1, 1);
  emxInit_real_T1(&b_input_data, 1);
  while (iBlock <= ndbl - 1) {
    /*  Filter the data */
    if (blockArray_data[iBlock] > blockArray_data[1 + iBlock] - 1) {
      i1 = 0;
      k = 0;
    } else {
      i1 = blockArray_data[iBlock] - 1;
      k = blockArray_data[1 + iBlock] - 1;
    }

    ndbuffer = b_input_data->size[0];
    b_input_data->size[0] = k - i1;
    emxEnsureCapacity((emxArray__common *)b_input_data, ndbuffer, (int)sizeof
                      (double));
    apnd = k - i1;
    for (k = 0; k < apnd; k++) {
      b_input_data->data[k] = input_data[i1 + k];
    }

    filter(b, b_input_data, zi, b_y1, b_b);
    d0 = (double)blockArray_data[iBlock] - groupDelay;
    if (d0 > ((double)blockArray_data[1 + iBlock] - groupDelay) - 1.0) {
      i1 = 0;
    } else {
      i1 = (int)d0 - 1;
    }

    ipermute(b_y1, temp);
    apnd = temp->size[1];
    for (k = 0; k < apnd; k++) {
      input_data[i1 + k] = temp->data[temp->size[0] * k];
    }

    i1 = zi->size[0];
    zi->size[0] = b_b->size[0];
    emxEnsureCapacity((emxArray__common *)zi, i1, (int)sizeof(double));
    apnd = b_b->size[0];
    for (i1 = 0; i1 < apnd; i1++) {
      zi->data[i1] = b_b->data[i1];
    }

    iBlock++;
  }

  emxFree_real_T(&b_input_data);
  emxInit_real_T1(&c_input_data, 1);

  /*  Pad end of data with DC constant */
  i1 = c_input_data->size[0];
  c_input_data->size[0] = (int)groupDelay;
  emxEnsureCapacity((emxArray__common *)c_input_data, i1, (int)sizeof(double));
  apnd = (int)groupDelay;
  for (i1 = 0; i1 < apnd; i1++) {
    c_input_data->data[i1] = input_data[767];
  }

  filter(b, c_input_data, zi, b_y1, b_b);
  ipermute(b_y1, temp);
  d0 = ((double)temp->size[1] - ziDataDur) + 1.0;
  emxFree_real_T(&c_input_data);
  emxFree_real_T(&b_b);
  emxFree_real_T(&b_y1);
  emxFree_real_T(&zi);
  if (d0 > temp->size[1]) {
    i1 = 1;
    k = 0;
  } else {
    i1 = (int)d0;
    k = temp->size[1];
  }

  if (769.0 - ziDataDur > 768.0) {
    ndbuffer = 0;
  } else {
    ndbuffer = (int)(769.0 - ziDataDur) - 1;
  }

  apnd = k - i1;
  for (k = 0; k <= apnd; k++) {
    input_data[ndbuffer + k] = temp->data[temp->size[0] * ((i1 + k) - 1)];
  }

  emxFree_real_T(&temp);
}

/*
 * File trailer for firfilter.c
 *
 * [EOF]
 */
