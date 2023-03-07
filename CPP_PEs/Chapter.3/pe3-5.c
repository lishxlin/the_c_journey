#include <stdio.h>

int main(void)
{
	double year_of_sec = 3.156e7;
	double age_of_sec;
	int user_input;

	printf("Please enter your age ---->");
	scanf("%d", &user_input);
	age_of_sec = user_input * year_of_sec;
	printf("Your age is %d, %le in seconds.\n", user_input, age_of_sec);

	return 0;
}	
