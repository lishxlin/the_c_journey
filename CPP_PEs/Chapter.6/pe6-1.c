#include <stdio.h>

int main(void)
{
	char letters, elements[26];
	int counting = 0;

	for (letters = 'a' ; counting <= 25; letters++, counting++)
		elements[counting] = letters;

	for (counting = 0; counting <= 25; counting++)
		printf("%c", elements[counting]);
	printf("\n");
	
	return 0;
}
