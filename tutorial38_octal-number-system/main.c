#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0b101; //stores the binary of 5 in int i
    int i2 = 0b1011111; //stores the binary of 95 in int i2

    printf("%i\n", i);
    printf("%i\n", i2);

    int octalI = 0637;
    printf("%i\n", octalI); // converts from octal 637 to base-10 415
    printf("%o\n", octalI); // prints octal 637
    return 0;
}
