/* 3 digit number reverse  */

#include <stdio.h>

int main(void)
{
  int number, firstDigit, secondDigit, thirdDigit;
   printf("Enter 3 digit number: ");
    scanf("%3d", &number);

     firstDigit = number / 100;
     secondDigit = (number / 10) % 10;
     thirdDigit = number % 10;

   printf("Reversed version is %d%d%d\n", thirdDigit, secondDigit, firstDigit);  


    return 0;
}