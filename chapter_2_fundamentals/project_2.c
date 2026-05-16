#include <stdio.h>

int main(void) 
{
    float radius = 10.0f;  
    float pi = 3.14159f;
    float valume;
    
    valume = ( 4.0f / 3.0f ) * pi * radius * radius * radius;
    printf("The volume of a area with radius %.1f is: %.2f\n", radius, valume);
  

    return 0;
}