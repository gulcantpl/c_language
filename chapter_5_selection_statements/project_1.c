/* Calculates how many digits a number contains */
#include <stdio.h>

int main(void)
{
   int num;

   printf("Enter a number: ");
    scanf("%d", &num);

   if( num >= 0 && num <= 9 ) {
     printf("%d has 1 digit", num);
   } else if(num >= 10 && num <= 99 ) {
     printf("%d has 2 digits", num);
   } else if( num >= 100 && num <= 999 ) {
     printf("%d has 3 digits", num);
   } else if( num >= 1000 && num <= 9999 ) {
     printf("%d has 4 digits", num);
   } else if( num >= 10000 && num <= 99999 ) {
     printf("%d has 5 digits", num);
   }



    return 0;
}