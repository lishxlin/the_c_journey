#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "pe14-1.h"

extern struct month months[]; // Should compiled with pe14-1-1.c

int is_leap(int);

int main(const int argc, const char *argv[])
{
	int day, month, year;
	int total = 0;
	if (argc < 4) {
		printf("Usage: %s [DAY] [[MONTH] | [MONTH ABBR] | [MONTH NAME]] [YEAR]\n", argv[0]);
		exit(1);
	}
	day = atoi(argv[1]);
	month = atoi(argv[2]);
	year = atoi(argv[3]);
	if (day == 0 || year == 0) {
		printf("Usage: %s [DAY] [[MONTH] | [MONTH ABBR] | [MONTH NAME]] [YEAR]\n", argv[0]);
		exit(1);		
	}
	if (month == 0) {
		for (int i = 0; i < 12; i++) {
			if (strcmp(argv[2], months[i].month) == 0) {
				month = months[i].num;
				break;
			}
			if (strcmp(argv[2], months[i].abbrev) == 0) {
				month = months[i].num;
				break;
			}
		}
		if (month == 0) {
			printf("Usage: %s [DAY] [[MONTH] | [MONTH ABBR] | [MONTH NAME]] [YEAR]\n", argv[0]);
			exit(1);
		}
	}
	if (day < 0 || month < 1 || month > 12) {
		printf("Usage: %s [DAY] [[MONTH] | [MONTH ABBR] | [MONTH NAME]] [YEAR]\n", argv[0]);
		exit(1);
	}
	if (is_leap(year) == 1 && month == 2 && day > 29) {
		printf("Feb. shouldn't larger than 29 days.\n");
		exit(1);
	} else if (is_leap(year) ==  0 && month == 2 && day > 28) {
		printf("Feb. shouldn't larger than 28 days.\n");
		exit(1);
	}
	if (month != 2 && (day > months[month - 1].days)) {
		puts("Days is not fit month you provided.");
		exit(1);
	}
	for (int i = 0; i <= month - 2; i++)
		total += months[i].days;
	total += day;
	if (is_leap(year) && month > 2)
		total += 1;
	printf("Days is up to %d\n", total);
}

int is_leap(int year)
{
	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
		return 1;
	return 0;
}
