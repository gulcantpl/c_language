/* Tests whether a number is prime */

#include <stdio.h>

int isPrime(int n)
{
    int divisor;
    if (n <= 1)
    {
        return 0;
    }

    for ( divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
     scanf("%d", &n);

     if(isPrime(n))
      printf("%d is prime\n", n);
     else 
      printf("%d is not prime\n", n);  

    return 0;
}