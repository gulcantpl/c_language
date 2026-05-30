/* Ask users to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initializeNumberGenarator(void);
int newSecretNumber(void);
void readGuesses(int secretNumber); 

int main(void)
{
    char command;
    int secretNumber;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initializeNumberGenarator();

     do
     {
        secretNumber = newSecretNumber();
        printf("A new number has been chosen.\n");
        readGuesses(secretNumber);
        printf("PLay again (Y/N)  ");
         scanf(" %c", &command);
         printf("\n");
     } while (command == 'y' || command == 'Y');
     

     return 0;
}

void initializeNumberGenarator(void)
{
    srand((unsigned) time(NULL));
}

int newSecretNumber(void)
{
    return rand() % MAX_NUMBER + 1;
}

void readGuesses(int secretNumber)
{
    int guess, numGuesses = 0;

    for(;;) {
        numGuesses++;
        printf("Enter your guess: ");
          scanf("%d", &guess);

        if(guess == secretNumber) {
            printf("You won in %d guesses!\n\n", numGuesses);
            return;
        }  else if(guess < secretNumber){
            printf("Too low; try again. \n");
        } else {
            printf("Too high; try again. \n");
        }
    }
}