/* global.c -- use an external variable  */
/* But we need change it to not use global variable */
#include <stdio.h>

void critc(int *);

int main(void)
{
	int units = 0;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critc(&units);
	printf("You must have looked it up\n");

	return 0;
}

void critc(int *units)
{
	printf("No lock, my friend. Try again.\n");
	scanf("%d", units);
}
