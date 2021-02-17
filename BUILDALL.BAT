@echo off
echo Building all compilers (PSX, MIPS, N64)...
call clean
call psx-get
call psx-build
call psx-save

call clean
call n64-get
call n64-build
call n64-save

echo All finished...
