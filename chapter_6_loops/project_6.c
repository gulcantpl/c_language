#include <stdio.h>

int main(void)
{
    int limit;
    int scanResult;

    printf("Enter a number: ");
    scanResult = scanf("%d", &limit);

    if (scanResult != 1) 
    {
        printf("Please enter a valid integer!\n");
        return 1;
    }

   
    for (int i = 2; i * i <= limit; i += 2) 
    {
        printf("%d\n", i * i);
    }

    return 0;
}