#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
  int scanResult, m, n, result;

  printf("Enter two integers: ");

  scanResult = scanf("%d %d", &m, &n);
  if(scanResult != 2) {
    printf("Please enter an integer.");
    return 1;
  }
   
   result = gcd(m, n);
   printf("Greatest common divisor: %d\n", result);

    return 0;
}


int gcd(int m, int n)
{

 int remainder;

 
  if( m < 0) m = -m;
  if(n < 0) n = -n;


  while (n != 0)
  {
     remainder = m % n;
     m = n;
     n = remainder;
  }
  
  return m;

}