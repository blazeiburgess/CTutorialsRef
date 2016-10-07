#include <stdio.h>
#include <stdlib.h>

int main()
{
    // the number in the [] gives the number of elements in the array
    float myFloats[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter a float: ");
        scanf("%f", &myFloats[i]);
    }
    for (int i = 0; i <5; i++)
        printf("%f\n", myFloats[i] + 2);
    return 0;
}
