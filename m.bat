cl -c  -DIN_GCC   -Di386 -DWIN32 -D_WIN32 -D_M_IX86=300 -D_X86_=1   -DALMOST_STDC -D_MSC_VER=800 -D__MSDOS__ -Fopexecute.o -D__STDC__ -Ox -DSNPSX     -I. -I. -I./config pexecute.c
link -align:0x1000 -subsystem:console -entry:mainCRTStartup   -stack:1000000,1000 -out:xgcc.exe gcc.o prefix.o version.o          choose-temp.o pexecute.o oldnames.o obstack.o alloca.o  libc.lib kernel32.lib advapi32.lib