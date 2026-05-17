/* Modified version of section 3.2 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2;

    printf("Enter two fractions separated by a plus sign (e.g., 1/2 + 3/4): ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

    printf("The sum is %d/%d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);


    return 0;
}