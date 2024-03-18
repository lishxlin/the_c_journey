/* Broken solution for pe11-7 */

#include <stdio.h>
#include <string.h>

char *mystrncpy(char *, const char *, int);

int main(void)
{
	char orgi[20] = "This is my teacher!";
	char input_str[10];

	fgets(input_str, 10, stdin);
	puts(mystrncpy(orgi, input_str, 10));

	return 0;
}

char *mystrncpy(char *orgi, const char *input_str, int maxium)
{
	char *operator = orgi;

	for (int i = 0; i < maxium; i++) {
		if (*input_str == '\0')
			break;
		operator[i] = *(input_str++);
	}

	return orgi;
}
