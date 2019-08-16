#include <stdio.h>

int main()
{
	printf("What is your age? ");
	int userAge;
	char *response;
	scanf( "%d", &userAge);
	
	response = ((userAge >= 16)) ? " " :" not ";
	printf("You may%sdrive.\n", response);
	return 0;
}
