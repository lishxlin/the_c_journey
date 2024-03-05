#include <stdio.h>
#define ROWS 3
#define COLS 5

double avg_row(int, int, int, double [*][*]);
double avg_rows(double [*][*]);
double find_highest(double[*][*]);

int main(void)
{
	double user[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		printf("Row %d: ", i + 1);
		for (int j = 0; j < COLS; j++)
			scanf("%lf", &user[i][j]);
	}

	// Calculate single row
	for (int i = 0; i < ROWS; i++)
		printf("%lf \n", avg_row(i, ROWS, COLS, user));

	// Calculate total one
	printf("Total avg.: %lf\n", avg_rows(user));

	// Find the biggest
	printf("Highest: %lf\n", find_highest(user));

	return 0;
}

double avg_row(int pr, int r, int c, double src[r][c])
{
	double total = 0;

	for (int i = 0; i < c; i++)
		total += src[pr][i];
	
	return (total / c);
}

double avg_rows(double src[ROWS][COLS])
{
	double total = 0;
	
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			total += src[i][j];

	return (total / (ROWS * COLS));
}

double find_highest(double src[ROWS][COLS])
{
	double MAX = src[0][0];
	
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			if (MAX < src[i][j])
				MAX = src[i][j];
		}
	
	return MAX;
}