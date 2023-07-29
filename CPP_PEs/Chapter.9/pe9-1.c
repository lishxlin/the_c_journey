#include <stdio.h>

double min(double, double);

int main(void)
{
	double input_1, input_2, result;

	printf("Enter number 1: ");
	scanf("%lf", &input_1);
	printf("Enter number 2: ");
	scanf("%lf", &input_2);

	result = min(input_1, input_2);
	printf("The minimal number is: %f\n", result);

	return 0;
}

// input_1 -> x
// input_2 -> y
double min(double x, double y)
{
	if (x > y)
		return y;
	else if (x == y)
		return x;
	else
		return x;
}
