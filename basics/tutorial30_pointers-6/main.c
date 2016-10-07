#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5;
    int *iPointer = &i;
    int **ipointerPointer = &iPointer;
    printf("%i\n", **ipointerPointer);

    float f = 6.0;
    float *fPointer = &f;
    float **fpp = &fPointer;
    printf("%f\n", **fpp);
    return 0;
}
