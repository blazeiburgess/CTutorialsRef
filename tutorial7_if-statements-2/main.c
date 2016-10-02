#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar;
    printf("Please enter a character: ");
    scanf("%c", &myChar);
    if (myChar == 'A') {
        printf("Hello");
    } else {
        printf("You entered an invalid character.\n");
    }
    return 0;
}
