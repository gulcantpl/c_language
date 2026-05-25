#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false}; 
    int current_digit;
    long remaining_number;
    int repeatedDigits[10];
    int nextRepeatedDigit = 0;

    printf("Enter a number: ");
    scanf("%ld", &remaining_number); 

    while (remaining_number > 0)
    {
        current_digit = remaining_number % 10;
        
  
        if (digit_seen[current_digit] == true)
        {
            repeatedDigits[nextRepeatedDigit] = current_digit;
            nextRepeatedDigit++;
        }
        
        digit_seen[current_digit] = true;
        remaining_number /= 10;
    }
    
    if (nextRepeatedDigit > 0)
    {
        printf("Repeated digit(s): ");
        for (int i = 0; i < nextRepeatedDigit; i++)
        {
            printf("%d ", repeatedDigits[i]);
        }
        printf("\n");
    } 
    else
    {
        printf("No repeated digit\n");
    }

    return 0;
}