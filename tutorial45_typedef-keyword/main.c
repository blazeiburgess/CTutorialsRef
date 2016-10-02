#include <stdio.h>
#include <stdlib.h>

struct myStruct
{
    int i;
    char c
};

int main()
{
    // defines UINT64 as 'unsigned long long'
    // works like alias in shell
    typedef unsigned long long UINT64;
    UINT64 myULL = 5;
    printf("%llu\n", myULL);
    // creating a struct without 'typedef' means that you
    // have to call it as a struct in the body.
    // You can 'typedef' even in the main
    struct myStruct m5;
    return 0;
}
