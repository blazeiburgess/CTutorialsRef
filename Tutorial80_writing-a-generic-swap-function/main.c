#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void genericSwap(void *a, void *b, size_t size)
{
    void *temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

typedef struct
{
    int num, denom;
} fraction;

int main()
{
    int num1 = 3;
    int num2 = 5;
    printf("Before: %i and %i\n", num1, num2);
    swap(&num1, &num2);
    printf("After: %i and %i\n", num1, num2);

    fraction frac1 = {1, 2};
    fraction frac2 = {3, 4};

    printf("%i/%i and %i/%i\n", frac1.num, frac1.denom, frac2.num, frac2.denom);
    genericSwap(&frac1, &frac2, sizeof(fraction));
    printf("%i/%i and %i/%i\n", frac1.num, frac1.denom, frac2.num, frac2.denom);
    return 0;
}
