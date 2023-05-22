#include <stdio.h>

int main(void)
{
	const char CHAR = '$';
	int ext_counting, int_counting;

	for (ext_counting = 1; ext_counting <= 5; ext_counting++)
	{
		int_counting = 1;
		while (int_counting++ <= ext_counting)
			printf("%c", CHAR);
		printf("\n");
	}

	return 0;
}
