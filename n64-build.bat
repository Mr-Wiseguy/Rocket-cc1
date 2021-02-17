@echo off
nmake /f makefile.n64 cccp.exe
nmake /f makefile.n64 cc1.exe
cd cp
nmake /f makefile.n64 compiler
cd ..
move cccp.exe cppn64.exe
move cc1.exe cc1n64.exe
move cc1plus.exe cc1pln64.exe
echo All done!
