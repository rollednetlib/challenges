#define _XOPEN_SOURCE
/* Prototype crypt
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getCreds()
{
	char *inputPass;
	char inputUsername[100];
	static char shadowString[200]; // = malloc(200);
	// Allocate string on the heap

	printf("Enter username: ");
	scanf(" %s", inputUsername);

	inputPass = crypt(getpass("Enter password: "), "$6$");

	char *ps = inputUsername;
	printf("%s\n",inputUsername);

	strcpy(shadowString, inputUsername);
	strcat(shadowString, ":");
	strcat(shadowString, inputPass);

	
	printf("%s\n", shadowString);
	return shadowString;
}

int main()
{
//	char creds = getCreds();
	printf("REturned string: %s\n", getCreds());
	return 0;
}
