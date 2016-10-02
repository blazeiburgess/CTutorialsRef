#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2;
    // curly brackets are necessary only if you have more than one line of code in a loop
    do
    {
        printf("%i\n", i);
        i+=2;
    }
    while (i<=50);

    return 0;
}
