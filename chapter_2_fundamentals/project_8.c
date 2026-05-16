#include <stdio.h>

int main(void)
{
   float amountOfLoan;
   float interestRate;
   float monthlyPayment;
   float monthlyInterestRate;

    printf("Enter the amount of the loan: \n");
    scanf("%f", &amountOfLoan);
    printf("Enter the interest rate: \n");
    scanf("%f", &interestRate);
    printf("Enter the monthly payment: \n");
    scanf("%f", &monthlyPayment);

   monthlyInterestRate = ( interestRate / 100.0f ) / 12.0f;

   amountOfLoan = amountOfLoan + ( amountOfLoan * monthlyInterestRate ) - monthlyPayment;
    printf("The amount of the loan after one month is: %.2f\n", amountOfLoan);
   amountOfLoan = amountOfLoan + ( amountOfLoan * monthlyInterestRate ) - monthlyPayment;
    printf("The amount of the loan after two months is: %.2f\n", amountOfLoan);
   amountOfLoan = amountOfLoan + ( amountOfLoan * monthlyInterestRate ) - monthlyPayment;
    printf("The amount of the loan after three months is: %.2f\n", amountOfLoan);
     



    return 0;
}