#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *got_a_word(char *);

int main(void)
{
	char inputs[50];

	fputs("Word: ", stdout);
	while (got_a_word(inputs) != NULL)
		puts(inputs);

	return 0;
}

char *got_a_word(char *strings)
{
	char ch;
	char *str = strings;

	while ((ch = getchar()) != EOF && isspace(ch))
		continue;

	if (ch == EOF)
		return NULL;
	else
		*str++ = ch;

	while ((ch = getchar()) != EOF && !isspace(ch))
		*str++ = ch;

	*str = '\0';
	
	if (ch == EOF)
		return NULL;
	else
	{
		while (ch != '\n')
			ch = getchar();
		return str;
	}
}
