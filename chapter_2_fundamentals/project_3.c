#include <stdio.h>

int main(void) 
{
    float radius;
    float pi = 3.14159f;
    float volume;

    printf("Enter the radius of the sphere: \n");
    scanf("%f", &radius);

    volume = ( 4.0f / 3.0f ) * pi * radius * radius * radius;
    printf("The volume of a sphere with radius %.1f is: %.2f\n", radius, volume);
    return 0;
}