#include <stdio.h>
#include <string.h>
#include <strings.h>

#define MAXCHAR 80

void copy_man(char (*)[], const char (*)[]);
void sort_by_ascii(const char (*)[]);
void sort_by_length(const char *);
void sort_by_first_word(const char *);

int main(void)
{
	char string0[10][MAXCHAR];
	char action;
	int IS_ENABLE = 1;
	while (IS_ENABLE) {
		for (int i = 0; i < 10; i++)
			fgets(string0[i], MAXCHAR - 1, stdin);
	CHOOSE_START:
		puts("What you want to do next?");
		puts("A. Print strings you type.");
		puts("B. Sorting your strings by ASCII.");
		puts("C. Sorting your strings by length.");
		puts("D. Sorting your strings by first word length.");
		puts("E. QUIT.");
		action = getchar();
		while (getchar() != '\n')
			;

		switch (action) {
		case 'A':
			for (int i = 0; i < 10; i++)
				puts(string0[i]);
			IS_ENABLE = 0;
			break;
		case 'B':
			sort_by_ascii(string0);
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'E':
			IS_ENABLE = 0;
			break;
		default:
			goto CHOOSE_START;
		}
	}
}

// Note the 2d string array process!

void copy_man(char dest[][MAXCHAR], const char src[][MAXCHAR])
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < MAXCHAR; j++)
			dest[i][j] = src[i][j];
}

void sort_by_ascii(const char str[][MAXCHAR])
{
	char strings[12][MAXCHAR];
	copy_man(strings, str);
	for (int i = 0; i < 10; i++) {
		if (strcmp(strings[i], strings[i + 1]) > 0) {
			*strings[11] = *strings[i];
			*strings[i] = *strings[i + 1];
			*strings[i + 1] = *strings[11];
		}
	}

	for (int j = 0; j < 10; j++)
		puts(strings[j]);
}

