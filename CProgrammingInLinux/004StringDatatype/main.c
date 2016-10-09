#include <stdio.h>

int main(int argc, char *argv[]) {
  char message[12] = "Hello World";

  printf("message is %s.\n", message);

  printf("The second letter of the message is %c.\n", message[1]);
  return 0;
}
