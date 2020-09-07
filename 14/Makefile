include ../Makefile.defines.in

CPPFLAGS += --std=c++11
APPS = use_stuc

all:${APPS}

use_stuc: use_stuc.o studentc.o
	${CC} ${CFLAGS} -o $@ use_stuc.o studentc.o

clean:
	rm -fr ${APPS} *.o
