#include <stdio.h>
/*
char* getInput(char *prompt){
	printf(prompt);
	scanf(" %s")
}
*/

int main(){
	float bmi, userWeight, userHeight;
	printf("Enter your weight in LBS: ");
	scanf(" %f", &userWeight);
	printf("Enter your height in INCHES: ");
	scanf(" %f", &userHeight);

	bmi = (userWeight/ (userHeight * userHeight)) * 703;
	printf("Your BMI is %.2f.\n", bmi);
	if ( bmi < 18.5 )
		printf("You are underweight. You should see your doctor\n");
	if ( bmi > 25 )
		printf("You are overweight. You should see your doctor\n");
	if ( bmi >= 18.5 && bmi <= 25 )
		printf("You are within the ideal weight range.\n");
	return 0;

	
}
