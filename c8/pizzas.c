#include <stdio.h>

int main()
{
	int people, pizzas, slicePerPizza, slicesPerPerson,
	    totalSlices, leftovers;
	printf("How many people? ");
	scanf("%d", &people);
	printf("How many pizzs do you have? ");
	scanf("%d", &pizzas);
	printf("How many slices per pizza? ");
	scanf("%d", &slicePerPizza);

	totalSlices = pizzas * slicePerPizza;
	slicesPerPerson = totalSlices / people;
	leftovers = totalSlices % people;
	/* Modulus will return the leftover count
	 */

	printf("%d people with %d pizzas\n", people, pizzas);
	printf("There are %d slices in total\n",totalSlices);
	printf("Each person gets %d pieces of pizza.\n", slicesPerPerson);
	printf("There are %d leftover pieces.\n",leftovers);
}
