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

    fraction otherFraction;
    otherFraction.numerator = 4;
    otherFraction.denominator = 5;
    fraction fArray[] = { myFraction, otherFraction };
    for (int i=0; i<2; i++)
        printFraction(fArray[i]);

    return 0;
}

void printFraction(fraction f)
{
    printf("%i/%i\n", f.numerator, f.denominator);
}
