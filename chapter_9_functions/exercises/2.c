#include <stdio.h>

int check(int x, int y, int n);

int main(void)
 {
    int x, y, n;
 
   printf("Enter X coordinate, Y coordinate, and Grid Size (N) separated by spaces: ");
     scanf("%d %d %d", &x, &y, &n);

     int result = check(x, y, n);


    return 0;
 }


int check(int x, int y, int n)
{
  
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1) {
        printf("Result: Valid coordinates.\n");
        return 1; 
    } 
    
    else {
        printf("Result: Out of bounds!\n");
        return 0; 
    }
}