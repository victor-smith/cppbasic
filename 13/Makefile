include ../Makefile.defines.in

APPS = usertt1 

all:${APPS}

usertt1: usertt1.o tabtenn1.o
	${CC} ${CFLAGS} -o $@ usertt1.o tabtenn1.o

clean:
	rm -fr ${APPS} *.o
