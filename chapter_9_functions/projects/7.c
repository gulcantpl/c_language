#include <stdio.h>

int power(int x, int n);


int main(void)
{
  int x,n;

   printf("Enter the base x and the power n: ");
    scanf("%d %d", &x, &n);

   int result = power(x,n);

    printf("The result is: %d\n", result);

    return 0;
}

int power(int x, int n)
{
    int result;

    if (n == 0) {
        result = 1;
    }
    else if (n % 2 == 0) {
        result = power(x, n / 2) * power(x, n / 2);
    }
    else {
        result = x * power(x, n - 1);
    }

    return result;
}