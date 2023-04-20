#include <stdio.h>

double cubed(double input);

int main(void)
{
	double val, cube;

	printf("Enter a number: ");
	scanf("%lf", &val);
	cube = cubed(val);
	printf("The cube of %e is %e\n", val, cube);

	return 0;
}

double cubed(double input)
{
	return input * input * input;
}
