#include <stdio.h>

int main(void)
{
   float x;
   float resultX;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    resultX = ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6.0f;
    printf("The result is: %.2f\n", resultX);

    return 0;
}