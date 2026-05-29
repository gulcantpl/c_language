#include <stdio.h>

// Fonksiyon prototipini yukarıya ekledik
int numDigits(int n);

int main(void)
{
    int n, result, scanResult;

    printf("Enter a number: ");
    scanResult = scanf("%d", &n);

    if (scanResult != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1; 
    }

    result = numDigits(n);
    printf("The number has %d digits.\n", result);

    return 0;
}

int numDigits(int n)
{
    int count = 0;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        return 1;
    }

    while (n > 0)
    {
        count++;
        n /= 10;
    }
    
    return count;
}