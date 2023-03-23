#include <stdio.h>

int main(void)
{
	char first_name[40];
	char last_name[40];

	printf("Enter your first name:");
	scanf("%s", first_name);
	printf("Enter your last name:");
	scanf("%s", last_name);
	printf("Here is the output:\n%s, %s", last_name, first_name);
	
	return 0;
}