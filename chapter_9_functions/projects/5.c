#include <stdio.h>

void createMagicSquare(int n, int magicSquare[n][n]);
void printMagicSquare(int n, int magicSquare[n][n]);

int main(void)
{
 int n;

    printf("Enter square size");
     scanf("%d", &n);

     int magicSquare[n][n];

     createMagicSquare(n, magicSquare);
     printMagicSquare(n, magicSquare);

    return 0;
}

void createMagicSquare(int n, int magicSquare[n][n])
{
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    
    int row = 0;
    int col = n / 2;
    magicSquare[row][col] = 1;

   
    for (int count = 2; count <= n * n; count++) {
        int nextRow = row - 1;
        int nextCol = col + 1; 

       
        if (nextRow < 0) {
            nextRow = n - 1;
        }
      
        if (nextCol >= n) {
            nextCol = 0;
        }

      
        if (magicSquare[nextRow][nextCol] != 0) {
            nextRow = row + 1; 
            nextCol = col;  
        }

        row = nextRow;
        col = nextCol;
        magicSquare[row][col] = count;
    }
}

void printMagicSquare(int n, int magicSquare[n][n])
{
    printf("\n");
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
         
            printf("%5d", magicSquare[row][col]);
        }
        printf("\n"); 
    }
}