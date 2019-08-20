#include <stdio.h>
#include <stdlib.h>


int choiceYN(char * prompt)
{
	char uinput[50];
	char s[50];
	printf(prompt);
	scanf(" %s", uinput);
	while (strpbrk( uinput, "yYnN") == NULL )
	{
		printf(prompt);
		scanf(" %s", &uinput);
	}
	for ( int i = 0; i < strlen(uinput); i++)
		s[i]=toupper(uinput[i]);
	if ( strncmp(s, "Y", 1))
		return 0;
	if ( strncmp(s, "N", 1))
		return -1;
}


int * uInputInt(char * prompt)
{
	char uinput[50];
	static int s;
	printf(prompt);
	scanf(" %s", uinput);
	while( strpbrk( uinput, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL )
	{
		printf(prompt);
		scanf(" %s", &uinput);
	}
	s = atoi(uinput);
	return s;
}

int  game(int level)
{
	int number, guess;
	int tries = 1;
	srand(time(0));
	switch (level)
	{
		case 1:
			number = rand() % 10;
			break;
		case 2:
			number = rand() % 100;
			break;
		case 3:
			number = rand() % 1000;
			break;
	}
	printf("Number: %d\n", number);
	guess = uInputInt("I have my number. Whats your guess? ");
	while( guess != number )
	{
		if ( guess < number )
			guess = uInputInt("Too low. Guess again: ");
		if ( guess > number )
			guess = uInputInt("Too high. Guess again: ");
		tries++;
	}	
	if ( tries == 1 )
		printf("You're a mind reader!\n");
	if ( (tries > 1) && (tries < 5) )
		printf("Most impressive.\n");
	if ( (tries > 4) && ( tries < 7) )
		printf("You can do better than that.\n");
	if ( tries > 6 )
		printf("Better luck next time.\n");
	printf("Tries %d\n", tries);
	
	return 0;
}
	

int main()
{
	static int number;
	static int tries;
	static int guess;
	printf("Let's play Guess the Number.\n");
	int choice = 1;
	while (choice != 0)
	{
		int level = uInputInt("Pick a difficulty (1,2, or 3): ");
		int r = game(level);
		choice = choiceYN("Play again? (y/N) ");
	}

	return 0;
}
