#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // copies one string to another variable
    char *source = "Adam";
    char *source2 = "Adam is the greatest";
    //dest has to be large enough to
    // hold the source string.
    // program will crash in this instance.
    char dest[5];
    char dest2[2];
    strcpy(dest, source);
    printf("%s\n", dest);

    //safer method, as it truncates the string
    strncpy(dest2, source2, 2);
    printf("%s\n", dest2);
    return 0;
}
