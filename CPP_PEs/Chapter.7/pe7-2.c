#include <stdio.h>

int main(void)
{
	char ch;
	int ascii_code, count = 0;

	while ((ch = getchar()) != '#')
	{
		putchar(ch);
		ascii_code = ch;
		printf("(%d) ", ascii_code);
		count++;
		if ((count % 8) == 0)
			printf("\n");
	}

	printf("\nDone\n");

	return 0;
}
