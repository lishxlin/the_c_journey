// Question wants me sound an alert and then print some texts.

#include <stdio.h>

int main(void)
{
	char alert = '\a';

	printf("%c", alert);	// Sound an alert.
	printf("Started by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"\n");

	return 0;
}
