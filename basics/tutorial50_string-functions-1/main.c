#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // stores sizeof function
    // size_t always is large enough
    // to fit sizeof on any computer.
    //does not allow negative numbers
    size_t intSize = sizeof(int);
    // len of string not including
    // null terminating char
    char *name = "Adam";
    printf("%u\n", strlen(name));
    // compares strings
    char *name2 = "Bob";
    printf("%i\n", strcmp(name, name2));
    printf("%i\n", strcmp(name, "Adum"));
    printf("%i\n", strcmp(name, name));
    if (strcmp(name, name) == 0)
        printf("The strings are the same.\n");
    // compares a given number of characters in a string
    printf("%i\n", strncmp(name, name2, 3));
    printf("%i\n", strncmp(name, "Adum", 2));
    printf("%i\n", strncmp(name, "Adamantum", 4));
    return 0;
}
