#include <stdio.h>
#include <stdlib.h>


char *userInput(){
	char *input = malloc(sizeof(char)*26);
	printf("Please enter values for A, B, and: ");

	fgets(input, sizeof(char)*25,stdin);
	// printf("\ninput %s\n", input);
}