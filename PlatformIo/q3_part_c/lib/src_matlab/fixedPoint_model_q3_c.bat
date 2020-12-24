
set MATLAB=E:\Program Files\Matlab 2020\Polyspace\R2020b


call  "\\DESKTOP-QEI56B2\E$\Program Files\Matlab 2020\Polyspace\R2020b\bin\win64\checkMATLABRootForDriveMap.exe" "\\DESKTOP-QEI56B2\E$\Program Files\Matlab 2020\Polyspace\R2020b"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

if "%1"=="" ("E:\Program Files\Matlab 2020\Polyspace\R2020b\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f fixedPoint_model_q3_c.mk all) else ("E:\Program Files\Matlab 2020\Polyspace\R2020b\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f fixedPoint_model_q3_c.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1