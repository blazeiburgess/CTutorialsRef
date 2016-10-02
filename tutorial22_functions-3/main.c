#include <stdio.h>
#include <stdlib.h>

void printError(char message[], int amount);
int add(int num1, int num2);
float multiply(float f1, float f2);

int main()
{
    int i = add(3, 5);
    printf("%i\n", i);
    printf("%.2f\n", multiply(2, 3));
    return 0;
}

void printError(char message[], int amount)
{
    for (int i = 0; i < amount; i++)
        printf("ERROR: %s", message);
}

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

float multiply(float f1, float f2)
{
    return f1 * f2;
}
