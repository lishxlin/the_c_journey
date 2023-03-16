#include <stdio.h>

int main(void)
{
	float cups, pint, ounces, tablespoons, teaspoons;

	printf("The volume in cups: ");
	scanf("%f", &cups);

	pint = cups / 2;
	ounces = cups * 8;
	tablespoons = ounces * 2;
	teaspoons = tablespoons * 3;

	printf("Great, here are equivalent volumes in different units:\n");
	printf("PINTS: %f\n", pint);
	printf("OUNCES: %f\n", ounces);
	printf("TABLESPOONS: %f\n", tablespoons);
	printf("TEASPOONS: %f\n", teaspoons);

	return 0;
}
