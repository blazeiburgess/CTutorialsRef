#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;
    int sum = 0;
    while (input != -1)
    {
        sum += input;
        printf("Please enter a number: ");
        scanf("%i", &input);
    }
    printf("\nAll numbers entered total to: %i\n", sum);
    return 0;
}
