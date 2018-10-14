#include "../src/quad.h"

int validate(Values *vals_M)
{
	FILE *fp = fopen("logs/validate.log", "w+");
	char *char1 = malloc(sizeof(char) * MAX_UI_SIZE/3);
	char *char2 = malloc(sizeof(char) * MAX_UI_SIZE/3);
	char *char3 = malloc(sizeof(char) * MAX_UI_SIZE/3);
	float float1, float2, float3;
	strncpy(char1, vals_M->num1, MAX_UI_SIZE/3);
	strncpy(char2, vals_M->num2, MAX_UI_SIZE/3);
	strncpy(char3, vals_M->num3, MAX_UI_SIZE/3);
	
	fprintf(stdout, "char1: %s\n", char1);
	fprintf(fp, "char1: %s\n", char1);
	fprintf(stdout, "char2: %s\n", char2);
	fprintf(fp, "char2: %s\n", char2);
	fprintf(stdout, "char3: %s\n", char3);
	fprintf(fp, "char3: %s\n", char3);

	char *pend;

	float1 = strtof(char1, &pend);
	float2 = strtof(char2, &pend);
	float3 = strtof(char3, &pend);

	if (isnan(float1)) {
		fprintf(stdout, "float1 is NaN\n");
		fprintf(fp, "float1 is NaN\n");
		return -1;
	}
	if (isnan(float2)) {
		fprintf(stdout, "float2 is NaN\n");
		fprintf(fp, "float2 is NaN\n");
		return -1;
	}
	if (isnan(float3)) {
		fprintf(stdout, "float3 is NaN\n");
		fprintf(fp, "float3 is NaN\n");
		return -1;
	}
	if (isinf(float1)) {
		fprintf(stdout, "float1 is Inf\n");
		fprintf(fp, "float1 is Inf\n");
		return -1;
	}
	if (isinf(float2)) {
		fprintf(stdout, "float2 is Inf\n");
		fprintf(fp, "float2 is Inf\n");
		return -1;
	}
	if (isinf(float3)) {
		fprintf(stdout, "float3 is Inf\n");
		fprintf(fp, "float3 is Inf\n");
		return -1;
	}
	
	fprintf(stdout, "float1: %f\n", float1);
	fprintf(fp, "float1: %f\n", float1);
	fprintf(stdout, "float2: %f\n", float2);
	fprintf(fp, "val2: %f\n", float2);
	fprintf(stdout, "float3: %f\n", float3);
	fprintf(fp, "float3: %f\n", float3);

	double d1 = (double)float1;
	double d2 = (double)float2;
	double d3 = (double)float3;

	fprintf(stdout, "d1: %f\n", d1);
	fprintf(fp, "d1: %f\n", d1);
	fprintf(stdout, "d2: %f\n", d2);
	fprintf(fp, "d2: %f\n", d2);
	fprintf(stdout, "val3: %f\n", d3);
	fprintf(fp, "d3: %f\n", d3);
	
	fclose(fp);
	free(char1);
	free(char2);
	free(char3);

	return 0;
}
