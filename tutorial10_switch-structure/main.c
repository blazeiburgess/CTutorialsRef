#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar;
    printf("Print a character: ");
    scanf("%c", myChar);
    switch (myChar) {
        case 'A':
            printf("Hello.\n");
            break;
        case 'B':
            printf("Happy Birthday.\n");
            break;
        case 'C':
            printf("Welcome.\n");
            break;
        default :
            printf("Not a recognized character.");
            break;
    };
    return 0;
}
