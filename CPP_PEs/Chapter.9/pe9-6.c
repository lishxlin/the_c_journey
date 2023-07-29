// This code contains many dirty fix.
#include <stdio.h>

void sort_doubles(double *, double *, double *);

int main(void) {
	double input_A, input_B, input_C;

	printf("Enter A: ");
	scanf("%lf", &input_A);
	printf("Enter B: ");
	scanf("%lf", &input_B);
	printf("Enter C: ");
	scanf("%lf", &input_C);

	sort_doubles(&input_A, &input_B, &input_C);

	printf("Now A is %f, B is %f, C is %f.\n", input_A, input_B, input_C);
	
	return 0;
}

void sort_doubles(double * A, double * B, double * C) {
	double MAX;
	double MID;
	double MIN;

	// MAX >= MID >= MIN 
	if (*A > *B) {
		if (*B > *C) {
			MAX = *A;
			MID = *B;
			MIN = *C;
		}
		else if (*B < *C) {
			MAX = *A;
			MID = *C;
			MIN = *B;
		}
	}
	else if (*A < *B) {
		if (*B > *C) {
			if (*C > *A) {
				MAX = *B;
				MID = *C;
				MIN = *A;
			}
			else if (*C < *A) {
				MAX = *B;
				MID = *A;
				MIN = *C;
			}
		}
		else if (*B < *C) {
			MAX = *C;
			MID = *B;
			MIN = *A;
		}
	}

	*A = MIN;
	*B = MID;
	*C = MAX;
}
