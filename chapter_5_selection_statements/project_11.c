/* formatting two digit to word */
#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("Enter your two digit number: \n");
     scanf("%1d%1d", &num1, &num2);

     switch (num1)
     {
     case 1:
        switch (num2)
        {
        case 0:
         printf("ten\n");
         break;
        case 1:
         printf("eleven\n");
         break;
        case 2:
         printf("Twelve\n");
         break;
        case 3:
         printf("Thirteen\n");
         break;
        case 4:
         printf("Fourteen\n");
         break;
        case 5:
         printf("Fifteen\n");
         break;
        case 6:
         printf("Sixteen\n");
         break;
        case 7:
         printf("Seventeen\n");
         break;
        case 8:
         printf("Eighteen\n");
         break;
        case 9:
         printf("Nineteen\n");
         break;         
        }
        break;
       case 2: 
        printf("Twenty");
        if (num2 == 0) printf("\n");
        break;
       case 3:
        printf("Thirty");
        if (num2 == 0) printf("\n");
        break;
       case 4:
        printf("Fourty");
        if (num2 == 0) printf("\n");
        break;
       case 5:
        printf("Fifty");
        if (num2 == 0) printf("\n");
        break;
       case 6:
        printf("Sixty");
        if (num2 == 0) printf("\n");
        break;
       case 7:
        printf("Seventy");
        if (num2 == 0) printf("\n");
        break;
       case 8:
        printf("Eighty");
        if (num2 == 0) printf("\n");
        break;
       case 9:
        printf("Ninety");
        if (num2 == 0) printf("\n");
        break;      
     }

     switch (num2)
     {
     case 1:
       if(num1 != 1)
       printf("-one\n");
       break;
     case 2:
      if(num1 != 1)
      printf("-two\n");
      break;
     case 3:
      if(num1 != 1)
      printf("-three\n");
      break;
     case 4:
      if(num1 != 1)
      printf("-four\n");
      break;
     case 5:
      if(num1 != 1)
      printf("-five\n");
      break;
     case 6:
      if(num1 != 1)
      printf("-six\n");
      break;
     case 7:
      if(num1 != 1)
      printf("-seven\n");
      break;
     case 8:
      if(num1 != 1)
      printf("-eight\n");
      break;
     case 9:
      if(num1 != 1)
      printf("-nine\n");
      break;        

     }
     


    return 0;
}