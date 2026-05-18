/* Modified verison of broker.c */

#include <stdio.h>

int main(void) 
{
   int shares;
   float pricePerShare, total;
   float commission, rivalCommission;

   printf("Enter shares: \n");
    scanf("%d", &shares);

   printf("Enter the price:  \n");
    scanf("%f", &pricePerShare);
    
   total = shares * pricePerShare;


       if (total < 2500.00f) {
        commission = 30.00f + .017f * total;
    } else if (total < 6250.00f) { 
        commission = 56.00f + .0066f * total;
    } else if (total < 20000.00f) { 
        commission = 76.00f + .0034f * total;
    } else if (total < 50000.00f) { 
        commission = 100.00f + .0022f * total;
    } else if (total < 500000.00f) { 
        commission = 155.00f + .0011f * total; 
    } else { 
        commission = 255.00f + .0009f * total;
    }


    if (commission < 39.00f) {
        commission = 39.00f;
    }

    if (shares < 2000) {
        
        rivalCommission = 33.00f + 0.03f * shares;
    } else {
        rivalCommission = 33.00f + 0.02f * shares;
    }

   printf("Broker's Commission: $%.2f\n", commission);
   printf("Rival Commission: $%.2f\n", rivalCommission);

     


    return 0;
}