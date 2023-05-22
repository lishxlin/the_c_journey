#include <stdio.h>

int main(void)
{
	char lets;
	int ext_counting, int_counting;

	for (ext_counting = 1; ext_counting <= 6; ext_counting++)
	{
		for (lets = 'F', int_counting = 1; int_counting <= ext_counting;
			int_counting++, lets--)
			printf("%c", lets);
		printf("\n");
	}

	return 0;
}
