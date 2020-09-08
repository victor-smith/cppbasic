include ../Makefile.defines.in

CPPFLAGS += --std=c++11
APPS = use_stuc use_stui

all:${APPS}

use_stuc: use_stuc.o studentc.o
	${CC} ${CFLAGS} -o $@ use_stuc.o studentc.o

use_stui: use_stui.o studenti.o
	${CC} ${CFLAGS} -o $@ use_stui.o studenti.o

clean:
	rm -fr ${APPS} *.o
