#include <stdio.h>
#include <stdlib.h>

int main()
{
    // allocates memory
    // returns address of allocation
    int *nums = malloc(20);
    int *nums2 = malloc(sizeof(int) * 5));
    for (int i = 0; i<5; i++)
        nums[i] = i;
    printf("%i\n", nums[0]);
    // deallocates memory
    free(nums2);
    free(nums);
    return 0;
}
