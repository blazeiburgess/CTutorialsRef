#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num, denom;
} fraction;

int main()
{
    int i = 7;
    float f = 3.9;
    fraction fract = {5, 6};

    int *iP = &i;
    float *fP = &f;
    fraction *fractP = &fract;

    //generic pointer can store anything
    void *myPointer = &i;
    void *myPointer2 = &f;
    void *myPointer3 = &fract;

    //printf("%i\n", *myPointer); // doesn't work because doesn't know memory type
    printf("%i\n", (int*)myPointer);
    printf("%f\n", (float*)myPointer2);
    return 0;
}
