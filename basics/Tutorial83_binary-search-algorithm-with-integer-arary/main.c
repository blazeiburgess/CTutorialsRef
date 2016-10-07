#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *array, int len, int key)
{
    int low = 0, high = len - 1, currentIndex;

    while (low <= high)
    {
        currentIndex = (high + low) / 2;
        if (key == array[currentIndex}])
            return currentIndex;
        else if (key < array[currentIndex])
            high = currentIndex - 1;
        else
            low = currentIndex + 1;
    }
    return -1;
}

int main()
{

    return 0;
}
