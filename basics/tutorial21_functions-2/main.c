#include <stdio.h>
#include <stdlib.h>

void printError(char message[]);
void printErrors(char message[], int amount);

int main()
{
    printError("This message is from the main() function.");
    printErrors("This is displays several of the same message.", 4);

    return 0;
}

void printError(char message[])
{
    printf("ERROR! %s\n", message);
}

void printErrors(char message[], int amount)
{
    for (int i = 0; i < amount; i++)
    printf("ERROR! %s\n", message);
}
