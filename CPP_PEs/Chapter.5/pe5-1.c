#include <stdio.h>
#define SIXTY 60

int main(void)
{
	int time_in_hour, time_in_minutes;
	float time_in_min;

	printf("Please enter time in minutes:");
	scanf("%f", &time_in_min);

	while (time_in_min > 0)
	{
		time_in_hour = time_in_min/ SIXTY;
		time_in_minutes = (int)time_in_min % SIXTY;
		printf("Your time in %4d hours %4d minutes.\n", time_in_hour, time_in_minutes);
		printf("\nPlease enter time in  minutes:");
		scanf("%f", &time_in_min);
	}
	printf("Bye!\n");

	return 0;
}
