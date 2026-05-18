/* converting 24-hour time to 12-hour form */

#include <stdio.h>

int main(void)
{
   int hour, minute;

   printf("Enter a 24-hour time(xx-xx): \n");
    scanf("%d-%d", &hour, &minute);

    switch (hour)
    {
    case 13:
     printf("1:%d PM\n",minute);
     break;
    case 14:
     printf("2:%d PM\n", minute);
     break;
    case 15:
     printf("3:%d PM\n", minute);
     break;
    case 16:
     printf("4:%d PM\n", minute);
     break;
    case 17:
     printf("5:%d PM\n", minute);
     break;
    case 18:
     printf("6:%d PM\n", minute);
     break;
    case 19:
     printf("7:%d PM\n", minute);
     break;
    case 20:
     printf("8:%d PM\n", minute);
     break;
    case 21:
     printf("9:%d PM\n", minute);
     break;
    case 22:
     printf("10:%d PM\n", minute);
     break;
    case 23:
     printf("11:%d PM\n", minute);
     break;
    case 24:
     printf("12:%d AM\n", minute);
     break;
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
     printf("%d:%d AM\n", hour, minute);
     break;
    case 12:
      printf("12:%d PM\n", minute);
      break;             
    }



    return 0;
}