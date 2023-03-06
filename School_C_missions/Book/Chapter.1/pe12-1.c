#include <stdio.h>

int main(void)
{
    float pai = 3.141592653589793;
    float radius, C, S;

    // Fetch user input
    printf("Please enter a number --->");
    scanf("%f", &radius);

    // Calculate C & S
    C = 2 * pai * radius;
    S = pai * radius * radius;

    // Print result
    printf("\nC = %f\n", C);
    printf("S = %f\n", S);

    return 0;
}