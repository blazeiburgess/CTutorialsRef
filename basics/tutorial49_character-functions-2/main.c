#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // \t is tabs
    printf("Joe\tSmith\nis cool!\n");
    // \a is a beep
    printf("\a\n");
    // \b is backspace
    printf("Book\bt\n");
    // \f is formfeed, is depreciated
    // printf("\f");
    // \r is carry return
    // it places cursor at beginning
    // of line, overwriting with any new
    // characters provided.
    printf("Adam\rBob\n");
    // \b is vertical tab, is depreciated

    // if between 0 and 127
    printf(iscntrl('\n'));
    // if character is printing character
    printf(isprint(' '));
    // same as isprint except without ' '
    printf(isgraph(' '));
    // isn't space, letter, or digit
    printf(ispunct('.'));
    // if space, formfeed, tab, vertical tab
    printf(isspace('\t'));
    printf(isspace('q'));

    return 0;
}
