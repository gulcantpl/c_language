#include <stdio.h>

int main(void)
{
 int  correctPin, enteredPin, attemptsLeft;

  printf("Please set your pin: ");
   scanf("%d", &correctPin);


    for (attemptsLeft = 3; attemptsLeft > 0; attemptsLeft--)
    {
        printf("Enter your pin to login: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin)
        {
            printf("Your password is correct.\n");
            break; 
        } 
        else 
        {
            printf("Your password is incorrect. Attempts left: %d\n", attemptsLeft - 1);
        }
    }
   
    return 0;
}