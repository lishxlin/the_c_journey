#include <stdio.h>
#define MAX_LENGTH 256

int main(void)
{
	char a[MAX_LENGTH];
	int chara, count;

	printf("Please enter something below, hit enter to stop reading:\n");
//	chara = -1;
//	do
//	{
//		chara++;
//		scanf("%c", &a[chara]);
//	} while (a[chara] != '\n');
	char chars = 'a';
	for (chara = 0; chars != '\n'; chara++)
	{
		scanf("%c", &a[chara]);
		chars = a[chara];
	}

	for (count = chara - 2; count >= 0; count--)
		printf("%c", a[count]);
	printf("\n");

	return 0;
}
