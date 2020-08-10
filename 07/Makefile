include ../Makefile.defines.in

APPS = ruler arcfun travel strgback strgfun arrfun4 arrfun3 lotto 

all:${APPS}

ruler: ruler.o
	${CC} ${CFLAGS} -o $@ ruler.o

arcfun: arcfun.o
	${CC} ${CFLAGS} -o $@ arcfun.o

travel: travel.o
	${CC} ${CFLAGS} -o $@ travel.o

strgback: strgback.o
	${CC} ${CFLAGS} -o $@ strgback.o

strgfun: strgfun.o
	${CC} ${CFLAGS} -o $@ strgfun.o

arrfun4: arrfun4.o
	${CC} ${CFLAGS} -o $@ arrfun4.o

arrfun3: arrfun3.o
	${CC} ${CFLAGS} -o $@ arrfun3.o

lotto: lotto.o
	${CC} ${CFLAGS} -o $@ lotto.o

clean:
	rm -fr ${APPS} *.o
