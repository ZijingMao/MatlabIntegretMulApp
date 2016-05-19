
%module Fir1Window
%{
#include "src/fir1_window/fir1_window.h"
%}

%include "carrays.i"
%include "typemaps.i"
%include "arrays_java.i"
%include "src/fir1_window/fir1_window.h"

/* Wrap a class interface around an "double *" */
%array_functions(double, doubleArray);

