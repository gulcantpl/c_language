#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false}; 
    int current_digit;
    long remaining_number;

    printf("Enter a number: ");
    scanf("%ld", &remaining_number); 

    while (remaining_number > 0)
    {
        current_digit = remaining_number % 10;
        
  
        if (digit_seen[current_digit] == true)
        {
            break;
        }
        
        digit_seen[current_digit] = true;
        remaining_number /= 10;
    }
    

    if (remaining_number > 0)
    {
        printf("Repeated digit\n");
    } 
    else
    {
        printf("No repeated digit\n");
    }

    return 0;
}