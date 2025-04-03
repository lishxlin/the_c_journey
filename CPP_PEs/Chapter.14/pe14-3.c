/* manybook.c -- multiple book inventory
 * We need edit it for PE 14-3
 *
 * Revise the book-listing program in Listing 14.2 so that it prints the book descriptions in
 * the order entered, then alphabetized by title, and then in order of increased value.
 */
#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	100		/* maximum number of books */

struct book {			/* set up book template */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void sort_by_title(struct book *[], int);
void sort_by_value(struct book *, int);

int main(void)
{
	struct book library[MAXBKS]; /* array of book structures */
	struct book *libra_arr = library;
	struct book *libras[MAXBKS];
	int count = 0;
	int index;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
	       && library[count].title[0] != '\0' && library[count].title[0] != '\n') {
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count].value);
		libras[count] = &library[count];
		count++;
		while (getchar() != '\n')
			continue;	/* clear input line */
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if (count > 0) {
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
			       library[index].author, library[index].value);
		printf("Here is the list of your books sorted by title:\n");
		sort_by_title(libras, count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", libras[index]->title,
			       libras[index]->author, libras[index]->value);
		printf("Here is the list of your books sorted by value:\n");
		sort_by_value(libra_arr, count);
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", libra_arr[index].title,
			       libra_arr[index].author, libra_arr[index].value);
	} else {
		printf("No books? Too bad.\n");
	}

	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		find = strchr(st, '\n');		// look for newline
		if (find) {				// if the address is not NULL
			*find = '\n';			// place a null character there
		} else {
			while (getchar() != '\n')
				continue;		// dispose of rest of line
		}
	}
	return ret_val;
}

void sort_by_title(struct book *libr[], int n)
{
	struct book *temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (strcmp(libr[j]->title, libr[j + 1]->title) > 0) {
				temp = libr[j + 1];
				libr[j + 1] = libr[j];
				libr[j] = temp;
			}
		}
	}
}

void sort_by_value(struct book *libr, int n)
{
	struct book temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (libr[j].value > libr[j + 1].value) {
				temp = libr[j + 1];
				libr[j + 1] = libr[j];
				libr[j] = temp;
			}
		}
	}
}
