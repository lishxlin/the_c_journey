#include <stdio.h>
#define ROWS 3
#define COLS 5

void copy(int, int, double [*][*], double [*][*]);
void show(int, int, double [*][*]);

int main(void)
{
	double array[3][5] = {
		{1, 3, 4, 5, 7},
		{5, 4, 6, 7, 7},
		{5, 6, 8.3, 9.4}
	};
	double array2[ROWS][COLS];
	
	copy(3, 5, array2, array);
	show(3, 5, array2);

	return 0;
}

void copy(int n, int m, double p[n][m], double src[n][m])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			p[i][j] = src[i][j];
}

void show(int n, int m, double p[n][m])
{
	for (int i = 0; i < n; i++)
	{
		printf("\n{");
		for (int j = 0; j < m; j++)
			printf("%lf, ", p[i][j]);
		printf("}\n");
	}
}
