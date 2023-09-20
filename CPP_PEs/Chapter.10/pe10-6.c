#include <stdio.h>

void reverse(double *, int);

int main(void)
{
	double arr[6] = {2.33, 6.54, 9.32, 7.25, 1.023, 0.258};
	
	printf("There is the original: ");
	for (int i = 0; i < 6; i++)
		printf("%lf ", arr[i]);
	printf("\n");
	printf("Here is the reversed one: ");
	reverse(arr, 6);
	printf("\n");
	
	return 0;
}

void reverse(double *a, int n)
{
	double temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%lf ", a[i]);
}