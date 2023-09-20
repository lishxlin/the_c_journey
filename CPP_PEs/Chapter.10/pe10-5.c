#include <stdio.h>

double difference(double *, int);

int main(void)
{
	double arr[6] = {5.2, 6.33, 9.36, 5.2, 8.45, 2.88};

	printf("The difference is %lf\n", difference(arr, 6));

	return 0;
}

double difference(double *a, int n)
{
	double MAX = a[0];
	double MIN = a[5];

	for (int i = 1; i < n; i++)
	{
		if (MAX < a[i])
			MAX = a[i];
	}

	for (int i = 4; i > 0; i--)
	{
		if (MIN > a[i])
			MIN = a[i];
	}

	printf("MAX = %lf\n", MAX);
	printf("MIN = %lf\n", MIN);
	return MAX - MIN;
}
