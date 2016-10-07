#include <stdio.h>
#include <stdlib.h>
// base of hexadeimals is 16 and includes characters
// 0-9 represent themselves
// A-F represent 10-15, respectively
int main()
{
    // '0x' initializes hexadecimal
    int i = 0x7FEA;
    printf("%i\n", i);
    printf("%x\n", i); // lowercase 'x' prints hex characters in lowercase
    printf("%X\n", i); // uppercase 'X' prints hex characters in uppercase
    return 0;
}
