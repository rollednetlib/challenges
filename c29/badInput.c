#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uInputInt(char * prompt)
{
	char input[50];
	int s;
	int fail = -1;
	printf(prompt);
	scanf(" %s", &input);
	while ( 1==1 )
	{
		if ( strpbrk(input, "1234567890") != NULL)
		{
			s = atoi(input);
			if ( s == 0 )
			{
				printf("%d is a bad investment\n", s);
				printf(prompt);
				scanf(" %s", &input);
				fail = -1;
			
			} else {
				fail = 0;
				break;
			}
		} else {
			printf("That is invalid input!\n");
			printf(prompt);
			scanf(" %s", &input);
		}
		
	} 
	s = atoi(input);
	return s;
}



int main(){
	int rateOfInvestment;
	int yearsToDouble;
	rateOfInvestment = uInputInt("What is the rate of return? ");
	yearsToDouble = 72/rateOfInvestment;
	printf("It will take you %d years to double your investment.\n", yearsToDouble);
	return 0;
}
