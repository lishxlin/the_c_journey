/* two_func.c -- a program using two functions in one file */

#include <stdio.h>

void butler(void); /* ANSI/ISO C function prototyping (1) */

int main(void)
{
	printf("I will summon the butler function.\n");
	butler(); // (2)
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void) // start of function definiton
{
	printf("You rang, sir?\n"); // (3)
}
