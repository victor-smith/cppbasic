include ../Makefile.defines.in

APPS = textin4 textin3 textin2 while comstr2 forstr2 formore infinit_input express

all:${APPS}

textin4: textin4.o
	${CC} ${CFLAGS} -o $@ textin4.o

textin3: textin3.o
	${CC} ${CFLAGS} -o $@ textin3.o

textin2: textin2.o
	${CC} ${CFLAGS} -o $@ textin2.o

while: while.o
	${CC} ${CFLAGS} -o $@ while.o

comstr2: comstr2.o
	${CC} ${CFLAGS} -o $@ comstr2.o

forstr2: forstr2.o
	${CC} ${CFLAGS} -o $@ forstr2.o

formore: formore.o
	${CC} ${CFLAGS} -o $@ formore.o
	
infinit_input: infinit_input.o
	${CC} ${CFLAGS} -o $@ infinit_input.o
	
express: express.o
	${CC} ${CFLAGS} -o $@ express.o

clean:
	rm -fr ${APPS} *.o
