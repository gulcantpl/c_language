/*  Ask user to guess a hidden number*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secretNumber;

void initializeNumberGenarator(void);
void chooseNewSecretNumber(void);
void readGuesses(void);

int main(void)
{
    char command;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
     initializeNumberGenarator();

     do
     {
        chooseNewSecretNumber();
        printf("A new number has been chosen.\n");
        readGuesses();
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

void chooseNewSecretNumber(void)
{
    secretNumber = rand() % MAX_NUMBER + 1;
}

void readGuesses(void)
{
    int guess, numGuesses = 0;

    for(;;) {
        numGuesses++;
        printf("Enter guess: ");
         scanf("%d", &guess);
       
        if(guess == secretNumber) {
            printf("You won in %d guesses!\n\n", numGuesses);
            return;
        } else if(guess < secretNumber) {
            printf("Too low; try again.\n");
        } else {
            printf("Too high; try again.\n");
        }
    }
}