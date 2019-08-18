#include <stdio.h>
#include <stdlib.h>

int * uInputInt(char * prompt)
{
	char input[50];
	static int s;
	printf(prompt);
	scanf(" %s", &input);
	while ( strpbrk(input, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL )
	{
		printf("Input contains characters, try to enter an int! ex: 10\n");
		printf(prompt);
		getchar();
		scanf(" %s", &input);
	}
	s = atoi(input);
	return s;
}


int main(){
	char *month;
	int uNum = uInputInt("Please enter the numbe rof the month: ");
	switch (uNum)
	{
		case 1:
		 	month="January";
			break;
		case 2:
			month="Febuary";
			
			break;
		case 3:
			month="March";
			
			break;
		case 4:
			month="April";
			
			break;
		case 5:
			month="May";
			
			break;
		case 6:
			month="June";
			
			break;
		case 7:
			month="July";
			
			break;
		case 8:
			month="August";
			
			break;
		case 9:
			month="September";
			
			break;
		case 10:
			month="October";
			
			break;
		case 11:
			month="November";
			
			break;
		case 12:
			month="December";
			
			break;
	}
	printf("The name of the month is %s.\n", month);
	return 0;
}
