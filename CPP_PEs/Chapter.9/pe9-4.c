#include <stdio.h>

void ravg(double, double);

int main(void)
{
	double number_A, number_B;

	printf("Number A: ");
	scanf("%lf", &number_A);
	printf("Number B: ");
	scanf("%lf", &number_B);

	ravg(number_A, number_B);

	return 0;
}

void ravg(double A, double B)
{
	double sum;

	sum = 1 / A + 1 / B;
	printf("RAVG = %f\n", 1 / sum);
}
