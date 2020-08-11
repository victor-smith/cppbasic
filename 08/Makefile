include ../Makefile.defines.in

APPS = twoswap twotempsfunc left filefunc strtref cubes secref firstref inline 

all:${APPS}

twoswap: twoswap.o
	${CC} ${CFLAGS} -o $@ twoswap.o

twotempsfunc: twotempsfunc.o
	${CC} ${CFLAGS} -o $@ twotempsfunc.o

left: left.o
	${CC} ${CFLAGS} -o $@ left.o

filefunc: filefunc.o
	${CC} ${CFLAGS} -o $@ filefunc.o

strtref: strtref.o
	${CC} ${CFLAGS} -o $@ strtref.o

cubes: cubes.o
	${CC} ${CFLAGS} -o $@ cubes.o

secref: secref.o
	${CC} ${CFLAGS} -o $@ secref.o

firstref: firstref.o
	${CC} ${CFLAGS} -o $@ firstref.o

inline: inline.o
	${CC} ${CFLAGS} -o $@ inline.o

clean:
	rm -fr ${APPS} *.o
