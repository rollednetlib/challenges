#include <unistd.h>
#include <string.h>

int main(){
	// Loop over input with the use of subscripts
	char buf[50];
	write(1,"What is the input string? ", 27);
	read(0,buf, 50);
	char *ps = buf;

 	while(*ps == ' ')
	{
		printf("Please enter a valid name");
		ps++;
	}
	printf("has %d characters\n", i);
	
	for(int  i = 0; i < strlen(buf); i++)
	{
		if (buf[i] != '\n' )
		{
			printf("%c",buf[i]);
		} else {
			printf(" has %d characters.\n",i);
		}
	}
//	printf("%d\n",strlen(buf));
	return 0;
}
