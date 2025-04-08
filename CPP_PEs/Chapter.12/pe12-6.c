#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

static int counter = 0;

int rand_num(void);

int main(void)
{
	int numbers[10] = {0};
	puts("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t");
	puts("===============================");
	while (counter++ < 100) {
		switch (rand_num()) {
		case 1:
			numbers[0]++;
			break;
		case 2:
			numbers[1]++;
			break;
		case 3:
			numbers[2]++;
			break;
		case 4:
			numbers[3]++;
			break;
		case 5:
			numbers[4]++;
			break;
		case 6:
			numbers[5]++;
			break;
		case 7:
			numbers[6]++;
			break;
		case 8:
			numbers[7]++;
			break;
		case 9:
			numbers[8]++;
			break;
		case 10:
			numbers[9]++;
			break;
		default:
			break;
		}
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", numbers[0], numbers[1], numbers[2], numbers[3],
	       numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9]);
	sleep(1);
	}	
	return 0;
}

int rand_num(void)
{
	srand((unsigned int)time(0));
	return rand() % 10 + 1;
}
