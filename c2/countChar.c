#include <unistd.h>

int main(){
	// Loop over input with the use of subscripts
	char buf[50];
	write(1,"What is the input string? ", 27);
	read(0,buf, 50);
	char *ps = buf;
	while(*ps != '\n')
	{
		printf("%c",*ps);
		ps++;
	}
	printf("has %d characters\n", i);
	/*
	for(int  i = 0; i < strlen(buf); i++)
	{
		if (( strcmp(buf[i],"\n",1) == 1 ))
		{
			printf("\n Char is a NewLine!\n\n");
		}
	}
	*/
//	printf("%d\n",strlen(buf));
	return 0;
}
