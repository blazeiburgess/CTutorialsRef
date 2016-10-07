#include <stdio.h>
#include <stdlib.h>
// Integral Data Types only store integers, including characters
int main()
{
    char c = 127; // 1 byte, maximum
    int i = 2147000000; // 4 bytes, maximum
    short s = 32000; // 2 bytes
    // can also write "short int", which means the same
    long l = 2147000000; // 4 bytes
    // can also write "long int", which means the same
    long long ll = 214576654333443; //8 bytes
    // can also write "long long int", which means the same

    printf("%i\n", c);
    printf("%i\n", s);
    printf("%i\n", i);
    printf("%li\n", l);
    printf("%lli\n", ll);
    return 0;
}
