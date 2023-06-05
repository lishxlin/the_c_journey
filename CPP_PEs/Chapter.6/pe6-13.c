#include <stdio.h>

int main(void)
{
	int ints[8], count, power_of_2;
	
	for (count = 1, power_of_2 = 1; count <= 8; count++)
	{
		power_of_2 *= 2;
		ints[count] = power_of_2;
	}

	count = 1;
	do
	{
		printf("%d ", ints[count]);
	} while (count++ <= 7);
	printf("\n");

	return 0;
}
