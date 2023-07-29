// Different to PE 9-2?
#include <stdio.h>

void printing(char, int, int); // function to print a formatted character.

int main(void)
{
	char ch;
	int times, lines;

	printf("Give a character to be printed: ");
	scanf("%c", &ch);
	printf("Enter the times that character to be printed: ");
	scanf("%d", &times);
	printf("Enter the lines that character to be printed: ");
	scanf("%d", &lines);

	printing(ch, times, lines);

	return 0;
}

// ch -> X
// times -> T
// lines -> R
void printing(char X, int T, int R)
{
	int times_count, lines_count;

	for (lines_count = 0; lines_count < R; ++lines_count)
	{
		for (times_count = 0; times_count < T; ++times_count)
			putchar(X);

		putchar('\n');
	}
}
