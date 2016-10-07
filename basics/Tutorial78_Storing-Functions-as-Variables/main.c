#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

void printResults(int(*someFunction)(int, int), int arg0, int arg1)
{
    printf("The return value of the function is %i.\n", someFunction(arg0, arg1));
}

int main()
{
    int(*someFunction)(int, int) = add;
    printf("%i\n", someFunction(2, 5));
    printResults(mult, 5, 4);
    return 0;
}
