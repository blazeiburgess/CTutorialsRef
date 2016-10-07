#include <stdio.h>
#include <stdlib.h>

//in memory a '\0' tells computer to stop read
// thus, if you write c1.name = "John D\0oe"
// it would print "John D"

typedef struct
{
    char *name;
    char *email;
    int *age;
} client;

int main()
{
    client c1;
    c1.name = "John Doe";
    c1.email = "test@example.com";
    c1.age = 45;

    printf("%c\n", c1.name[0]);
    printf("%s\n", c1.name);
    return 0;
}
