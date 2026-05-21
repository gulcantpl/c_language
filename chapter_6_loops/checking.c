/* Balences a checkbook */

#include <stdio.h>

int main(void)
{
   int cmd;
   float balence = 0.0f, credit, debit;

   printf("*** ACME checkbook-balancing program ***\n");
   printf("Commands: 0 = Clear, 1 = Credit, 2 = Debit, ");
   printf("3 = Balence, 4 = Exit\n\n");

   for(;;) {
    printf("Enter a command: ");
     scanf("%d", &cmd);

     switch(cmd) {
        case 0:
         balence = 0.0f;
         break;
        case 1:
         printf("Enter amount of credit: ");
         scanf("%f", &credit);
         balence += credit;
         break;
        case 2:
         printf("Enter amount of debit: ");
         scanf("%f", &debit);
         balence -= debit;
         break;
        case 3:
         printf("Current balence $%.2f\n", balence);
         break;
        case 4:
         return 0;
          default:
           printf("Commands: 0 = Clear, 1 = Credit, 2 = Debit, ");
           printf("3 = Balence, 4 = Exit\n\n"); 
           break;
     } 
   }

    return 0;
}