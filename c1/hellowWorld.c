#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20];
	write(1, "What is your name? ", 20);
	read(0, name, 20);
	char *ps = name;
	printf("Hello, ");
	while ( *ps != '\n' )
	{
		printf("%c", *ps);
		ps++;
	}
	printf(", nice to meet you!\n");
	return 0;
}
