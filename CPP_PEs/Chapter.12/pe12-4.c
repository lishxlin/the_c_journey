#include <stdio.h>
#include <unistd.h>

static int called = 0;

int how_called(void);

int main(void)
{
	while (1) {
		printf("%d\n", how_called());
		sleep(1);
	}
	return 0;
}

int how_called(void)
{
	called++;
	return called;
}
