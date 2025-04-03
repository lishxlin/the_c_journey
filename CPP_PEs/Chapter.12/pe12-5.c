#include <stdio.h>
#include <time.h>
#include <time.h>
#include <unistd.h>

static unsigned long int next = 1;

int rand_u(void);
void srand_u(unsigned long int);

int main(void)
{
	int numbers[10] = {0};
	for (int i = 0; i < 10; i++) {
		srand_u((unsigned long int)time(0));
		numbers[i] = rand_u();
		printf("%d ", numbers[i]);
		fflush(stdout);
		sleep(1);
	}
	printf("\n");
	// Sort array
	int temp = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (numbers[j + 1] < numbers[j]) {
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	temp = 0;
	// Print it
	for (int i = 0; i < 10; i++)
		printf("%d ", numbers[i]);
	printf("\n");
	
	return 0;
}

int rand_u(void)
{
	next = next * 54651156181618 + 12345;
	return (next / 65535) % 10;
}

void srand_u(unsigned long int seed)
{
	next = seed;
}
