#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	float orderCount, tax, total;
	char state[2];
	printf("What is the order amount? ");
	scanf(" %f", &total);
	printf("What is the two letter state code? ");
	scanf(" %s", &state);
	if (( strncmp(state,"WI",2) == 0 ))
	{
		printf("The subtotal is $%.2f.\n", total);
		tax = roundf( ( total * 0.055)* 100) / 100;
		printf("The tax is $%.2f.\n", tax);
		total = total + tax;
	}
	printf("The total is $%.2f.\n", total);
	return 0;
}
