#include <stdio.h>
#include <float.h>

int main(void)
{
	double dbl = 1.0 / 3.0;
	float fl = 1.0 / 3.0;

	// First line: double
	printf("%.4f, %.12f, %.16f\n", dbl, dbl, dbl);
	// Second line: float
	printf("%.4f, %.12f, %.16f\n", fl, fl, fl);
	// Third line: FLT_DIG value
	printf("FLT_DIG: %d\n", FLT_DIG);
	// Fourth line: DBL_DIG value
	printf("DBL_DIG: %d\n", DBL_DIG);

	return 0;
}
