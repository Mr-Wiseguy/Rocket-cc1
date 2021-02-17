@echo off

echo Saving N64 build...

copy bi*.exe n64objs
copy gen*.exe n64objs
copy tmp-*.c n64objs
copy tmp-*.h n64objs
copy *.o n64objs
copy stamp-* n64objs
copy insn-* n64objs
copy cp\*.o n64objs\cp

echo N64 build saved...
