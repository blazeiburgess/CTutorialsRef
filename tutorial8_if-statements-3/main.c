#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar;
    printf("Please enter a character: ");
    scanf("%c", &myChar);
    // the symbol for 'or' is ||
    // while the symbol for and is &&
    if (myChar == 'A' || myChar == 'a')
        printf("Hello\n");
    else if (myChar == 'B' || myChar == 'b')
        printf("Happy Birthday\n");
    else if (myChar == 'C' || myChar == 'c')
        printf("Welcome\n");
    else
        printf("You entered an invalid character.");
    return 0;
}
