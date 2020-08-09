include ../Makefile.defines.in

APPS = sumfile outfile enum cctype 

all:${APPS}

sumfile: sumfile.o
	${CC} ${CFLAGS} -o $@ sumfile.o

outfile: outfile.o
	${CC} ${CFLAGS} -o $@ outfile.o

enum: enum.o
	${CC} ${CFLAGS} -o $@ enum.o

cctype: cctype.o
	${CC} ${CFLAGS} -o $@ cctype.o

clean:
	rm -fr ${APPS} *.o
