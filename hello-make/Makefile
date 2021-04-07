LIBNAME  := libhellomake.a
PROGNAME := hellomake

export LIBNAME
export PROGNAME

all: lib
	$(MAKE) -C src

lib:
	$(MAKE) -C lib

clean:
	$(MAKE) -C lib clean
	$(MAKE) -C src clean

.PHONY: lib