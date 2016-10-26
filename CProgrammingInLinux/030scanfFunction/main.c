#include <stdio.h>

// takes user input
int main(int argc, const char *argv[]) {
  int input;
  char name[10]; /* this crashes if more than 10 characters are given */
  // takes and returns a number
  scanf("%d", &input);
  printf("you type in %d!\n", input);

  scanf("%s", name);
  printf("Your name is %s?\n", name);
  return 0;
}
