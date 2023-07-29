#include <stdio.h>

int show_alphabet(char);

int main(void) {
	char ch;
	int position;

	printf("Hey, enter a letter?('!' to stop)\n");
	while ((ch = getchar()) != '!') {
		position = show_alphabet(ch);
		printf("Position of %c is %d.\n", ch, position);
	}

	return 0;
}

int show_alphabet(char alphabet) {
	if (alphabet < 'A' || (alphabet > 'Z' && alphabet < 'a') || alphabet > 'z')
		return -1;
	else {
		// treat 'A' as 'a'
		// or 'a' as 'A'
		if (alphabet >= 'a')
			return ((int)alphabet - 96);
		else if (alphabet <= 'Z')
			return ((int)alphabet - 64);
		else
			return 0;
	}
}
