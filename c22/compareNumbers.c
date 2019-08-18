#include <stdio.h>
#include <stdlib.h>

int * uInputInt(char * prompt)
{
	char uinput[50];
	static int s;
	printf(prompt);
	scanf(" %s", &uinput);
	while ( strpbrk( uinput, "abcedfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != NULL )
	{
		printf("Input contains invalid characters! Try an int. ex: 10\n");
		printf(prompt);
		scanf(" %s", &uinput);
	}
	s = atoi(uinput);
	return s;
}

int main()
{
	char fn, sn, tn, ln;
	fn = uInputInt("Enter the first number: ");
	sn = uInputInt("Enter the second number: ");
	tn = uInputInt("Enter the third number: ");
	ln = ( fn > sn ) ? (fn > tn ? fn : tn ) : (sn > tn ? fn : tn);
	printf("The largest number is %d.\n", ln);
}

