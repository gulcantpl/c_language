/* Reducing the fraction */

#include <stdio.h>

int main(void)
{
   int x,y;
   int m,n;
   int remainder;
   int result;
   int scanResult;


   printf("Enter a fraction (x/y): ");

   scanResult= scanf("%d/%d", &x, &y);
   if(scanResult != 2) 
   {
    printf("Please enter a valid fraction");
    return 1;
   }

   m = x;
   n = y;

   while (n != 0)
   {
     remainder = m % n;
     m = n;
     n = remainder;
   }
   
   int reducedNum1 = x / m;
   int reducednum2 = y / m;

   printf("In lovest terms: %d/%d\n", reducedNum1, reducednum2);
  

    return 0;
}