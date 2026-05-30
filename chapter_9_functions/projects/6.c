#include <stdio.h>

int evaluatePolynomial(int x);

int main(void)
{
   int x;

   printf("Enter the x value($$3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6$$)");
    scanf("%d", &x);

  evaluatePolynomial(x);

   printf("The result is: %d", evaluatePolynomial(x));


    return 0;
}

int evaluatePolynomial(int x)
{
   int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
   return result;
}