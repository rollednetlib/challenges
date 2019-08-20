#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uInputInt(char * prompt)
{
	char input[50];
	int s;
	printf(prompt);
	scanf(" %s", &input);
	while ( strpbrk(input, "1234567890") == NULL )
	{
		printf("Error, not valid input. Try an int Ex: 10\n");
		printf(prompt);
		scanf(" %s", &input);
	} 
	s = atoi(input);
	return s;
}


int main()
{
	int xVal = uInputInt("Enter the x value for the table: ");
	int yVal = uInputInt("Enter the y value for the table: ");
	for ( int x = 0; x < (xVal+1); x++ )
	{
		for ( int y = 0; y < (yVal+1); y ++)
		{
			printf("%d x %d = %d\n", x, y, x * y);
		}
	}
}
