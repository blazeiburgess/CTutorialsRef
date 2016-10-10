#include <stdio.h>

int main(int argc, const char *argv[]) {
  // name for struct is defined after closing brace
  struct {
    int a;
    float b;
    int c;
  } myst;

  myst.a = 4;
  myst.b = 3.37;
  myst.c = 8;

  printf("a = %d, b = %f, c = %d\n", myst.a, myst.b, myst.c);

  return 0;
}
