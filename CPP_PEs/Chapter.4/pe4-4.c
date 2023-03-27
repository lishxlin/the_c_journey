#include <stdio.h>

int main(void)
{
	float height;
	char name[20];

	printf("Please enter your name:");	
	scanf("%s", name);
	printf("Please enter your height in cm:");
	scanf("%f", &height);
	printf("%s, you are %.3f m tall.\n", name, height / 100);

	return 0;
}
