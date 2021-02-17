@echo off

echo Saving PSX build...

copy bi*.exe psxobjs
copy gen*.exe psxobjs
copy tmp-*.c psxobjs
copy tmp-*.h psxobjs
copy *.o psxobjs
copy stamp-* psxobjs
copy insn-* psxobjs
copy cp\*.o psxobjs\cp

echo PSX build saved...
