#include <stdio.h>

int main(void)
{
    
    int digit_seen[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

    int current_digit;
    long remaining_number;

    printf("Enter a number: ");
    if (scanf("%ld", &remaining_number) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    } 

   
    if (remaining_number < 0) {
        remaining_number = -remaining_number;
    }


    if (remaining_number == 0) {
        digit_seen[1][0] = 1; 
    } 
    else 
    {
        while (remaining_number > 0)
        {
            current_digit = remaining_number % 10;
            digit_seen[1][current_digit]++;
            
            remaining_number /= 10;
        }
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
     printf("\n");

    return 0;
}