#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numerator;
    int denominator;
} fraction;

void printFraction(fraction f);

int main()
{
    // structs allow you to group variables
    fraction myFraction;
    myFraction.numerator = 1;
    myFraction.denominator = 3;
    printFraction(myFraction);
    return 0;
}

void printFraction(fraction f)
{
    printf("%i/%i\n", f.numerator, f.denominator);
}
