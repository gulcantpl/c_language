/* GCD of two integers */

#include <stdio.h>

int main(void)
{
 int m, n;
 int remainder;
 int scanResult;

 printf("Enter two integers: ");

  scanResult = scanf("%d %d", &m, &n);
  if(scanResult != 2) {
    printf("Please enter an integer.");
    return 1;
  }

  if( m < 0) m = -m;
  if(n < 0) n = -n;


  while (n != 0)
  {
     remainder = m % n;
     m = n;
     n = remainder;
  }
  
  printf("Greatest common divisor: %d\n", m);

    return 0;
}