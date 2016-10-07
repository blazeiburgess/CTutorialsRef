#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'B';
    // all characters are represented by numbers
    // by getting the int of a character you see the number that stores the character
    printf("%i\n", c);
    // prints the character after the variable
    printf("%c\n", c + 1);
    // gets the character represented by a given number
    printf("%c\n", 65);
    return 0;
}
