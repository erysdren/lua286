
LIBRARY=lua.lib
INTERPRETER=lua.exe
COMPILER=luac.exe

CC=wcc
AR=wlib
LD=wlink
RM=rm
CFLAGS=-omaxnet -2 -fp2 -mm -q

LIBRARY_OBJECTS=&
	lapi.o&
	lcode.o&
	lctype.o&
	ldebug.o&
	ldo.o&
	ldump.o&
	lfunc.o&
	lgc.o&
	llex.o&
	lmem.o&
	lobject.o&
	lopcodes.o&
	lparser.o&
	lstate.o&
	lstring.o&
	ltable.o&
	ltm.o&
	lundump.o&
	lvm.o&
	lzio.o&
	lauxlib.o&
	lbaselib.o&
	lcorolib.o&
	ldblib.o&
	liolib.o&
	lmathlib.o&
	loadlib.o&
	loslib.o&
	lstrlib.o&
	ltablib.o&
	lutf8lib.o&
	linit.o

INTERPRETER_OBJECTS=lua.o

COMPILER_OBJECTS=luac.o

.c.o:
	$(CC) $(CFLAGS) $*.c

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
