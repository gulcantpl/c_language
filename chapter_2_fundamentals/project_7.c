#include <stdio.h>

#define TWENTY_DOLLAR_BILL 20
#define TEN_DOLLAR_BILL 10
#define FIVE_DOLLAR_BILL 5
#define ONE_DOLLAR_BILL 1

int main(void)
{
   int amountOfDollars;
   int b20, b10, b5, b1;

   printf("Enter the amount of dollars you owe: \n");
   scanf("%d", &amountOfDollars);

    b20 = amountOfDollars / TWENTY_DOLLAR_BILL;
    b10 = ( amountOfDollars % TWENTY_DOLLAR_BILL ) / TEN_DOLLAR_BILL;
    b5 = ( amountOfDollars % TWENTY_DOLLAR_BILL % TEN_DOLLAR_BILL ) / FIVE_DOLLAR_BILL;
    b1 = ( amountOfDollars % TWENTY_DOLLAR_BILL % TEN_DOLLAR_BILL % FIVE_DOLLAR_BILL ) / ONE_DOLLAR_BILL;

    printf("$20 bills: %d\n", b20);
    printf("$10 bills: %d\n", b10);
    printf(" $5 bills: %d\n", b5);
    printf(" $1 bills: %d\n", b1);




    return 0;
}