include ../Makefile.defines.in

APPS = stacker stocks stocks1

all:${APPS}

stacker: stack.o stacker.o
	${CC} ${CFLAGS} -o $@ stack.o stacker.o

stocks1: stocks1.o stock1.o
	${CC} ${CFLAGS} -o $@ stocks1.o stock1.o

stocks: stocks.o
	${CC} ${CFLAGS} -o $@ stocks.o


clean:
	rm -fr ${APPS} *.o
