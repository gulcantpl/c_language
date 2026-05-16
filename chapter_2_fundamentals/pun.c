#include <stdio.h>

// int main(void) 
// {
//     printf("To C, or not to C: that is the question.\n");
//     // return 0;
// }

// every program must have a main function,
// and the main function must return an int.
// if there is no return statement at the end of the main function,
// the compiler will automatically add a return 0; statement,
// which indicates that the program has finished successfully.

// \n is a newline character, which moves the cursor to the next line after printing the string.

int main(void) 
{
    printf("To C, or not to C:\nthat is the question.\n");
    return 0;
}

// if you don't compile after the change, the output will be the same as before,
// because the change is not reflected in the executable file.
// i learned that after trying to run the program over and over again without compiling
// after making changes to the source code, and wondering why the output is not changing.
// it is because the c language is not reading the source code file, it is reading the executable file.