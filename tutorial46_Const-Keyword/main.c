#include <stdio.h>
#include <stdlib.h>



int main()
{
    // const makes variables that cannot be changed
    const int ii = 4;
    const char c = 'f';
    //redefinitions like:
    // c ='E'
    // will create errors
    int i = 3, j = 7
    // this code makes the integer pointer constant,
    // so the location is constant
    // but the value can be changed
    const int *ip = &i;
    // this code makes it so the location of i
    // can be changed, but the content
    // cannot
    int * const ip = &i;
    // this does both, obviously
    const int * const ip = &i;


    return 0;
}
