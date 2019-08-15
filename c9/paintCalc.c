#include <stdio.h>

int main()
{
	float length, width, areaOfRoom;
	int gallonsNeeded;
	printf("What is the length of the room in feet? ");
	scanf("%f",&length);
	printf("What is the width of the room in feet? ");
	scanf("%f",&width);
	/* scanf inputs as floats...
i	 */

	areaOfRoom = length * width;
	// Typecast float to int
	gallonsNeeded = (int)(areaOfRoom / 350) + 1;
	printf("You will need to purchase %d gallons of\npaint to cover %f square feet.\n", gallonsNeeded, areaOfRoom);
	 /* Looking into reource about proper conversion
	  * https://www.cs.cmu.edu/~rbd/papers/cmj-float-to-int.html 
	  */
	return 0;
}
