#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char c = 255; // can only hold positive numbers, changes range min: 0, max: 255
    unsigned int i = 4294000000; // 4 bytes, maximum
    unsigned short s = 32000; // 2 bytes
    // can also write "short int", which means the same
    unsigned long l = 2147000000; // 4 bytes
    // can also write "long int", which means the same
    unsigned long long ll = 99214576654333443; //8 bytes
    // can also write "long long int", which means the same

    printf("%u\n", c);
    printf("%u\n", s);
    printf("%u\n", i);
    printf("%lu\n", l);
    printf("%llu\n", ll);
    return 0;
}
