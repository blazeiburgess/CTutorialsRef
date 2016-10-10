#include <stdio.h>

// some compilers require the order to be:
//   1) define function
//   2) call function
// Others tolerate functions being defined after
// this structure avoids this error while still letting the `main`
// be defined near the top
int add_numbers (int a, int b);

int main(int argc, const char *argv[]) {
  int result;
  result = add_numbers(4, 3);
  printf("The result is %d\n", result);
  return 0;
}

int add_numbers (int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}
