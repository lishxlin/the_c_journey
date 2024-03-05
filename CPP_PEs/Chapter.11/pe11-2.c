#include <stdio.h>
#include <string.h>

void fetch_char(char *);

int main(void)
{
	char inputs[80];

	fgets(inputs, 80, stdin);
	fetch_char(inputs);

	return 0;
}

void fetch_char(char * chars)
{
	int i = 0;
	int count = 0;
	int Status = 1;
	
	while (Status)
	{
		if (chars[i] == ' ' || chars[i] == '\t' || chars[i] == '\n' || chars[i] == '\0' || i > 50)
			Status = 0;
		count++;
		i++;
	}

	for (int j = 0; j < count; j++)
	{
                fputs("->", stdout);
                putchar(chars[j]);
		putchar('\n');
	}

	putchar('\n');
}

