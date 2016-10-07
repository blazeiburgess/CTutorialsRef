#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[] = { 4, 6, 7, 2, 3 };
    // gets 7
    printf("%i\n", numbers[2]);
    // gets 4
    printf("%i\n\n", numbers[9]);
    // gets every index
    for (int i = 0; i < 5; i++)
        printf("%i\n", numbers[i]);
    return 0;
}
