#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // need to allocate more memory to
    // prevent an error when concat-ing
    char firstName[20] = "John ";
    char firstName2[20] = "John ";
    char *lastName = "Doe";
    char *lastName2 = "Doe";
    strcat(firstName, lastName);
    printf("%s\n", firstName);


    strncat(firstName2, lastName2, 1);
    printf("%s\n", firstName2);
    return 0;
}
