#include <stdio.h>

int main(void)
{
	char ch, ch2;
	int e_prefix, count = 0;
	const char STOP = '#';

	while ((ch = getchar()) != STOP)
	{
		switch (ch)
		{
			case 'e': e_prefix = 1;
				  break;
			case '\n': break; // ignore newline
			default: e_prefix = 0;
				 break;
		}

		if (e_prefix == 1) {
			ch2 = getchar(); // read another character
			switch (ch2)
			{
				case 'i': ++count;
					  break;
				default: break;
			}
		}
	}
	printf("\"ei\" appears for %d times.\n", count);

	return 0;
}
