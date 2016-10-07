#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main()
{
    int i = 4;
    int rooted = sqrt(i);
    // structure pow(a,b) = a^b
    // returns a double, so answer cannot
    // exceed a doubles limits
    printf("%.2f\n", pow(i,3));
    printf("%.2f\n", pow(i,.5));
    printf("%.2f\n", rooted);

    double ans = pow(i, 1000);
    if (ans == HUGE_VAL)
    {
        printf("The value calculated was too large to fit in a double.\n");
        return 0;
    }
    return 0;
}
