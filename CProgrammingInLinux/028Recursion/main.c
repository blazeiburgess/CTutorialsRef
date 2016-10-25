#include <stdio.h>

int accumulate(int a) { 
  int ret;
  a = a * 2 + 2;
  printf("a = %d\n", a);
  if (a < 100)
    ret = accumulate(a);
  else {
    ret = a;
    printf("ret = %d\n", ret);
  }
 
  return ret;
}

int main(int argc, const char *argv[]) {
  accumulate((int) argv[1]);
  return 0;
}
