/* modified version of chapter 2 project 8 */

#include <stdio.h>

int main(void)
{
    float loan, rate, payment;
    int payments;


    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate (annual %%): ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments to display: ");
    scanf("%d", &payments);

   
    float monthlyRate = (rate / 100.0f) / 12.0f;

    for (int i = 1; i <= payments; i++)
    {
        loan = loan + (loan * monthlyRate);
        
        loan = loan - payment;

        printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}