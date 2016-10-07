#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // compares memory allocations
    int nums[] = { 1, 2, 3, 4 };
    int nums2[] = { 1, 2, 3, 4 };
    int nums3[] = { 1, 2, 3, 6 };

    if (memcmp(nums, nums2, sizeof(nums)) == 0)
        printf("They are equal.\n");
    else
        printf("They are not equal.\n");
    if (memcmp(nums, nums3, sizeof(nums)) == 0)
        printf("They are equal.\n");
    else
        printf("They are not equal.\n");

    return 0;
}
