#include <stdio.h>

int main(void)
{		
	int lower, upper, sums, lower_sq, upper_sq;

	printf("Enter lower and upper integer limits: ");
	while (scanf("%d %d", &lower, &upper) == 2 && lower != upper)
	{
		lower_sq = lower * lower;
		upper_sq = upper * upper;
		for (sums = 0; lower <= upper; lower++)
			sums += lower * lower;
		printf("The sums of the squares from %d to %d is %d.\n",
				lower_sq, upper_sq, sums);
		printf("Enter lower and upper integer limits: ");
	}

	return 0;
}
