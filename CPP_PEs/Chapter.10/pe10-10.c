#include <stdio.h>
#define SIZE 4

void sumup(int [], int [], int [], int);

int main(void)
{
	int arr1[SIZE] = {2, 4, 5, 8};
	int arr2[SIZE] = {1, 0, 4, 6};
	int arr3[SIZE];
	
	sumup(arr1, arr2, arr3, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr3[i]);
	putchar('\n');

	return 0;
}

void sumup(int a[], int b[], int c[], int n)
{
	for (int i = 0; i < n; i++)
		c[i] = a[i] + b[i];
}
