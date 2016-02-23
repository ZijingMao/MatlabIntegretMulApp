
%module BandpowerCalc
%{
#include "src/fft_bandpower_calculate/fft_bandpower_calculate.h"
%}

%include "carrays.i"
%include "typemaps.i"
%include "arrays_java.i"
%include "src/fft_bandpower_calculate/fft_bandpower_calculate.h"

/* Wrap a class interface around an "double *" */
%array_functions(double, doubleArray);

