/* reverse two digit number */

#include <stdio.h>

int main(void)
{
   int number, firstDigit, secondDigit;

   printf("Enter a two digit number: ");
    scanf("%2d", &number);

    firstDigit = number / 10;
    secondDigit = number % 10;

   printf("The reversal is %d%d\n", secondDigit, firstDigit);


    return 0;
}