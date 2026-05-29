#include <stdio.h>


void selectionSort(int arrayToSort[], int currentSize) {
    
    if (currentSize <= 1) {
        return;
    }

    int largestIndex = 0;
    for (int i = 1; i < currentSize; i++) {
        if (arrayToSort[i] > arrayToSort[largestIndex]) {
            largestIndex = i;
        }
    }
  
    int temp = arrayToSort[largestIndex];
    arrayToSort[largestIndex] = arrayToSort[currentSize - 1];
    arrayToSort[currentSize - 1] = temp;

    selectionSort(arrayToSort, currentSize - 1);
}

int main(void) {
    int totalElements;

    printf("Enter the number of elements to sort: ");
    if (scanf("%d", &totalElements) != 1 || totalElements <= 0) {
        printf("Error: Invalid array size!\n");
        return 1; 
    }

    int userArray[totalElements];

    printf("Enter %d integers: ", totalElements);
    for (int i = 0; i < totalElements; i++) {
        scanf("%d", &userArray[i]);
    }

    
    selectionSort(userArray, totalElements);

  
    printf("Sorted Array: ");
    for (int i = 0; i < totalElements; i++) {
        printf("%d ", userArray[i]);
    }
    printf("\n");

    return 0;
}