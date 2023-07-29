#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double number_A, number_B;

	printf("Enter number A: ");
	scanf("%lf", &number_A);
	printf("Enter number B: ");
	scanf("%lf", &number_B);

	larger_of(&number_A, &number_B);

	printf("Now A is %f, B is %f\n", number_A, number_B);

	return 0;
}

void larger_of(double * A, double * B) // A -> Address of number_A; B -> Address of number_B
{
	if (*A > *B)
		*B = *A;
	else if (*A < *B)
		*A = *B;
	else
		printf("Left unchanged.\n");
}

