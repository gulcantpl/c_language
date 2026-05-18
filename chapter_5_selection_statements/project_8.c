/* Flight departure finder */

#include <stdio.h>

int main(void)
{
    int hour, minute, user_total_minutes;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    user_total_minutes = (hour * 60) + minute;

    printf("Closest departure time is ");

    if (user_total_minutes <= 531) {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    } 
    else if (user_total_minutes <= 631) {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    } 
    else if (user_total_minutes <= 723) {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    } 
    else if (user_total_minutes <= 799) {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    } 
    else if (user_total_minutes <= 892) {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    } 
    else if (user_total_minutes <= 982) {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    } 
    else if (user_total_minutes <= 1222) {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    } 
    else {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}