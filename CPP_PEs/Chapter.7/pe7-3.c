#include <stdio.h>

int main(void)
{
	int number;
	int ec = 0; // even number
	int odc = 0; // odd number
	int total_even = 0, total_odd = 0;

	while (scanf("%d", &number) == 1 && number != 0)
	{
		if ((int)number % 2 == 0)
		{
			++odc;
			total_odd += (int)number;
		}
		else
		{
			++ec;
			total_even += (int)number;
		}
	}
	printf("Total number of even integers: %d;\nThe average value of the even integers: %f.\n",
			ec, (float)total_even / (float)ec);
	printf("Total number of odd integers: %d;\nThe average value of the odd integers: %f.\n",
			odc, (float)total_odd / (float)odc);

	return 0;
}
