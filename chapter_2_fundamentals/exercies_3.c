#include <stdio.h>

int main(void) {
    int height = 8, lenght = 12, width = 10, volume;

    volume = height * lenght * width;

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", ( volume +165 ) / 166);
    return 0;
}