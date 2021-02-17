@echo off

echo Fetching last N64 build...

copy n64objs\bi*.exe .
copy n64objs\gen*.exe .
copy n64objs\tmp-*.c .
copy n64objs\tmp-*.h .
copy n64objs\*.o .
copy n64objs\stamp-* .
copy n64objs\insn-* .
copy n64objs\cp\*.o .\cp

echo N64 build retrieved...
