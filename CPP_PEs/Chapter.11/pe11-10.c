#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXCHAR 80

void show_spaceless(const char *);

int main(void)
{
	char this_char;
	char strings0[MAXCHAR];
	int IS_ENABLE = 1;

	while (IS_ENABLE) {
		fgets(strings0, MAXCHAR - 1, stdin);
		if (isspace(strings0[0]))
			break;
		show_spaceless(strings0);
	}

	return 0;
}

void show_spaceless(const char *orig)
{
	for (int i = 0; i < strlen(orig); i++) {
		if (isspace(orig[i]))
			continue;
		putchar(orig[i]);
	}
	puts("");
}
