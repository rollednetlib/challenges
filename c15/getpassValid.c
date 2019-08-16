#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
//	char state[7];
	char *pass;
	char password[7] = "abc$123";
//	printf("What is the password? ");
//	scanf(" %s", &state);
	pass = getpass("What s the password? ");
	if (( strncmp(pass,"abc$123",7) == 0 ))
	{
		printf("Welcome!\n");
		exit(0);
	}
	printf("I don't know you\n");
	return 0;
}
