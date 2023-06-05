#include <stdio.h>

int main(void)
{
	double floating_1, floating_2, result;

	printf("Please enter two floating-point numbers: ");
	
	while (scanf("%lf %lf", &floating_1, &floating_2) == 2)
	{
		result = (floating_1 - floating_2) / (floating_1 * floating_2);
		printf("Result of (%g - %g) / (%g * %g) is %g.\n",
			floating_1, floating_2, floating_1, floating_2, result);
		printf("Please enter another two floating-point numbers: ");	
	}

	return 0;
}
