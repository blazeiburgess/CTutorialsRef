#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // memset sets a certain number of bytes
    int *nums = malloc(sizeof(int) * 5);
    char *chars = malloc(sizeof(char) * 5);
    memset(nums, 0, sizeof(int) * 5);
    memset(chars, 'A', sizeof(char) * 5);
    printf("%i\n", nums[0]);
    printf("%c\n", chars[2]);
    return 0;
}
