@echo off
echo Fetching last PSX build...

copy psxobjs\bi*.exe .
copy psxobjs\gen*.exe .
copy psxobjs\tmp-*.c .
copy psxobjs\tmp-*.h .
copy psxobjs\*.o .
copy psxobjs\stamp-* .
copy psxobjs\insn-* .
copy psxobjs\cp\*.o .\cp

echo PSX build retrieved...
