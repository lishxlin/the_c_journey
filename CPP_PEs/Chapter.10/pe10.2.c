#include <stdio.h>
#define NUM 5

void cpy_arr(double [], double [], int);
void cpy_nptr(double *, double *, int);
void cpy_iptr(double *, double *, int);
void show(double *, int);


int main(void)
{
	double source[NUM] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[NUM];
	double target2[NUM];
	double target3[NUM];

	cpy_arr(target1, source, NUM);
	cpy_nptr(target2, source, NUM);
	cpy_iptr(target3, source, NUM);

	show(target1, NUM);
	show(target2, NUM);
	show(target3, NUM);

	return 0;
}

void cpy_arr(double arr[], double src[], int n)
{
	int count;
	for (count = 0; count < n; count++)
		arr[count] = src[count];
}

void cpy_nptr(double *arr, double *src, int n)
{
	int count;
	for (count = 0; count < n; count++)
		*(arr + count) = *(src + count);
}

void cpy_iptr(double *arr, double *src, int n)
{
	int count;
	for (count = 0; count < n; count++)
		*(arr++) = *(src++);
}

void show(double *arr, int n)
{
	int count;
	for (count = 0; count < n; count++)
		printf("%lf ", arr[count]);
	printf("\n");
}