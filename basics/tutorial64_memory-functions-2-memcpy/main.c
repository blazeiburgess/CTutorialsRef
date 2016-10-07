#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myString[] = "Adam likes dogs.";
    char *name = "Rick";
    int nums[] = { 1, 6, 3, 8 };
    int *newNums = malloc(sizeof(int)*4);
    memcpy(newNums, nums, sizeof(int)*4);
    memcpy(myString[0], name, sizeof(char)*4);
    // don't need to give index if at 0,
    // as it will automatically overwrite
    // from the beginning
    printf("%s\n", myString);
    for (int i=0; i<3; i++)
        printf("%i\n", newNums[i]);

    return 0;
}
