#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int b;

	printf("What is the first number? ");
	scanf("%d", &a);
	printf("What is the second number? ");
	scanf("%d", &b);
	printf("%d + %d = %d\n",a, b, a + b);
	printf("%d - %d = %d\n",a, b, a - b);
	printf("%d * %d = %d\n",a, b, a * b);
	printf("%d / %d = %d\n",a, b, a / b);

	return 0;
}
