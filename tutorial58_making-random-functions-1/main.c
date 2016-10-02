#include <stdio.h>
#include <stdlib.h>
#include "random.h"

int main()
{
    InitRandom();
    for (int i = 0; i < 50; i++)
        printf("%i\n", randomNumber(50,100));
    return 0;
}
