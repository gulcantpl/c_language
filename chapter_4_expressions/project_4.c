/* format the integer to base 8 */

#include <stdio.h>

int main(void)
{
  int num;
  int b1, b2, b3, b4, b5;
  
  printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);



    b5 = num % 8;  
    num = num / 8; 

    b4 = num % 8; 
    num = num / 8;

    b3 = num % 8; 
    num = num / 8; 

    b2 = num % 8;  
    num = num / 8; 

    b1 = num % 8;  
    
   printf("In Octal: %d%d%d%d%d\n", b1, b2, b3, b4, b5); 

    return 0;
}