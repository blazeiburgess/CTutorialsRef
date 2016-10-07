#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int i;
    char *name;
} myStruct;

int main()
{
    myStruct mS;
    mS.i = 5;
    mS.name = "Adam";
    printf("%i\n", sizeof(mS));
    return 0;
}
