#include <stdio.h>
#define SIZE 8

int main(void)
{
	double vals, first[SIZE], second[SIZE];
	int count;

	// insert values to first array.
	printf("Enter 8 values: \n");
	for (count = 1; count <= SIZE; count++)
	{
		printf("The value of %d: ", count);
		scanf("%lf", &first[count]);
	}

	// insert values to second array.
	for (count = 1; count <= SIZE; count++)
	{
		vals += first[count];
		second[count] = vals;
	}

	// display two arrays.
	for (count = 1; count <= SIZE; count++)
		printf("%lf ", first[count]); // First array.
	printf("\n");

	for (count = 1; count <= SIZE; count++)
		printf("%lf ", second[count]); // Second array.
	printf("\n");

	return 0;
}
