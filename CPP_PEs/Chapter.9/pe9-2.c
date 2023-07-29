#include <stdio.h>

void chline(char, int, int);

int main(void)
{
	char ch;
	int row, col;

	printf("Please enter the character you want display: ");
	scanf("%c", &ch);
	printf("Enter how many rows you want display: ");
	scanf("%d", &row);
	printf("Enter how many cols you want display: ");
	scanf("%d", &col);

	chline(ch, row, col);

	return 0;
}

// ch -> X
// row -> R
// col -> C
void chline(char X, int R, int C)
{
	int row_count, col_count;
	for (row_count = 0; row_count < R; ++row_count)
	{
		for (col_count = 0; col_count < C; ++col_count)
			putchar(X);

		putchar('\n');
	}
}
