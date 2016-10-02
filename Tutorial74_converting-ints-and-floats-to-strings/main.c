#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 53;
    char str[10] = {0};
    char fstr[30] = {0};
    itoa(myNum, str, 10);
    printf("%s\n", str);
    sprintf(fstr, "%i %.2f %c", 67, 89.45, 'r');
    printf("%s\n", fstr);
    return 0;
}
