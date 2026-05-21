#include <stdio.h>

int main(void)
{
    int n;
    float e = 1.0f;
    float factorial = 1.0f;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        factorial = factorial * i;
        e = e + (1.0f / factorial);
    }

    printf("Approximation of e: %f\n", e);
    return 0;
}