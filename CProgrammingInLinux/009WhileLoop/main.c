#include <stdio.h>

int main(int argc, const char *argv[]) {
  int i = 10;

  while (i < 20) {
    printf("+[while] i = %d\n", i);
    i++;
  }

  i = 10;
  do {
    printf("+[do] i = %d\n", i);
    i++;
  } while (i < 20);
  return 0;
}
