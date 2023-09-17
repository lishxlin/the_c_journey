#include <stdio.h>

struct WORKER
{
	long number;
	char name[15];
	long time;
	double pay;
};

int main(void)
{
	struct WORKER per_worker;
	printf("Please enter some informations: \n");
	scanf("%ld", &per_worker.number);
	scanf("%s", per_worker.name);
	scanf("%ld", &per_worker.time);
	scanf("%lf", &per_worker.pay);
	
	printf("RETURN:\n");
	printf("{%ld ", per_worker.number);
	printf("%s ", per_worker.name);
	printf("%ld ", per_worker.time);
	printf("%lf}\n", per_worker.pay);

	return 0;
}
