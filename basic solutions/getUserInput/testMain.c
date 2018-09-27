#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct values
{
	char num1[26];
	char num2[26];
	char num3[26];
	
};
char *userInput();
void *tokenizer(struct values *vals);


int main(int argc, char const *argv[])
{
	char *input = malloc(sizeof(char)*26);
	struct values vals_M;
	//Get raw user input from terminal
	input = userInput();

	strcpy(vals_M.num1, "1234");
	strcpy(vals_M.num2, "12345");
	strcpy(vals_M.num3, "123456");

	tokenizer(&vals_M);
	//Split string on delimeters
	// printf("\nInput %s\n", input);

	return 0;

}