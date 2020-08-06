include ../Makefile.defines.in

APPS = strtype3 strtype4

all:${APPS}

strtype3: strtype3.o
	${CC} ${CFLAGS} -o $@ strtype3.o

strtype4: strtype4.o
	${CC} ${CFLAGS} -o $@ strtype4.o

clean:
	rm -fr ${APPS} *.o
