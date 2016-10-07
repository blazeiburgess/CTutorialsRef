#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    float num1, num2;
    printf("What operation do you want to do?\n\tA) Addition\n\tB) Subtraction\n\tC) Multiplication\n\tD) Division");
    scanf("%c", &letter);
    printf("Please enter a number: ");
    scanf("%f", &num1);
    printf("Please enter another number: ");
    scanf("%f", &num2);
    if (letter == 'A' || letter == 'a') {
        printf("The sum of %.2f and %.2f is %.2f.\n", num1, num2, num1 + num2);
    } else if (letter == "B" || letter == "b") {
        printf("The difference of %.2f and %.2f is %.2f.\n", num1, num2, num1 - num2);
    } else if (letter == "C" || letter == "c") {
        printf("The difference of %.2f and %.2f is %.2f.\n", num1, num2, num1 * num2);
    } else if (letter == "D" || letter == "d") {
        printf("The quotient of %.2f and %.2f is %.2f.\n", num1, num2, num1 / num2);
    } else {
        printf("Sorry, that's an invalid character.");
    }
    return 0;
}
