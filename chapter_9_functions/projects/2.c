#include <stdio.h>


float computeIncomeTax(float income) {
    float tax = 0.00f;

  
    if (income <= 750.00f) {
        tax = income * 0.01f;
    } else if (income <= 2250.00f) {
        tax = 7.50f + ((income - 750.00f) * 0.02f);
    } else if (income <= 3750.00f) {
        tax = 37.50f + ((income - 2250.00f) * 0.03f);
    } else if (income <= 5250.00f) {
        tax = 82.50f + ((income - 3750.00f) * 0.04f);
    } else if (income <= 7000.00f) {
        tax = 142.50f + ((income - 5250.00f) * 0.05f);
    } else {
        tax = 230.00f + ((income - 7000.00f) * 0.06f);
    }

    return tax; 
}


int main(void) {
    float userIncome, taxDue;

    printf("Enter your income: ");
    if (scanf("%f", &userIncome) != 1 || userIncome < 0.00f) {
        printf("Please enter a valid income!\n");
        return 1; 
    }
    
    taxDue = computeIncomeTax(userIncome);

    printf("The tax of your income ($%.2f) is $%.2f\n", userIncome, taxDue);

    return 0;
}