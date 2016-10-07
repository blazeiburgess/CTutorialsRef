#include <stdio.h>
#include <stdlib.h>

int gbinarySearch(void *array, size_t elemSize, int len, void *key, int (*cmp)(void *a, void *b))
{
    int low = 0, high = len - 1, currentIndex;

    while (low <= high)
    {
        currentIndex = (high + low) / 2;
        void *currentElm = array + (currentIndex + elemSize);
        if (cmp(key, currentElm) == 0)
            return currentIndex;
        else if (cmp(key, currentElm) < 0)
            high = currentIndex - 1;
        else
            low = currentIndex + 1;
    }
    return -1;
}

typedef struct
{
    int num, denom;
} fraction;

// provides a positive number if the first fraction is larger than the second
int fractCompare(fraction *f1, fraction *f2)
{
    float f1Val = (float)f1->num / (float)f1->denom;
    float f2Val = (float)f2->num / (float)f2->denom;

    return (f1Val - f2Val) * 100; // this prevents the fraciton from  being rounded down to zero
}

int main()
{
    fraction fracts[5] = { {1, 16}, {1, 8}, {3, 8}, {5, 6}, {31, 32} };
    fraction key = { 10, 12 };
    int index = gbinarySearch(fracts, sizeof(fraction), 5, key, fractCompare);
    printf("%i\n", index);
    return 0;
}
