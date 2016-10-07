#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Adam";
    char sentence[] = "This is a sentence and a test of string representation.";
    char nameInput[20];
    printf("%c\n", name[0]);
    // print the whole string
    printf("%s\n", name);
    printf("%s\n", sentence);
    printf("Please enter your name: ");
    scanf("%s", &nameInput);
    printf("Nice to meet you %s.", nameInput);
    return 0;
}
