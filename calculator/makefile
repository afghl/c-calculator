result: main.o getbufch.o stack.o getoperation.o
	cc -o result main.o getbufch.o stack.o getoperation.o

main.o: main.c calc.h
	cc -c main.c

getbufch.o: getbufch.c calc.h
	cc -c getbufch.c

stack.o: stack.c calc.h
	cc -c stack.c

getoperation.o: getoperation.c calc.h
	cc -c getoperation.c
