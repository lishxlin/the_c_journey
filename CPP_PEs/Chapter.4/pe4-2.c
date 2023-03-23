#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[40];
	int wide;

	printf("Please enter your first name:");
	scanf("%s", first_name);
	// Mission (a)
	printf("This is mission (a):\n\"%s\"\n", first_name);
	// Mission (b)
	printf("This is mission (b):\n\"%20s\"\n", first_name);
	// Mission (c)
	printf("This is mission (c):\n\"%-20s\"\n", first_name);
	// Mission (d)
	wide = strlen(first_name);
	printf("This is mission (d):\n\"%*s\"\n", wide + 3, first_name);

	return 0;
}