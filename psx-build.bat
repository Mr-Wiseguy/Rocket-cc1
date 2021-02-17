@echo off
nmake /f makefile.psx cccp.exe
nmake /f makefile.psx cc1.exe
cd cp
nmake /f makefile.psx compiler
cd ..
move cccp.exe cpppsx.exe
move cc1.exe cc1psx.exe
move cc1plus.exe cc1plpsx.exe
echo All done!
