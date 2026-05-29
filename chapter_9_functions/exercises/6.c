#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    int n, k, result;

    printf("Enter the main number (N): ");
    scanf("%d", &n);

    printf("Enter the digit position from the right (K): ");
    scanf("%d", &k);

   
    result = digit(n, k);

    printf("The digit at position %d is: %d\n", k, result);

    return 0;
}

int digit(int n, int k)
{

    if(n < 0) {
        n = -n;
    }

    for (int i = 0; i < k - 1; i++)
    {
        n /= 10;
    }
    
    return n % 10;

    
}