#include <stdio.h>
#define MAX_NUM 10

void reverse(int *, int);

int main(void)
{
	int input[MAX_NUM];
	for (int count = 0; count < MAX_NUM; count++)
		scanf("%d", &input[count]);

	printf("The original array: ");
	for (int count = 0; count < MAX_NUM; count++)
		printf("%d ", input[count]);

	reverse(input, MAX_NUM);
	printf("\n");
	printf("The reverse one is: ");
	for (int i = 0; i < MAX_NUM; i++)
		printf("%d ", input[i]);
	printf("\n");

	return 0;
}

void reverse(int *wait_process, int max_num)
{
	int temp;

	for (int cycles = 0; cycles < max_num - 1; cycles++)
		for (int inner_cycles = 0; inner_cycles < max_num - 1 - cycles; inner_cycles++)
			if (wait_process[inner_cycles] > wait_process[inner_cycles + 1])
			{
				temp = wait_process[inner_cycles + 1];
				wait_process[inner_cycles + 1] = wait_process[inner_cycles];
				wait_process[inner_cycles] = temp;
			}
}