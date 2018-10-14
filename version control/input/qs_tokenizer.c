#include "../src/quad.h"

/*
	Function takes a string and stores three values from 
	that string into a struct which is passed back to the 
	calling function
*/
Values *tokenizer(char *str){

	FILE *fp = fopen("logs/tokenizer.log", "w+");
	char* token;
	char* theRest = str;
	int set = -1;

	Values *vals = (Values *) malloc(sizeof(Values));

	while((token = strtok_r(theRest," ,`~\\*+=!@#$%^&()/-_<>?:;[]{}|\'\"\n", &theRest))){
		

		//Store the three values that will be used for the quad solver
		if (strcmp(vals->num1,"") == 0)
		{
			strcpy(vals->num1,token);
		}
		else if (strcmp(vals->num2,"") == 0)
		{
			strcpy(vals->num2,token);
		}
		else if (strcmp(vals->num3,"") == 0)
		{
			strcpy(vals->num3,token);
			set = 0;
		}
		else{

			//If user enters more values than needed, inform them.
			if(set == 0)
			{
				fprintf(stdout, "\n\tToo many numbers entered");
				fprintf(fp, "\n\tToo many numbers entered");
				fprintf(stdout, "\n\tThe following values will not be included:\n");
				fprintf(fp, "\n\tThe following values will not be included:\n");
				fprintf(stdout, "\t%s ", token);
				fprintf(fp, "\t%s ", token);
				set = 1;
			}
			else if(set == 1){
				fprintf(stdout, "%s ", token);
				fprintf(fp, "%s ", token);
			}
			else{
				fprintf(stdout, "ERROR\n");
				fprintf(fp, "ERROR\n");
			}
		}

	}//End of while()


	//Format printing
	fprintf(stdout, "\n\n");
	fprintf(fp, "\n\n");
	fclose(fp);

	return vals;
}//End of tokenizer()
