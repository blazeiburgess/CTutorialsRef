#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    char *sentence = "Bob is fun";
    char *sentence2 = "Tim likes to draw";
    // searches string for vowels in this instance
    char *addr = strpbrk(sentence, "aeiouAEIOU");
    char *addr2 = strpbrk(sentence2, "aeiouAEIOU");
    char *addr3 = strpbrk(sentence2, "xyz");
    printf("%c\n", *addr);
    printf("%c\n", *addr2);
    //find all vowels
    while (addr != NULL)
    {
        printf("%c ", *addr);
        addr = strpbrk(addr + 1, "aeiouAEIOU");
    }
    if (addr != NULL)
        printf("%c\n", *addr3);
    return 0;
}
