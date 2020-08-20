include ../Makefile.defines.in

APPS = randwalk usetime1 usetime3 

all:${APPS}

randwalk: randwalk.o vector.o
	${CC} ${CFLAGS} -o $@ randwalk.o vector.o

usetime3: usetime3.o mytime3.o
	${CC} ${CFLAGS} -o $@ usetime3.o mytime3.o

usetime1: usetime1.o mytime1.o
	${CC} ${CFLAGS} -o $@ usetime1.o mytime1.o

clean:
	rm -fr ${APPS} *.o
