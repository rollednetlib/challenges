#include <stdio.h>
#include <math.h>

int main()
{
	float principal, rate, years, numberOfCompounds, investment;
	printf("What is the principal ammount? ");
	scanf(" %f", &principal);
	printf("What is the rate? ");
	scanf(" %f", &rate);
	printf("What is the number of years? ");
	scanf(" %f", &years);
	printf("What is the number of times the interest\nis compounded per year? ");
	scanf(" %f", &numberOfCompounds);

	investment = roundf(
			(principal*powf(
				       	(1 + ((rate / 100 )/numberOfCompounds)
			  	),(numberOfCompounds * years)
			    )
			 ) * 100) / 100;
	printf("$%.2f invested at %f for %.1f years\ncompounded %.0f times per year is $%.2f\n", principal, rate, years, numberOfCompounds, investment);
	return 0;

}
