#include <stdio.h>

int main(void)
{
	int n, result;
	int i = 0;
	int count = 0;

	printf("Enter an integer:");
	scanf("%d", &n);
	while (count++ <= 10)
	{
		result = i++ + n;
		printf("%d ", result);
	}
	printf("\ndone.\n");

	return 0;
}
