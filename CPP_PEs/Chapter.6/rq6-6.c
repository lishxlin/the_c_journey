#include <stdio.h>
#define COUNT_CYCLE 5

int main(void)
{
	int count_o, count_in;
	const char DOLLER = '$';
	
	for (count_o = 1; count_o < COUNT_CYCLE; count_o++)
	{	
		for (count_in = 1; count_in < COUNT_CYCLE + 4; count_in++)
			printf("%c", DOLLER);
	
		printf("\n");
	}
	
	return 0;
}
