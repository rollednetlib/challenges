#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

static int uReturn;
static int total;


int uInputInt(char * prompt)
{
	char input[50];
	int s;
	printf(prompt);
	scanf(" %s", &input);
	while ( strpbrk(input, "1234567890") == NULL)
	{
		printf("Your input contains more than just numbers!\n");
		printf(prompt);
		scanf(" %s", &input);
	}
	s = atoi(input);
	return s;
}

int uInputAdd()
{
	char intInput[50];
	printf("Enter a number: ");
	scanf(" %s", &intInput);
	/*
	while( strpbrk(intInput, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()") != NULL )
	{
		printf("Incorrect input! Try only entering an int. Ex: 10\n");
		printf("Enter a number: ");
		scanf(" %s", &intInput);
	}
	*/
	if( strpbrk(intInput, "1234567890") == NULL )
		return uReturn;
	uReturn = atoi(intInput) + uReturn;
	return uReturn;
}

int main()
{
	int totalNumbers = uInputInt("Enter the total amount of numbers to be added: ");

	for( int i = 0; i < totalNumbers; i++)
	{
		total = uInputAdd();
	}
	printf("The total is: %d\n", total);
	return 0;
}

