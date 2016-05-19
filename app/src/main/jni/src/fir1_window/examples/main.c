/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 09-May-2016 23:17:27
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "fir1_window.h"
#include "main.h"
#include "fir1_window_terminate.h"
#include "fir1_window_initialize.h"

/* Function Declarations */
static void argInit_1x768_real_T(double result[768]);
static double argInit_real_T(void);
static void main_fir1_window(void);

/* Function Definitions */

/*
 * Arguments    : double result[768]
 * Return Type  : void
 */
static void argInit_1x768_real_T(double result[768])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 768; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_fir1_window(void)
{
  double input[768];

  /* Initialize function 'fir1_window' input arguments. */
  /* Initialize function input argument 'input'. */
  argInit_1x768_real_T(input);

  /* Call the entry-point 'fir1_window'. */
  fir1_window(input, argInit_real_T(), argInit_real_T());
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  fir1_window_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_fir1_window();

  /* Terminate the application.
     You do not need to do this more than one time. */
  fir1_window_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
