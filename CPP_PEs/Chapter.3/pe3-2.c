#include <stdio.h>

int main(void)
{
	int ascii_code;

	printf("Please enter an ASCII CODE ---->");
	scanf("%d", &ascii_code);
	printf("\nASCII CODE: %d\n<=>\nCHARACTER: %c\n"
		, ascii_code, ascii_code);

	return 0;
}
