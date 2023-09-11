#include <stdio.h>

int find_max_index(double *, int);

int main(void)
{
	int how_many, count;

	printf("How many numbers you want store?\n--> ");
	scanf("%d", &how_many);
	double array[how_many];
	for (count = 0; count < how_many; count++)
	{
		printf("Now enter number %d: ", count + 1);
		scanf("%lf", &array[count]);
	}

	printf("\nHere is the largest number index: %d.\n",
			find_max_index(array, how_many));

	return 0;
}

int find_max_index(double arr[], int n)
{
	int count, MAX_INDEX;
	double MAX_ONE;
	
	MAX_ONE = arr[0];
	for (count = 1; count < n; count++)
		if (MAX_ONE < arr[count])
		{
			MAX_ONE = arr[count];
			MAX_INDEX = count;
		}
	
	if (MAX_ONE == arr[0])
		return 0;
	else
		return MAX_INDEX;
}
