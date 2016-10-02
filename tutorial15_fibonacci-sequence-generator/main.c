#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber = 1;
    int secondNumber = 1;
    printf("%i\n%i\n", firstNumber, secondNumber);
    for (int i = 1; i <= 18; i++)
    {
        int temp = secondNumber;
        secondNumber += firstNumber;
        firstNumber = temp;
        printf("%i\n", secondNumber);
    }
    return 0;
}
