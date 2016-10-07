#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // uses string token to split strings into smaller strings
    // requires a character array rather than character
    // pointer
    char sentence[] = "Adam is really cool.";
    //this will split at the first instance of a " " or "."
    char *word = strtok(sentence, " .");
    // calling NULL makes the function pick up
    // where it left off last, rather than restart
    char *secondWord = strtok(NULL, " .");
    printf("%s\n", word);
    printf("%s\n", secondWord);
    return 0;
}
