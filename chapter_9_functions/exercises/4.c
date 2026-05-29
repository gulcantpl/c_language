#include <stdio.h>

int dayOfYear(int day, int month, int year);

int main(void)
{
 int day, month,year;

  printf("Enter the date(xx-xx-xxxx)");
   scanf("%d-%d-%d", &day, &month, &year);

   int result = dayOfYear(day, month, year);
   printf("It has been %d days.\n", result);

    return 0;
}


int dayOfYear(int day, int month, int year)
{
    int sum = 0; 
    int numDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   
    for(int i = 0; i < month - 1; i++) {
        sum += numDays[i];
    }
    
    sum += day; 
    
    return sum; 
}