#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main()
{
    for (int i = 0; i < 10000000; i++);
    int ticks = clock();
    printf("%f", (float)ticks/ CLOCKS_PER_SEC);
    return 0;
}
