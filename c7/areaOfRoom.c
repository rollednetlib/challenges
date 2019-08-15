#include <stdio.h>

int main()
{
	float length, width;
	printf("What is the length of the room in feet? ");
	scanf("%f",&length);
	printf("What is the width of the room in feet? ");
	scanf("%f",&width);
	/* scanf inputs as floats...
	 */
	printf("You entered the dimensions of  %f feet by %f feet.\nThe area is\n%f square feet\n%f square meters\n", length, width, length * width, length * width * 0.3048);
	/* 1 foot = 0.3049 meters
	 */
	return 0;
}
