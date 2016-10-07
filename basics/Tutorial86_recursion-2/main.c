#include <stdio.h>
#include <stdlib.h>

unsigned int sumDigits(unsigned int num)
{
    // base case
    // - stops recursion
    if (num == 0)
        return 0;
    return (num % 10) + sumDigits(num / 10);
}

int main()
{
    printf("%i", sumDigits(1234));
    return 0;
}
