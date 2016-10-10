#include <stdio.h>

int main(int argc, char *argv[]) {
  int n; 

  n = 25;
  // saves memory location of `n`
  int *k = &n;

  printf("n = %d\n", n);
  printf("k = %d\n", k);
  printf("*k = %d\n", *k);
  return 0;
}
