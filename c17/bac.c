#include <stdio.h>

int main()
{
	float bac, bacPassed, userWeight, userDrinkCount, userHoursPassed, userAlDistrobution, userTotalOz;
	char userGender;
	printf("What is your weight (LBs)? ");
	scanf(" %f", &userWeight);
	printf("What is your gender (m/f)? ");
	scanf(" %c", &userGender);
	printf("How many 12oz cans have you had? ");
	scanf(" %f", &userDrinkCount);
	printf("How many hours has it been since last drink? ");
	scanf(" %f", &userHoursPassed);

	userAlDistrobution = ((userGender == 'm')) ? 1.73 : 1.66;

	userTotalOz = userDrinkCount * 12;
	bac = (((userTotalOz * 5.14) / (userWeight * userAlDistrobution)) - (0.015 * userHoursPassed))/ 10;
	char * response;
	response = ((bac > 0.08)) ? " not " : " ";
	printf("Your BAC is %.2f\nIt is%slegal for you to drive.\n", bac, response);
	
	return 0;
}
