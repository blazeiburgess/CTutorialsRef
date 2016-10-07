#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 3.2;
    float *fPointer = &f;

    char c = 'A';
    char *cPointer = &c;
    // this retrieves the float at the pointer location
    float floatDereferenced = *fPointer;

    printf("%.2f\n", floatDereferenced);
    printf("%c", *cPointer);


    return 0;
}
