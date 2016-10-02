#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // floor == largest int that is less than input
    printf("%.2f\n", floor(6.3));
    // ceil == smallest int greater than iunput
    printf("%.2f\n", ceil(6.3));
    // absolute value
    printf("%.2f\n", fabs(-6.3));

    // abs is in standard library,
    // but only take ints, not floats
    // or doubles
    printf("%.2i\n", abs(-6));

    return 0;
}
