#include <stdio.h>

int main(void)
{
    
    int a[10], i; 
    
    int n = sizeof(a) / sizeof(a[0]);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
    }

    printf("In reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d\n", a[i]);
    }
 
    return 0;
}