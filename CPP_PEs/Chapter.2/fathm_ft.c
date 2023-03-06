// fathm_ft.c -- convert 2 fathoms to feet

#include <stdio.h>

int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There're %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feets!\n", 6 * fathoms);

	return 0;
}
