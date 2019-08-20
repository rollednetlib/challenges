#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float uInputFloat(char * prompt)
{
	char uinput[50];
	static float s;

	printf(prompt);
	scanf(" %s", &uinput);
	while(strpbrk(uinput, "1234567890.") == NULL)
	{
		printf("\n\tOnly enter a float! Ex: 10.2\n\n");
		printf(prompt);
		scanf(" %s", &uinput);

	}
	s = atof(uinput);
	return s;
}

void targetRate(float restingPulse, float age,float wLow, float wHigh)
{
	float targetHeartRate;
	wHigh++;
	printf("Resting Pulse: %.0f\t%.0f\n\nIntensity   | Rate\n--------------\n", restingPulse, age);
	for( float i = wLow; i < wHigh; i++)
	{
		targetHeartRate = ((((220 - age) - restingPulse) * (i/100) ) + restingPulse);
		printf("%.0f%\t    | %.0fbpm\n", i, targetHeartRate);
	}

}

int main()
{
	float restingPulse = uInputFloat("What is your resting pulse? ");
	float age = uInputFloat("What is your age? ");
	float wHigh = uInputFloat("On a scale of 0 to 100, what would be the MOST intensity of the workout? ");
	float wLow = uInputFloat("On a scale of 0 to 100, what would be the LEAST intensity of the workout? ");
	while ( (wHigh < wLow) ){
		printf("\n\tHave you entered the inputs backwards? Try again\n%f < %f\n", wLow, wHigh);
		wHigh = uInputFloat("On a scale of 0 to 100, what is the highest intensity of the workout? ");
		wLow = uInputFloat("On a scale of 0 to 100, what is the lowest intensity of the workout? ");
	}
	targetRate(restingPulse, age, wLow, wHigh);
	return 0;
}
