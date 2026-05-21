#include <stdio.h>

int main(void)
{
    int n;
    int square = 1; 
    int odd = 3;   

    printf("Enter number of entries in table: ");
    
    
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    
    for (int i = 1; i <= n; i++) 
    {
        printf("%10d%10d\n", i, square); 
        
        square = square + odd; 
        odd = odd + 2;       
    }

    return 0;
}