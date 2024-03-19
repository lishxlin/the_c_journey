#include <stdio.h>
#include <string.h>

#define MAXCHAR 80

void reverse_str(char *);

int main(void)
{
	char orgi[MAXCHAR];

	while (strncmp(fgets(orgi, MAXCHAR - 1, stdin), "quit", 4) != 0) {
		reverse_str(orgi);
		puts(orgi);
	}
	
	return 0;
}

void reverse_str(char *orgi)
{
	char altered[MAXCHAR];
	char *operator = orgi;
	int i;

	operator += i = strlen(orgi);

	if (*--operator == '\n')
		--operator;

	for (int i = 0; i < strlen(orgi); i++)
		altered[i] = *operator--;

	for (int i = 0; i < strlen(orgi); i++)
		orgi[i] = altered[i];
	orgi[i - 1] = '\n';
}
