#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Please enter a number: ");
    scanf("%i", &num);
    printf("%i\n", num);
    int num2 = 0;
    printf("Please enter a second number: ");
    scanf("%i\n", &num2);
    printf("%i\n", num+num2);

    float num3 = 0;
    printf("Please enter a number: ");
    scanf("%f", &num3);
    printf("%f\n", num3);
    float num4 = 0;
    printf("Please enter a second number: ");
    scanf("%f", &num4);
    printf("%f", num3/num4);
    return 0;

    char c;
    printf("Please ente;r a character: ");
    scanf("%c", &c);
    printf("%c", c);
}
