#include <stdio.h>
#include <math.h>

int main()
{
	float principal, interest, years, investment;
	printf("Enter the principal: ");
	scanf(" %f", &principal);
	printf("Enter the rate of interest: ");
	scanf(" %f", &interest);
	printf("Enter the number of years: ");
	scanf(" %f", &years);

	investment = roundf(principal * (1.0 + ((interest / 100 ) * years)) * 100) / 100;
	printf("Investment = %.2f\n", investment);

	

	return 0;
}
