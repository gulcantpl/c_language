#include <stdio.h>

int main(void)
{
    float amount;
    float withTax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    withTax = amount * 1.05f;

    printf("With tax added: %.2f\n", withTax);


    return 0;
}