#include <stdio.h>

int main(void)
{
	char input;
	int spaces = 0, nc = 0, oc = 0;

	while ((input = getchar()) != '#')
	{
		if (input == ' ')
			spaces++;
		else if (input == '\n')
			nc++;
		else
			oc++;
	}

	printf("Spaces %d; newlines %d; others %d\n", spaces, nc, oc);
	return 0;
}
