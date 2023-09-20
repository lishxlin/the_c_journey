#include <stdio.h>

void cpy_arr(double [], double [], int);

int main(void)
{
	double array[2][4] = {
		{4.9, 5.5, 5.9, 3.9},
		{9.8, 3.3, 4.8, 2.9}
	};
	double array2[2][4];
	for (int i = 0; i < 2; i++)
		cpy_arr(array2[i], array[i], 4);
	
	for (int i = 0; i < 2; i++)
	{
		printf("\n{");
		for (int j = 0; j < 4; j++)
			printf("%lf, ", array2[i][j]);
		printf("}\n");
	}

	return 0;
}

void cpy_arr(double arr[], double src[], int n)
{
	int count;
	for (count = 0; count < n; count++)
		arr[count] = src[count];
}