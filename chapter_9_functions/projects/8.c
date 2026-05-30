#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int rollDice(void);
bool playGame(void);

int main(void)
{
    int wins = 0;
    int losses = 0;
    char playAgain;


    srand((unsigned int)time(NULL));

    do {
       
        if (playGame()) {
            printf("You win!\n\n");
            wins++;
        } else {
            printf("You lose!\n\n");
            losses++;
        }

      
        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain); 
        printf("\n");

    } while (playAgain == 'y' || playAgain == 'Y');

  
    printf("--- FINAL SCORE ---\n");
    printf("Wins: %d\n", wins);
    printf("Losses: %d\n", losses);

    return 0;
}


int rollDice(void)
{
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;
    int total = die1 + die2;

    printf("You rolled: %d + %d = %d\n", die1, die2, total);
    return total;
}


bool playGame(void)
{
    printf("--- NEW GAME ---\n");
    int total = rollDice();

  
    if (total == 7 || total == 11) {
        return true; 
    } 
    else if (total == 2 || total == 3 || total == 12) {
        return false; 
    }

    
    int point = total;
    printf("Your point is: %d\n", point);

    while (true) {
        total = rollDice();

        if (total == point) {
            return true; 
        } 
        else if (total == 7) {
            return false; 
        }
       
    }
}