#include "../src/quad.h"

/*
	Function takes users input as a string and returns it to calling function
	MAX_UI_SIZE = Maximum user input size
*/

int userInput(char *input){
	
	FILE *fp = fopen("logs/userInput.log", "w+");
	int ret = -1;
	while (ret == -1) {
		if (fgets(input, sizeof(char) * MAX_UI_SIZE, stdin) == NULL) {
			fprintf(stdout, "Unexpected error: null value");
			fprintf(fp, "Unexpected error: null value");
		} else {
			ret = 0;
		}
	}

	fprintf(stdout, "User input received: %s\n", input);
	fprintf(fp, "User input received: %s\n", input);

	return 0;
}
