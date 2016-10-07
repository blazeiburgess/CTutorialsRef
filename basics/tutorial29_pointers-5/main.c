#include <stdio.h>
#include <stdlib.h>

void func(int *i);
void funct(int i);

int main()
{
    int myInt = 5;
    int myInt2 = 5;
    // works to change the variable at its location
    func(&myInt);
    // creates a new variable, failing to change the original
    // returns only original
    funct(&myInt2);
    printf("%i\n%i\n", myInt, myInt2);
    return 0;
}

void func(int *i)
{
    *i = 0;
}

void funct(int i)
{
    i = 0;
}
