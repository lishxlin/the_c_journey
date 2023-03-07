#include <stdio.h>

int main(void)
{
	double mass_mol = 3.0e-23;
	double mass_per_q = 950.0;
	double quarts, mol;

	printf("Enter an amount of water, in quarts ---->");
	scanf("%lf", &quarts);
	mol = (mass_per_q * quarts) / mass_mol;
	printf("The number of water modecules in %lf are %le.\n", quarts, mol);

	return 0;
}
