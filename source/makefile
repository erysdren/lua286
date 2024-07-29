
LIBRARY=lua.lib
INTERPRETER=lua.exe
COMPILER=luac.exe

CC=wcc
AR=wlib
LD=wlink
RM=rm
CFLAGS=-omaxnet -2 -fp2 -mm -q

LIBRARY_OBJECTS=&
	lapi.obj&
	lcode.obj&
	lctype.obj&
	ldebug.obj&
	ldo.obj&
	ldump.obj&
	lfunc.obj&
	lgc.obj&
	llex.obj&
	lmem.obj&
	lobject.obj&
	lopcodes.obj&
	lparser.obj&
	lstate.obj&
	lstring.obj&
	ltable.obj&
	ltm.obj&
	lundump.obj&
	lvm.obj&
	lzio.obj&
	lauxlib.obj&
	lbaselib.obj&
	lcorolib.obj&
	ldblib.obj&
	liolib.obj&
	lmathlib.obj&
	loadlib.obj&
	loslib.obj&
	lstrlib.obj&
	ltablib.obj&
	lutf8lib.obj&
	linit.obj

INTERPRETER_OBJECTS=lua.obj

COMPILER_OBJECTS=luac.obj

.c.obj:
	$(CC) $(CFLAGS) -fo=$*.obj $*.c

all: .SYMBOLIC $(LIBRARY) $(INTERPRETER) $(COMPILER)

$(LIBRARY): $(LIBRARY_OBJECTS) wlib.rsp
	$(AR) @wlib.rsp

$(INTERPRETER): $(LIBRARY) $(INTERPRETER_OBJECTS)
	$(LD) name $(INTERPRETER) file $(INTERPRETER_OBJECTS) library $(LIBRARY) system dos

$(COMPILER): $(LIBRARY) $(COMPILER_OBJECTS)
	$(LD) name $(COMPILER) file $(COMPILER_OBJECTS) library $(LIBRARY) system dos

wlib.rsp: makefile
	echo $(LIBRARY) >wlib.rsp
	for %i in ($(LIBRARY_OBJECTS)) do echo +%i >>wlib.rsp

clean: .SYMBOLIC
	$(RM) $(LIBRARY) $(LIBRARY_OBJECTS) $(INTERPRETER_OBJECTS) $(COMPILER_OBJECTS)
