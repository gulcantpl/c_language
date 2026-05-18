/* finds earliest date */

#include <stdio.h>

int main(void) 
{
    int month1, day1, year1, month2, day2, year2;

    printf("Enter first date(mm/dd/yy): \n");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);

    printf("Enter your second date(mm/dd/yy): \n");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);
  
   
    if (year1 < year2) {
        printf("%02d/%02d/%02d is earlier\n", month1, day1, year1);
    } 
    else if (year2 < year1) {
        printf("%02d/%02d/%02d is earlier\n", month2, day2, year2);
    } 
   
    else { 
        if (month1 < month2) {
            printf("%02d/%02d/%02d is earlier\n", month1, day1, year1);
        } 
        else if (month2 < month1) {
            printf("%02d/%02d/%02d is earlier\n", month2, day2, year2);
        } 
       
        else { 
            if (day1 < day2) {
                printf("%02d/%02d/%02d is earlier\n", month1, day1, year1);
            } 
            else if (day2 < day1) {
                printf("%02d/%02d/%02d is earlier\n", month2, day2, year2);
            } 
            else {
                printf("Both dates are the same!\n");
            }
        }
    }

    return 0;
}