#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 9;
    if (i == 6)
    {
        printf("Hello");
    } else {
        char c = 'c';
        printf("%c\n", c);
    }
    int i2 = 9;
    if (i2 != 6)
    {
        printf("Hello");
    } else {
        char c2 = 'c';
        printf("%c", c2);
    }
    return 0;
}
