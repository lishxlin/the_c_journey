// Bing tells me I can use %lf if I want use double instead of float.

#include <stdio.h>

int main(void)
{
	double num;

	printf("Please input a floating-point value:-->");
	scanf("%lf", &num);
	printf("\nFixed-point notation: %lf", num);
	printf("\nExponential notation: %e", num);
	printf("\np notation: %a\n", num);

	return 0;
}
