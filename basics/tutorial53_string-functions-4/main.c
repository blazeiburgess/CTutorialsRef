#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // searches string for character and
    // returns the character location
    char *sentence = "My name is Adam";
    char *loc = strchr(sentence, 'a');
    char *reverseLoc = strrchr(sentence, 'a');
    if (loc == NULL)
    {
        printf("The character was not found in the text.\n");
        return 0;
    }
    printf("%i\n", loc);
    printf("%i\n", reverseLoc);
    // this gives index within string
    printf("%u\n", loc-sentence);
    return 0;
}
