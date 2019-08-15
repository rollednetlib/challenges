#include <unistd.h>
#include <stdio.h>

int main()
{
	char buf[50];
	read(0,buf, 20);
	write(1,buf, 20);
	printf("Buf: %s\n", buf);
	return 0;
}
