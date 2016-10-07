// these '#'s are a preprocessor directive
// it pulls the code from these files and puts
// them at the head of the code when it compiles
// and converts them to binary

// Without quotes is standard library
// With quotes is your own file
#include <stdio.h>
#include <stdlib.h>

#define MY_NAME "Adam"
#define MY_NAME2 printf("Adam\n");
#define DOUBLE(x) (x*2)

int main()
{
    // define physically replaces every
    // MY_NAME to "Adam"
    MY_NAME2
    printf(MY_NAME);
    printf("\n%i\n", DOUBLE(3));
    return 0;
}
