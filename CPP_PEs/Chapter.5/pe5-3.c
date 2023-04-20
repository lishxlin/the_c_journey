#include <stdio.h>
#define DAYS 7

int main(void)
{
	int days, weeks, dayS;
	
	printf("Enter days: ");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / DAYS;
		dayS = days % DAYS;
		printf("%d days are %d weeks, %d days.\n", days, weeks, dayS);
		printf("Enter days: ");
		scanf("%d", &days);
	}
	printf("Bye!\n");

	return 0;
}

