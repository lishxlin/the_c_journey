#include <stdio.h>
#include <string.h>

const char *string_in(const char *, const char *);

int main(void)
{
	// We do something simple, so original string is hardcoded.
	char *orgi = "Tsunami is an english word, but it comes from a japanese word tsu na mi.";

	// Code to-do...
        char input[10];
	const char *p;
	
	fgets(input, 9, stdin);

        if ((p = string_in(orgi, input))) {
		puts("Found!");
		puts(orgi);
		for (int i = 1; i < p - &orgi[-1]; i++)
			printf(" ");
		puts("^");
	} else {
		puts("Not found!");
	}

	return 0;
}

const char *string_in(const char *orgi, const char *request)
{
	// Find `request string` from original string.
	int count = 0;
	const char *request_count = request;

	while (*request_count++ != '\0')
		count++;

        if (request[count - 1] == '\n')
		--count;
	
	while (*orgi != '\0') {
		if (strncmp(orgi, request, count) == 0) {
			return orgi;
			break;
		}
		orgi++;
	}

	return NULL;
}
