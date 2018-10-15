#include "../src/quad.h"

int testMain(int argc, char const *argv[])
{
	char *input = malloc(sizeof(char) * MAX_UI_SIZE);
	//Values *vals_M;
	FILE *fp = fopen("logs/testMain.log", "w+");
	//Prompt user
	fprintf(stdout, "Enter 3 values: \n");
	fprintf(fp, "Enter 3 values: \n");
	//Get raw user input from terminal
	int userInputOutput = userInput(input);
	if (userInputOutput == -1) {
		fprintf(stdout, "Program failed at userInput stage\n");
		fprintf(fp, "Program failed at userInput stage");
		return -1;
	} else {
		fprintf(stdout, "Input: %s\n", input);
		fprintf(fp, "Input: %s\n", input);
	}
	
	//Split raw user input into three values
	Values *vals_M = (Values *) malloc(sizeof(Values));

	int tokenizerOutput = tokenizer(vals_M, input);
	if (tokenizerOutput == -1) {
		fprintf(stdout, "Program failed at tokenizer stage\n");
		fprintf(fp, "Program failed at tokenizer stage");
		return -1;
	} else {
		fprintf(stdout, "tok1...%s\n", vals_M->num1);
		fprintf(fp, "tok1...%s\n", vals_M->num1);
		fprintf(stdout, "tok2...%s\n", vals_M->num2);
		fprintf(fp, "tok2...%s\n", vals_M->num2);
		fprintf(stdout, "tok3...%s\n", vals_M->num3);
		fprintf(fp, "tok3...%s\n", vals_M->num3);
	}

	int validateOutput = validate(vals_M);
	if (validateOutput == -1) {
		fprintf(stdout, "Program failed in validate stage.\n");
		fprintf(fp, "Program failed in validate stage.\n");
	} else {
		fprintf(stdout, "All three values have been validated.\n");
		fprintf(fp, "All three values have been validated.\n");
	}
	
	fclose(fp);

	return 0;

}
