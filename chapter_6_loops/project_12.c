#include <stdio.h>

int main(void)
{
    float epsilon;
    float e = 1.0f;
    float factorial = 1.0f;
    int i = 1;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    while ((1.0f / factorial) >= epsilon) 
    {
        factorial = factorial * i;
        e = e + (1.0f / factorial);
        i++;
    }

    printf("Approximation of e: %f\n", e);
    return 0;
}