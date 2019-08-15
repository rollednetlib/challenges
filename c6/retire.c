#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	time_t t = time(NULL);
	/* Returns the number of seconds since epoch and 
	 * returns it to t 
	 * */
	struct tm host_time = *localtime(&t);
	/* host_time structure now has members that
	 * hold intiger values, we can use these for 
	 * the calculator
	 * */
	int workingYears, currentAge, retireAge;
	printf("What is your current age? ");
	scanf("%d", &currentAge);
	printf("At what age would you like to retire? ");
	scanf("%d", &retireAge);
	/* scanf inputs
	 */
	if ((retireAge < currentAge))
	{
		printf("Tough luck\n");
		exit(1);
	}
	/* Conditional to check if the user entered a retirement
	 * age that has passed
	 */
	workingYears = retireAge - currentAge;
	int year = host_time.tm_year + 1900;
	/* Add 1900 to bring the tm_year member of the structure
	 * up to speed, since t was time since epoch
	 */
	printf("It is %d, so you can retire in %d.\n", year, year+workingYears);
	return 0;
}
