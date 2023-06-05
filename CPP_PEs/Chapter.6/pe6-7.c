#include <stdio.h>
#include <string.h>

int main(void)
{
	char a_char_array[40];
	int len, count;

	printf("Please enter a word: ");
	scanf("%s", a_char_array);

	// To get word lwngth;
	len = strlen(a_char_array);

	for (count = len; count >= 0; count--)
	       printf("%c", a_char_array[count]);
	
	printf("\n");

	return 0;
}
