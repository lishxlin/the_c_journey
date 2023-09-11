#include <stdio.h>

int find_max(int *, int);

int main(void)
{
	int array[5];
	
	printf("Please enter five int number: ");
	scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3],
			&array[4]);
	printf("The largest value is %d.\n", find_max(array, 5));

	return 0;
}

int find_max(int *arr, int n)
{
	int TEMP_MAX, TEMP_STORAGE, count;

	TEMP_MAX = arr[0]; // We assuming the first is the largest.
	for (count = 1; count < n; count++)
		if (arr[count] > TEMP_MAX)
			TEMP_MAX = arr[count];

	TEMP_STORAGE = TEMP_MAX;

	return TEMP_STORAGE;
}	
