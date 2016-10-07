#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main()
{
    // prints 10 random numbers
    // buy prints same random numbers
    // every time
    for (int i = 0; i < 10; i++)
        printf("%i\n", rand());
    //this changes seed, but only
    // once, making it the same
    // thereafter
    printf("\n");
    srand(10);
    for (int i = 0; i < 10; i++)
        printf("%i\n", rand());
    // uses computers time function to
    // constinuously generate a different
    // seed
    printf("\n");
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        printf("%i\n", rand());
    // makes all random numbers between 0 and 9
    printf("\n");
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        printf("%i\n", rand() % 10);
    // makes all random numbers between 0 and 99
    printf("\n");
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        printf("%i\n", rand() % 100);
    // makes all random numbers between 1 and 50
    printf("\n");
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        printf("%i\n", (rand() % 50) +1);
    return 0;
}
