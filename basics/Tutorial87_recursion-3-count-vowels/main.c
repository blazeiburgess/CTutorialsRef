#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c)
{
    switch (tolower(c))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;

    }
}

int countVowels(char *STR)
{
    if (strlen(STR) == 0)
        return 0;
    return isVowel(STR[0]) + countVowels(STR + 1);
}

int main()
{
    printf("%i\n", countVowels("Adam")); //2
    printf("%i\n", countVowels("aeiou")); //5
    printf("%i\n", countVowels("trlp")); //0
    return 0;
}
