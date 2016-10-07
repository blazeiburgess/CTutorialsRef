#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // obviously reallocates memory
    char *characters = memalloc(sizeof(char) * 10);
    for (int i = 0; i<5; i++)
        characters[i] = i+65; // changes first 5 to 'abcde'
    characters = realloc(characters, sizeof(char) * 5);
    free(characters);
    return 0;
}
