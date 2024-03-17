#include <float.h>
#include <stdio.h>
#include <string.h>

#define TRUE -1
#define FALSE 0

int is_within(char, const char *);

int main(void)
{
	char strings[800];
	int is_exist;
	
	fgets(strings, 80, stdin);
	is_exist = is_within(getchar(), strings);

	switch (is_exist) {
	case TRUE:
		puts("Yes, it is exist!");
		break;
	case FALSE:
		puts("No, not exist!");
	}
	
	return 0;
}

int is_within(char to_be_found, const char *orgi)
{
	if (strchr(orgi, to_be_found))
		return TRUE;
	else
		return FALSE;
}
