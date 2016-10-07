#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    // creates a variable giving the address of variable 'i' in memory.
    // '&' before a variable returns the location of variable in memory.
    int *myPointer= &i;
    printf("%u\n%u", myPointer, &i);
    return 0;
}
