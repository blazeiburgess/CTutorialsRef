#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    // value of trailing enumates is always 1 higher than
    // the previous one unless that is overridden.
    summer = 50, fall, winter, spring
} season;

void printPhrase(season s);

int main()
{
    season s = summer;
    printPhrase(spring);
    printPhrase(50);
    return 0;
}

void printPhrase(season s)
{
    if (s==summer)
        printf("It's hot out.\n");
    else if (s == fall)
        printf("It's getting cool.\n");
    else if (s == winter)
        printf("It's cold.\n");
    else if (s == spring)
        printf("It's getting warm.\n");
}
