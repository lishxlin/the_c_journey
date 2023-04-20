// Listing 5.13 addemup.c

#include <stdio.h>

int main(void)
{
	int count, sum, n;

	sum = 0;
	count = 0;
	printf("Enter an integer number: ");
	scanf("%d", &n);

	while (count++ < n)
		sum = sum + count;
	printf("sum = %d\n", sum);

	return 0;
}
