include ../Makefile.defines.in

APPS = test_float typecast

all:${APPS}

test_float: test_float.o
	${CC} ${CFLAGS} -o $@ test_float.o

typecast: typecast.o
	${CC} ${CFLAGS} -o $@ typecast.o

clean:
	rm -fr ${APPS} *.o
