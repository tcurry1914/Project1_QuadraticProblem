CC = gcc
CFLAGS = -Wall -Wpedantic --std=gnu99
all:
	${CC} ${CFLAGS} -o build/quad.o src/quad.c -lm
build/quad.o : src/quad.c src/quad.h
	${CC} ${CFLAGS} -c src/quad.c
run :
	./build/quad.o
clean :
	rm build/quad.o
