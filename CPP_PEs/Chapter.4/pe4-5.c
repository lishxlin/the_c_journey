#include <stdio.h>

int main(void)
{
	float speed_in_mbs, size_in_mb, speed_in_mb, eta;

	printf("Please enter your download speed: ");
	scanf("%f", &speed_in_mbs);
	printf("Please enter your file size: ");
	scanf("%f", &size_in_mb);
	speed_in_mb = speed_in_mbs / 8;
	eta = size_in_mb / speed_in_mb;
	printf("At %f megabits per second, a file of %f megabytes\ndownloads in %f seconds.\n",
		speed_in_mbs, size_in_mb, eta);

	return 0;
}
