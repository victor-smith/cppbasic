include ../Makefile.defines.in

APPS = bank

all:${APPS}

bank: bank.o queue.o
	${CC} ${CFLAGS} -o $@ bank.o queue.o

clean:
	rm -fr ${APPS} *.o
