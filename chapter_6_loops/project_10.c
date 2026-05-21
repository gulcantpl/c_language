#include <stdio.h>

int main(void)
{
    int month, day, year;
    int min_month = 0, min_day = 0, min_year = 0;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    min_month = month;
    min_day = day;
    min_year = year;

    while (month != 0 || day != 0 || year != 0) 
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0) {
            break;
        }

        if (year < min_year) {
            min_year = year; min_month = month; min_day = day;
        } else if (year == min_year) {
            if (month < min_month) {
                min_year = year; min_month = month; min_day = day;
            } else if (month == min_month) {
                if (day < min_day) {
                    min_year = year; min_month = month; min_day = day;
                }
            }
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", min_month, min_day, min_year);
    return 0;
}