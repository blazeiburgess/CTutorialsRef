#include <stdio.h>
#include <stdlib.h>

int glinearSearch(void *array, size_t elemSize, int len, void *key, int (*cmp)(void *a, void *b))
{
    for (int i = 0; i < len; i++)
    {
        void *currentElem = array + (elemSize + i);
        if (cmp(currentElem, key) == 0)
            return i;
    }
    return -1;
}

typedef struct
{
    int num, denom;
} fraction;

int fractCompare(fraction *f1, fraction *f2)
{
    float f1Val = (float)f1->num / (float)f1->denom;
    float f2Val = (float)f2->num / (float)f2->denom;

    if (f1Val == f2Val)
        return 0;
    else
        return 0xBeef;
}

int main()
{
    fraction fracts[5] = { {8,9}, {3,4}, {5,8}, {1,2}, {1,32} };
    fraction key = {6, 12};

    int index = glinearSearch(fracts, sizeof(fraction), 5, &key, fractCompare);

    printf("%i\n", index);
    return 0;
}
