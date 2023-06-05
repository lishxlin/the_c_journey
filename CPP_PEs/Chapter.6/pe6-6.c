#include <stdio.h>

int main(void)
{
	int square, cube, lower, upper;

	// Ask for upper limit.
	printf("Upper: ");
	scanf("%d", &upper);

	// Ask for lower limit.
	printf("Lower: ");
	scanf("%d", &lower);

	printf("Numbers|     Squared|     Cubed\n");

	// Now the loop will begin:
	for ( ; lower <= upper; lower++)
	{
		square = lower * lower;
		cube = lower * lower * lower;
		printf("%7d|%12d|%10d\n", lower, square, cube);
	}

	return 0;
}
