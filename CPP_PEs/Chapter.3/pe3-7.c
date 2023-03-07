// --QUESTION--
// ... Or, if you prefer, ask for the height in centimeters
// and convert that to inches.

#include <stdio.h>

int main(void)
{
	double cm = 2.54;
	double height;

	// Remember, the unit of height that user input should be centimeter.
	printf("Please input your height in centimeter: (cm)");
	scanf("%lf", &height);
	printf("Your height in inch: %lf\n", height / cm);

	return 0;
}
