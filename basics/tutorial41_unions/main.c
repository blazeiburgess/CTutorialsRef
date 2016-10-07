#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int i;
    char c;
    char *firstName;
    char *lastName;
} myUnion;

int main()
{
    myUnion mu;
    mu.i = 0;
    mu.c = 4;
    mu.firstName = "Adam";
    mu.lastName = "Smith";

    printf("%i\n", mu.i);
    printf("%c\n", mu.c);
    printf("%s", mu.firstName); // actually returns last name
    return 0;
}
