#include <stdio.h>
#include <stdlib.h>

// void creates a function
// functions must always be before main() or called before
void printError()
{
    printf("ERROR!\n");
}

//prototype function, called before defined
void printError2();

int main()
{
    printError();
    printError();
    printError2();
    printError2();
    return 0;
}

void printError2()
{
    printf("ERROR! ERROR!\n");
}
