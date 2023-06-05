#include <stdio.h>

int main(void)
{
	char lets;
	int ext_counting, int_counting;

	for (lets = 'A', ext_counting = 1; ext_counting <= 6; ext_counting++)
	{
		for (int_counting = 1; int_counting <= ext_counting;
			lets++, int_counting++)
			printf("%c", lets);
		printf("\n");
	}	
		return 0;
}
