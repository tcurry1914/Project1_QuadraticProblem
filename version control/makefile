CC = gcc
CFLAGS = -Wall -Wpedantic --std=gnu99
all:
	${CC} ${CFLAGS} -o build/quad.o src/quad.c input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c validate/val.c -lm
build/quad.o : src/quad.c src/quad.h input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c
	${CC} ${CFLAGS} -c src/quad.c input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c
build/input.o : input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c src/quad.h
	${CC} ${CFLAGS} -c input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c
build/validate.o : input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c src/quad.h validate/val.c
	${CC} ${CFLAGS} -c input/qs_testMain.c input/qs_tokenizer.c input/qs_userInput.c validate/val.c
run :
	./build/quad.o
clean :
	rm build/quad.o
