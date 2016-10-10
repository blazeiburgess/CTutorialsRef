#include <stdio.h>

int add_numbers(int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}

int main(int argc, const char *argv[]) {
  int result;
  int ptrresult;
  // the (int, int) matches the input data for the function pointed to
  int (*myfunc_ptr) (int, int);

  // `&` is optional, but good practice
  myfunc_ptr = &add_numbers;

  result = add_numbers(3,7);
  printf("result = %d.\n", result);

  ptrresult = myfunc_ptr(3,7);
  printf("pointer result = %d.\n", ptrresult);
  return 0;
}
