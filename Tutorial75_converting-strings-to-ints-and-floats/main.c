#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *myStr = "582";
    char *myStr2 = "582 is my favorite number";
    char *myStr3 = "I like 639";
    char *str = "For 5 eggs it costs $8.94";
    int eggCount;
    float cost;
    // float is same except store in float variable
    // with atof()
    int i = atoi(myStr);
    int i2 = atoi(myStr2);
    int i3 = atoi(myStr3);
    int i4 = atoi(&myStr3[7]);
    printf("%i\n", i);
    printf("%i\n", i2);
    printf("%i\n", i3); //doesn't work
    printf("%i\n", i4);
    sscanf(str, "for %i eggs it costs $%f", &eggCount, &cost);
    printf("For one egg it costs %.2f.\n", (float)eggCount / cost);
    return 0;
}
