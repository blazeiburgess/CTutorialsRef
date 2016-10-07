#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

int main()
{
    //anything other than 0 is true
    // determines if is a character or number
    printf("%i\n", isalnum('$'));
    printf("%i\n", isalnum('a'));
    // determines if in alphabet
    printf("%i\n", isalpha('a'));
    printf("%i\n", isalpha('1'));
    // determines if number
    printf("%i\n", isdigit('1'));
    printf("%i\n", isdigit('h'));
    // checks if hexadecimal number
    printf("%i\n", isxdigit('h'));
    printf("%i\n", isxdigit('10'));
    // checks if lowercase
    printf("%i\n", islower('h'));
    printf("%i\n", islower('H'));
    // checks if uppercase
    printf("%i\n", isupper('h'));
    printf("%i\n", isupper('H'));
    //converts to lowercase,
    // does nothing to already lowercase
    // or non-alphabet characters
    printf("%c\n", tolower('H'));
    //converts to uppercase
    printf("%c\n", toupper('b'));
    return 0;
}
