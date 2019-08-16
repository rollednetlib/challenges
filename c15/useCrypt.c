#define _XOPEN_SOURCE
/* Prototype crypt
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *inputPass;
	char inputUsername[100];
	char shadowString[200];

	printf("Enter username: ");
	scanf(" %s", inputUsername);

	inputPass = crypt(getpass("Enter password: "), "$6$");

	char *ps = inputUsername;
	printf("%s\n",inputUsername);

	strcpy(shadowString, inputUsername);
	strcat(shadowString, inputPass);




	
	printf("%s\n", shadowString);
	exit(0);
}
