#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *array, int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int nums[5] = {6, 3, 9, 1, 20};

    // returns index of search term
    printf("%i\n", linearSearch(nums, 5, 1));
    printf("%i\n", linearSearch(nums, 5, 1));
    return 0;
}
