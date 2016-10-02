#include <stdio.h>
#include <stdlib.h>
//these three functions are equivalents
int isFive(int a)
{
    if (a == 5)
        return 1;
    else
        return 0;
}

int isFive2(int a)
{
    int toReturn = (a == 5) ? 1 : 0;
    return toReturn;
}

int isFive3(int a)
{
    return (a == 5) ? 1 : 0;
}

int main()
{
    printf("%i\n", isFive(0));
    printf("%i\n", isFive2(5));
    printf("%i\n", isFive3(2));
    return 0;
}
