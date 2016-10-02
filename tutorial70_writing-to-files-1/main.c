#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int score;
} Entry;

int main()
{
    FILE *file = fopen("/home/transvaal/Documents/Ctest1.txt", "w");

    // fputc('G', file);    // writes a character
    fputs("Programming is really fun.", file);
    fclose(file);

    return 0;
}
