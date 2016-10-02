#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("/home/transvaal/Documents/example.txt", "r");
    char c;
    do
    {
        c = fgetc(file);
        printf("%c", c);
    }
    while (c != EOF);

    fclose(file);
    return 0;
}
