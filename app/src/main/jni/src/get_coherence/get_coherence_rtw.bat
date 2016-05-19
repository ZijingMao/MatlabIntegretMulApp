@echo off

set MATLAB=E:\Program Files\MATLAB\R2015b

cd .

if "%1"=="" (E:\PROGRA~3\MATLAB\R2015b\bin\win64\gmake -f get_coherence_rtw.mk all) else (E:\PROGRA~3\MATLAB\R2015b\bin\win64\gmake -f get_coherence_rtw.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
