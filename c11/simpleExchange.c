#include <stdio.h>
#include <math.h>
#include <fenv.h>

int main()
{
	float euros, usd, exchangeRate;
	printf("How many euros are you exchaning? ");
	scanf(" %f", &euros);
	printf("What is the exchange rate? ");
	scanf(" %f", &exchangeRate);

	usd = roundf(euros * exchangeRate * 100) / 100;
	/* Use multiply euro exchange result by 100 
	 * so roundf rounds the last 2 decimal places only.
	 */
	printf("%f euros at an echange rate of %f is\n%.2f U.S. dollars.\n", euros, exchangeRate, usd);
	return 0;
}
