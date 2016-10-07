#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    char *string = "abcddbcaxyz123**";
    char *charSet = "qwertyuioplkjhgfdsazxcvbnm";
    char *charSetFirst = "abcd";
    char *charSetNot = "*";
    // checks if the first character set is in the second character set
    // for consecutive characters
    printf("%u\n", strspn(string, charSet));
    //starts at index [2]
    printf("%u\n", strspn(string + 2, charSet));
    printf("%u\n", strspn(string, charSetFirst));
    // finds characters not in the character set
    printf("%u\n", strcspn(string, charSetNot));
    return 0;
}
