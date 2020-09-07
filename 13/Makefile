include ../Makefile.defines.in

APPS = usedma test0 usebrass3 usertt1 

all:${APPS}

usedma: usedma.o  dma.o
	${CC} ${CFLAGS} -o $@ usedma.o dma.o
	
test0: test0.o 
	${CC} ${CFLAGS} -o $@ test0.o 
	
usebrass3: usebrass3.o acctabc.o
	${CC} ${CFLAGS} -o $@ usebrass3.o acctabc.o
	
usertt1: usertt1.o tabtenn1.o
	${CC} ${CFLAGS} -o $@ usertt1.o tabtenn1.o

clean:
	rm -fr ${APPS} *.o
