#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "pe14-1.h"

extern struct month months[];

int days(const char *month);

int main(void)
{
	char input[10];
	if (scanf("%s", input) != 1)
		exit(1);
	printf("%d\n", days(input));

	return 0;
}

int days(const char *month)
{
	int days = 0;
	int month_num = -1;
        char input[10];
        if (strcpy(input, month) == NULL)
		exit(1);

	input[0] = toupper(input[0]);
	for (int i = 1; input[i] != '\0'; i++)
		input[i] = tolower(input[i]);

	for (int i = 1; i < 12; i++) {
		if (strcmp(input, months[i].month) == 0) {
			month_num = months[i].num;
			break;
		}
	}
	if (month_num == -1) {
		exit(1);
	} else {
		for (int i = 1; i < month_num + 1; i++)
			days += months[i].days;
	}

	return days;
}
