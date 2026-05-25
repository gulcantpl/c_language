#include <stdio.h>

int main(void)
{
    
    int digit_seen[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

    int current_digit;
    long remaining_number;

  
    while (1)
    {
        printf("Enter a number and enter 0 when you want to quit: ");
        if (scanf("%ld", &remaining_number) != 1) {
            printf("Invalid input! Exiting...\n");
            break;
        }

     
        if (remaining_number <= 0) {
            printf("Program terminated.\n");
            break;
        }

        for (int i = 0; i < 10; i++) {
            digit_seen[1][i] = 0;
        }

    
        while (remaining_number > 0)
        {
            current_digit = remaining_number % 10;
            digit_seen[1][current_digit]++;
            remaining_number /= 10;
        }
        

        printf("Digits:      ");
        for (int i = 0; i < 10; i++)
        {
            printf("%3d", digit_seen[0][i]); 
        }
        printf("\n"); 

        printf("Occurrences: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%3d", digit_seen[1][i]);
        }
        printf("\n\n"); 
    }

    return 0;
}