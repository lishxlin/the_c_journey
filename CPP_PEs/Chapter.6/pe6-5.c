// This PE should repeat.
#include <stdio.h>

int main(void)
{
	const char CONST_LET = 'A';
	char lets;
	int outer_count, int_count1, int_count2, dec_count, space_count;
	
	//Outer loop for row.
	printf("Please enter a uppercase letter: ");
	scanf("%c", &lets);
	space_count = (int) lets - (int) CONST_LET + 1;

	for (outer_count = 1; outer_count <= space_count; outer_count++)
	{
		// inner loop 1 for printing space.
		for (int_count1 = 0; int_count1 < space_count - outer_count; int_count1++)
			printf(" ");

		// inner loop 2 for printing ascending.
		for (int_count1 = 0; int_count1 < outer_count; int_count1++)
			printf("%c", CONST_LET + int_count1);

		// inner loop 3 for printing decending.
		for (dec_count = outer_count - 2, int_count2 = 0;
			int_count2 < outer_count - 1; int_count2++, dec_count--)
			printf("%c", CONST_LET + dec_count);

		printf("\n");
	}
	return 0;
}
