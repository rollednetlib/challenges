#include <stdio.h>

int main()
{
	float euros, usd, exchangeRate;
	printf("How many euros are you exchaning? ");
	scanf(" %f", &euros);
	printf("What is the exchange rate? ");
	scanf(" %f", &exchangeRate);

	usd = euros * exchangeRate;
	printf("%f euros at an echange rate of %f is\n%f U.S. dollars.\n", euros, exchangeRate, usd);
	return 0;
}
