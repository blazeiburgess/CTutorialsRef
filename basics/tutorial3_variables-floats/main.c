#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 2.7;
    float num2 = 5.2;
    float num3 = num1 / num2;
    printf("%f\n", num3);
    printf("%.2f\n", num3);
    printf("%.4f\n", num3);

    char myChar = 'A';
    printf("%c", myChar);

    return 0;
}
