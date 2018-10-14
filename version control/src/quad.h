#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_UI_SIZE 50

typedef struct values
{
	char num1[MAX_UI_SIZE/3];
	char num2[MAX_UI_SIZE/3];
	char num3[MAX_UI_SIZE/3];
} Values;


int main(int, char const **);
int testMain(int, char const *argv[]);
int tokenizer(Values *, char *str);
int userInput(char *);
int validate(Values *);
