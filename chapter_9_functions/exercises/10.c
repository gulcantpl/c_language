#include <stdio.h>

int largest(int a[], int n)
{
 int largestNum = a[0];

 for(int i = 1; i < n; i++) {
    if(largestNum < a[i]) {
        largestNum = a[i];
    }
 }

 return largestNum;
}

int average(int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i]; 
    }

    return sum / n; 
}

int positive(int a[], int n)
{
    int counter = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            counter++;
        }
    }
    return counter;
}