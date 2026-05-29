#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void generateRandomWalk(char walkBoard[10][10]) {
  
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            walkBoard[row][col] = '.';
        }
    }

   
    srand((unsigned) time(NULL));

    
    int currentRow = 0;
    int currentCol = 0;
    char currentLetter = 'A';
    walkBoard[currentRow][currentCol] = currentLetter;

   
    while (currentLetter < 'Z') {
        bool movePossible = false;
        bool directionChecked[4] = {false, false, false, false}; 

       
        if ((currentRow > 0 && walkBoard[currentRow - 1][currentCol] == '.') ||
            (currentRow < 9 && walkBoard[currentRow + 1][currentCol] == '.') ||
            (currentCol > 0 && walkBoard[currentRow][currentCol - 1] == '.') ||
            (currentCol < 9 && walkBoard[currentRow][currentCol + 1] == '.')) {
            movePossible = true;
        }

   
        if (!movePossible) {
            break;
        }

      
        bool stepTaken = false;
        while (!stepTaken) {
            int direction = rand() % 4; 
            directionChecked[direction] = true;

            int nextRow = currentRow;
            int nextCol = currentCol;

            if (direction == 0) nextRow--;   
            else if (direction == 1) nextRow++; 
            else if (direction == 2) nextCol--; 
            else if (direction == 3) nextCol++; 

           
            if (nextRow >= 0 && nextRow < 10 && nextCol >= 0 && nextCol < 10 && walkBoard[nextRow][nextCol] == '.') {
                currentRow = nextRow;
                currentCol = nextCol;
                currentLetter++;
                walkBoard[currentRow][currentCol] = currentLetter;
                stepTaken = true;
            }
        }
    }
}


void printArray(char walkBoard[10][10]) {
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            printf("%c ", walkBoard[row][col]);
        }
        printf("\n");
    }
}


int main(void) {
    char mainBoard[10][10];

    generateRandomWalk(mainBoard);
    
    printArray(mainBoard);

    return 0;
}