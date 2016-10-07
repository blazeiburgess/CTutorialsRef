#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[] = { 1, 2, 3, 4, 5 };
    int reversed[5];
    for (int i = 0; i < 5; i++)
    {
        reversed[4-i] = nums[i];
    }
    for (int i = 0; i < 5; i++)
        printf("%i\n", reversed[i]);
    return 0;
}
