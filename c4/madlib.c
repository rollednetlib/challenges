#include <stdio.h>

int main()
{
	char noun[50];
	char verb[50];
	char adjective[50];
	printf("Enter a noun: ");
	gets(noun);
	printf("Enter a verb: ");
	gets(verb);
	printf("Enter an adjective: ");
	gets(adjective);
	printf("Do you %s your %s %s? That sure is disturbing.\n", verb, adjective, noun);
	return 0;
}
