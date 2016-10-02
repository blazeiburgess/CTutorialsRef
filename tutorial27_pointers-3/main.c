#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[] = { 5, 6, 7, 8 };
    int *pointer = &nums[0];

    printf("%u\n%u\n%i", pointer, nums[0], *pointer
    );
    return 0;
}
