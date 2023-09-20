#include <stdio.h>

void cpy_nptr(double *, double *, int);
void show(double *, int);

int main(void)
{
	double array1[7] = {3, 4, 8, 9, 1, 2, 0};
	double array2[3];

	cpy_nptr(array2, &array1[2], 3);
	show(array2, 3);

	return 0;
}

void cpy_nptr(double *arr, double *src, int n)
{
	int count;
	for (count = 0; count < n; count++)
		*(arr + count) = *(src + count);
}

void show(double *arr, int n)
{
	int count;
	for (count = 0; count < n; count++)
		printf("%lf ", arr[count]);
	printf("\n");
}