#include <stdio.h>
#include <string.h>

const char *search_char(const char *, char);

int main(void)
{
	char string_input[80];
	
	fgets(string_input, 80, stdin);
	printf("%p\n", string_input);
        printf("%p\n", search_char(string_input, 'g'));

	return 0;
}

const char *search_char(const char *orgi, char request)
{
	const char * strings;

	strings = orgi;

	while (strings) {
		if (*strings == request)
			break;
		strings++;
	}

	return strings;
}
