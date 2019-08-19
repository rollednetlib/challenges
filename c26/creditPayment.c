#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

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
	while ( strpbrk(input, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()<|{}") != NULL )
	{
		printf("Input contains characters, try to enter a float! ex: 10.4\n");
		printf(fprompt);
		getchar();
		scanf(" %s", &input);
	}
	s = atof(input);
	return s;
}

int creditPayment(float  apr, float currentBalance, float  monthlyPayment)
{
	static float numberOfMonths;
	float dailyRate = (apr/100)/365;
	static float mal = 0.333333;
	float use = -mal;
	numberOfMonths = ceilf((use * (log(1 + ((currentBalance / monthlyPayment) * (1 - powf((1 + dailyRate), 30) )))/log(1+dailyRate)))/10);
	return numberOfMonths;

}

int main()
{
	float apr, currentBalance, monthlyPayment;
       	float monthsLeft;
	currentBalance = uInputFloat("What is your current balance? ");
	apr = uInputFloat("What is the APR on the card (as a percent)? ");
	monthlyPayment = uInputFloat("What is the monthly payment? ");
	monthsLeft = creditPayment(apr, currentBalance, monthlyPayment);
	printf("It will take you %.0f months to pay off this card.\n", monthsLeft);

}
