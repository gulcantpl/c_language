/* formating the ISBN  */

#include <stdio.h>

int main(void)
{
    int prefix, group, code, itemNumber, digit;

    printf("Enter ISBN (with - after each part) : ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &code, &itemNumber, &digit);

    printf("GS1 Prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", group);
    printf("Publisher Code: %d\n", code);
    printf("Item Number: %d\n", itemNumber);
    printf("Check Digit: %d\n", digit);
 


    return 0;
}