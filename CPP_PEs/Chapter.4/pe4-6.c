#include <stdio.h>
#include <string.h>

int main(void)
{	
	char first_name[20];
	char last_name[20];
	int length_a, length_a1;

	printf("Your first name ? ");
	scanf("%s", first_name);
	printf("Your last name ? ");
	scanf("%s", last_name);
	
	// method I
	printf("%s ", first_name);
	printf("%s\n", last_name);
	length_a = strlen(first_name);
	length_a1 = strlen(last_name);
	printf("%*d ", length_a, length_a);
	printf("%*d\n", length_a1, length_a1);

	//method II
	printf("%s ", first_name);
	printf("%s\n", last_name);
	printf("%-*d ", length_a, length_a);
	printf("%-*d\n", length_a1, length_a1);

	return 0;
}
