#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int i;
    char *name;
} myStruct;

int main()
{
    int i = 5;
    int pointer2 = 7;
    int *pointer = &i;
    // addition is not simple addition with pointers
    printf("%u\n%u\n", pointer, pointer + 1);
    // this is 'pointer math'
    // which adds by size of int
    // returns 7 while pointer references 5
    printf("%i", *(pointer+1));

    myStruct mS;
    myStruct *mSpointer = &mS;
    printf("%u\n%u", mSpointer, mSpointer +1);
    return 0;
}
