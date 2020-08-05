include ../Makefile.defines.in

APPS = infinit_input 

all:${APPS}

infinit_input: infinit_input.o
	${CC} ${CFLAGS} -o $@ infinit_input.o

clean:
	rm -fr ${APPS} *.o
