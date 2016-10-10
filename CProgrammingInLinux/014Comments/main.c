#include <stdio.h>

/* 
   multi-line 
   comments are 
   simple as well. 
*/

/* the function is defined here, but expressed below */
int add_numbers (int a, int b);

/* main function defined near top */
int main(int argc, const char *argv[]) {
  int result; /* comment on same line as code */

  result = add_numbers(4, 3);
  printf("sum is %d.\n", result);
  return 0;
}

/* comments are taken out when compiled, so it doesn't affect performance */
int add_numbers (int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}
