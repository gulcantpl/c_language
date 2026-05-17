/* formating the product information */

#include <stdio.h>

int main(void)
{
   int itemNumber, purchaseDay, purchaseMonth, purchaseYear;
   float unitPrice;

   printf("Enter item number: ");
   scanf("%d", &itemNumber);

   printf("Enter unit price: ");
   scanf("%f", &unitPrice);

   printf("Enter purchase date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &purchaseMonth, &purchaseDay, &purchaseYear);

   printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
   printf("%d\t$%.2f\t%.2d/%.2d/%.4d\n", itemNumber, unitPrice, purchaseMonth, purchaseDay, purchaseYear);



    return 0; 
}