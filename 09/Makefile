include ../Makefile.defines.in

APPS = newplace 

all:${APPS}

newplace: newplace.o
	${CC} ${CFLAGS} -o $@ newplace.o


clean:
	rm -fr ${APPS} *.o
