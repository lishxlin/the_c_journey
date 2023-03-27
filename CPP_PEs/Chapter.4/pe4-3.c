#include <stdio.h>

int main(void)
{
	float float_Nr;

	scanf("%f", &float_Nr);
	// Format A
	printf("\nFormat A:\n");
	printf("%.1f, %.1e", float_Nr, float_Nr);
	// Format B
	printf("\nFormat B:\n");
	printf("%+.3f, %.3E", float_Nr, float_Nr);

	return 0;
}