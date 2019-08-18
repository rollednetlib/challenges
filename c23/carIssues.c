#include <stdio.h>
#include <stdlib.h>

int choice(char * prompt)
{
	char uinput[50], s[20];
	printf(prompt);
	scanf(" %s", uinput);
	while( strpbrk( uinput, "yYnN") == NULL )
	{
		printf("Invalid characters! Try entering (y/n) \n");
		printf(prompt);
		scanf(" %s", &uinput);
	}
	for ( int i = 0; i < strlen(uinput); i++)
		s[i]=toupper(uinput[i]);
	printf("Flag: %s\n", s);
	if ( strncmp( s, "Y", 1 ))
		return 0;
	if ( strncmp( s, "N", 1 ))
		return -1;
}

int main()
{
	if(choice("Is the car silent when you turn the key? "))
	{
		if(choice("Are the battery terminals corroded? ") == 0)
			printf("Replace cables and try again.\n");
		else
			printf("Clean terminals and try starting again.\n");
	} else {
		if(choice("Does the car make a clicking noise? "))
			printf("Replace the battery.\n");
		else
			if(choice("Does the car crank up but fail to start? "))
				printf("Check spark plug connections.\n");
			else
				if(choice("Does the engine start and then die? "))
					if(choice("Does your car have fuel injection? "))
						printf("Get it in for service.\n");
					else
						printf("Check to ensure the choke is opening and closing.\n");
				else
					printf("Get it in for service.\n");
				
		
	}
	return 0;
}
