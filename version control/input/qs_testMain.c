#include "../src/quad.h"

int testMain(int argc, char const *argv[])
{
	char *input = malloc(sizeof(char) * MAX_UI_SIZE);
	Values *vals_M;
	FILE *fp = fopen("logs/testMain.log", "w+");
	//Prompt user
	fprintf(stdout, "Enter 3 values: \n");
	fprintf(fp, "Enter 3 values: \n");
	//Get raw user input from terminal
	input = userInput();
	fprintf(stdout, "\nInput: %s\n", input);
	fprintf(fp, "\nInput: %s\n", input);

	//Split raw user input into three values
	vals_M = tokenizer(input);
	fprintf(stdout, "Val1...%s\n", vals_M->num1);
	fprintf(fp, "Val1...%s\n", vals_M->num1);
	fprintf(stdout, "Val2...%s\n", vals_M->num2);
	fprintf(fp, "Val2...%s\n", vals_M->num2);
	fprintf(stdout, "Val3...%s\n", vals_M->num3);
	fprintf(fp, "Val3...%s\n", vals_M->num3);

	validate(vals_M);
	
	fclose(fp);

	return 0;

}
