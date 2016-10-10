#include <stdio.h>

int main(int argc, const char *argv[]) {
  int n;
  /* n = 2; */
  n = 10;
  if (n >= 5) {
    printf("n is greater than or equal to 5.\n");
  } else {
    printf("the first conditional is false.\n");
  }

  if (n <= 5) {
    printf("n is less than or equal to 5.\n");
  } else {
    printf("the second conditional is false.\n");
  }
  printf("program has finished running.\n");
  return 0;
}
