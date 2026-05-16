#include <stdio.h>

int main(void)
{
     float x;
     float resultX;

     printf("Enter a number: \n");
        scanf("%f", &x);

        resultX = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (5.0f * x * x * x) - (x * x) + (7.0f * x) -6.0f;
        printf("The result is: %.2f\n", resultX);



    return 0;
}