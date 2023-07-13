#include <stdio.h>

int _isPrime(unsigned int);

int main(void)
{
	unsigned int user_input;
	int status, isPrime = 0;

	printf("Enter a POSITIVE number: ");
	status = scanf("%u", &user_input);

	while (status == 1)
	{
		if (user_input == 0 || user_input == 1)
		{
			printf("Should not be 1.Try again.\n");
			return 1;
		}
		else
		{
			isPrime = _isPrime(user_input);
			break;
		}
	}
	
	if (isPrime == 1)
		printf("Number %u is a prime number.\n", user_input);
	else
		printf("Number %u is not a prime number or is '1'\n", user_input);

	return 0;
}

int _isPrime(unsigned int checkpoint)
{
	unsigned n;
	for (n = 2; n <= checkpoint - 1; n++)
		if (checkpoint % n == 0)
			return 0;

	return 1;
}
