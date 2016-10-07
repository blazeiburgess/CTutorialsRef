#include "random.h"
#include <stdlib.h>
#include <time.h>

void InitRandom()
{
    srand(time(NULL));
}
int randomNumber(int min, int max)
{
    // puts the random number between min and max
    max -= min;
    return (rand() % max + min);
}

void randomString(char *str, int randomCharCount)
{
    char *charSet = "1234567890qwertyuiopasdfghjklxcvbnm";
    for (int i = 0; i < randomCharCount; i++)
        str[i] = charSet[randomNumber(0, 36)];
}
