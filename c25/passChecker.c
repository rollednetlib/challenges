#include <stdio.h>
#include <string.h>

static int s;
int passwordValidator(char * password)
{
	if( strpbrk(password, "abcdefghijklmnopqrstuvwxyz"))
		s++;
	if( strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"))
		s++;
	if( strpbrk(password, "1234567890"))
		s++;
	if( strpbrk(password, "!@#$%^&*()_+"))
		s++;
	if( strlen(password) > 7 )
		s++;
	return s;
}

int main(int argc, char * argv)
{
	static char password[50];
	int passStrength;
	printf("Enter password: ");
	scanf(" %s", &password);
	int score = passwordValidator(password);
	printf("Score: %d\n", score);
	switch (score)
	{
		case 1:
			printf("The password \'%s\' is a very weak password.\n", password);
			break;;
		case 2:
			printf("The password \'%s\' is a weak password.\n", password);
			break;;
		case 3:
			printf("The password \'%s\' is a strong password.\n", password);
			break;;
		case 4:
			printf("The password \'%s\' is a very strong password.\n", password);
			break;;
	}
	return score;
	
}
