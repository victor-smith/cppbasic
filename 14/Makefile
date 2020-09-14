include ../Makefile.defines.in

CPPFLAGS += --std=c++11
APPS = worktest use_stuc use_stui

all:${APPS}

worktest: worktest.o worker0.o
	${CC} ${CFLAGS} -o $@ worktest.o worker0.o

use_stuc: use_stuc.o studentc.o
	${CC} ${CFLAGS} -o $@ use_stuc.o studentc.o

use_stui: use_stui.o studenti.o
	${CC} ${CFLAGS} -o $@ use_stui.o studenti.o

clean:
	rm -fr ${APPS} *.o
