#include <stdio.h>

int main(void)
{
    int days, startingDay;

    printf("Enter number of days in month: ");
    if (scanf("%d", &days) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    if (scanf("%d", &startingDay) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

 
    for (int i = 1; i < startingDay; i++) {
        printf("   "); 
    }

    
    for (int day = 1; day <= days; day++) 
    {
        printf("%3d", day);

        
        if ((startingDay + day - 1) % 7 == 0) {
            printf("\n"); 
        }
    }

    if ((startingDay + days - 1) % 7 != 0) {
        printf("\n");
    }

    return 0;
}