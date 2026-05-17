/* Program formatting the phone number */

#include <stdio.h>

int main(void)
{
   int areaCode;
   int prefix;
   int lineNumber;

   printf("Enter phone number [(xxx) xxx-xxxx]: ");
   scanf("(%d) %d-%d", &areaCode, &prefix, &lineNumber);


   printf("You entered %.3d.%.3d.%.4d\n", areaCode, prefix, lineNumber);

   return 0;
}