#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char * uInputChar(char * cprompt)
{
	char input[20];
        static char s[20];
	printf(cprompt);
	scanf(" %s", &input);
	for ( int i = 0; i < strlen(input); i++)
	{
		s[i] = toupper(input[i]);
	}
	return s;
}

float uInputFloat(char * fprompt)
{
	char input[20], hangingNewline;
	static float s;
	printf(fprompt);
	scanf(" %s", &input);
	while ( strpbrk(input, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL )
	{
		printf("Input contains characters, try to enter a float! ex: 10.4\n");
		printf(fprompt);
		getchar();
		input;
		scanf(" %s", &input);
	}
	s = atof(input);
	return s;
}

int main()
{
	float stateTax, countyTax, total;
	float orderCount = uInputFloat("What is the order amount? ");
	char * state = uInputChar("What is the state of residency? ");
	if (( strncmp(state, "WISCONSIN",9) == 0 ) || ( strncmp(state,"WI",2) == 0 ))
	{
		stateTax = orderCount * 0.05;
		char * county = uInputChar("What is the county of residence? ");
		if (( strncmp, "EU CLAIRE", 9) == 0)
			countyTax = roundf(orderCount * (float)0.005 * 100)/100;
		if (( strncmp, "DUNN", 4) == 0)
			countyTax = roundf(orderCount *(float) 0.004 * 100)/100;
		total = orderCount + stateTax + countyTax;
		printf("The state tax is $%.2f.\nThe county tax is $%.2f.\nThe total is $%.2f.\n", stateTax, countyTax, total);
	}
	if (( strncmp(state, "ILLINOIS", 9) == 0 ) || ( strncmp(state, "IL", 2) == 0 ))
	{
		stateTax = orderCount * (float)0.08;
		total = orderCount + stateTax;
		printf("The total is $%.2f.\n", total);
	}
	


	return 0;
}
