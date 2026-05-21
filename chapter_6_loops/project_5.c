#include <stdio.h>

int main(void)
{
    int number, remainder;
    int reversed_number = 0;

    printf("Enter a number to reverse: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Error: Invalid input! Please enter an integer.\n");
        return 1;
    }

    
    do 
    {
        remainder = number % 10;                            
        reversed_number = (reversed_number * 10) + remainder; 
        number = number / 10;                                 
        
    } while (number != 0); 

    printf("Reversed number: %d\n", reversed_number);

    return 0;
}