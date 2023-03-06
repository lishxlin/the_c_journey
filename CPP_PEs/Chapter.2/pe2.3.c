#include <stdio.h>

int main(void)
{
	int age, age_in_days;

	age = 18;
	age_in_days = age * 365; // Suppose every years is 365 days.
	printf("Age in years: %d,\nAge in days: %d\n", age, age_in_days);

	return 0;
}
