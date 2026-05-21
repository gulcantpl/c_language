/* Finds the largest number using a do-while loop as you envisioned */
#include <stdio.h>

int main(void)
{
    float num;
    float largestNum = 0.0f; 
    int scan_result;

    printf("This program finds the largest number.\n");
    printf("To terminate the program, enter 0 or a negative number.\n\n");

  
    do 
    {
        printf("Enter a number: ");
        scan_result = scanf("%f", &num);

        if (scan_result != 1) 
        {
            printf("Error: Invalid input! Please enter a valid number.\n");
            return 1; 
        }

       
        if (num > 0 && num > largestNum) 
        {
            largestNum = num;
        }

    } while (num > 0);
   

    printf("\nThe largest number entered was: %.2f\n", largestNum);

    return 0;
}