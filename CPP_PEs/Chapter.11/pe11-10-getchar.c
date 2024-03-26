#include <stdio.h>
#include <strings.h>

#define MAXCHAR 80

void show_spaceless(const char);

int main(void)
{
	char this_char;
	char strings0[MAXCHAR];
	int count = 0;
	int IS_ENABLE = 1;
	while (IS_ENABLE) {
		strings0[count] = getchar();
		if (strings0[0] == ' ' || !(count < 80)) {
			IS_ENABLE = 0;
			break;
		}
		if (strings0[count] == '\n') {
			count = 0;
			putchar(0x0A);
			continue;
		}
		show_spaceless(strings0[count]);
		count++;
	}
	
	return 0;
}

void show_spaceless(const char orig)
{
	if ((unsigned)orig != 32)
		putchar(orig);
}
