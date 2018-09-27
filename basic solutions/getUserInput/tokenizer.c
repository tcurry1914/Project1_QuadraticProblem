#include <stdio.h>
#include <stdlib.h>
struct values
{
	char num1[26];
	char num2[26];
	char num3[26];
	
};


void tokenizer(struct values *vals){
	


	printf("Val1...%s\n",vals->num1);
	printf("Val2...%s\n",vals->num2);
	printf("Val3...%s\n",vals->num3);
}