#include <stdio.h>

int count_number(char);

int main(void)
{
	char ch;
	int result = 0;

	while ((ch = getchar()) != '\n')
		result += count_number(ch);
	printf("\nNumber: %d\n", result);

	return 0;
}

int count_number(char fun_ch)
{
	if (fun_ch >= 48 && fun_ch <= 57)
	{
		putchar(fun_ch);
		return 1;
	}
	else
		return 0;
}