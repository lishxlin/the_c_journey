#include <stdio.h>

int main(void)
{
	int count, status;

	printf("Enter the cycles you want: ");
	status = scanf("%d", &count);
	while (status == 1 && count > 0)
	{
		printf("Now print sum of 1.0 + 1.0/2.0 + ... :\n");
		double sum1 = 1.0;
		int loop1_count = 1;
		for ( ; loop1_count <= count; loop1_count++)
		{
			sum1 += (1.0 / ((double) loop1_count + 1.0));
		}
		printf("is %lf.\n", sum1);
		
		printf("Now print sum of 1.0 - 1.0/2.0 + 1.0/3.0 + ... :\n");
		double sum2 = 1.0;
		int min_1, loop2_count = 1;
		for ( ; loop2_count <= count; loop2_count++)
		{
			int inner_count;
			for (min_1 = 1, inner_count = 1; inner_count <= loop2_count;
					inner_count++)
				min_1 *= -1;
			sum2 += min_1 * (1.0 / ((double) loop2_count + 1.0));
		}
		printf("is %lf.\n", sum2);
		
		printf("===============\nNext cycles: ");
		status = scanf("%d", &count);
	}
	printf("DONE.");

	return 0;
}
