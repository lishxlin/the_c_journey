#include <stdio.h>

int main(void)
{
	int count, integers[8];

	printf("Please enter eight integers: ");
	for (count = 0; count <= 7; count++)
		scanf("%d", &integers[count]);

	for (count = 7; count >= 0; count--)
		printf("%d ", integers[count]);
	printf("\n");

	return 0;
}
