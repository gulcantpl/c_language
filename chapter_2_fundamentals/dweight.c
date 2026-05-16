#include <stdio.h>

int main(void)
{
    // first type of variable, than name of the variable, than the value of the variable.
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;

    weight = (volume + 165) / 166;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);

    return 0;
}

// %d is a format specifier for integers,
// which tells the printf function to expect an integer argument and to print it 