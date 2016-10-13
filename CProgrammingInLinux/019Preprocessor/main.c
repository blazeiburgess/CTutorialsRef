#include <stdio.h>

/* Where compiler performs merging on source files 
 * without actually compiling the code
 * To see the result of precompilation in standard 
 * output, type:
 *  ```gcc -E -c <filename>```
 * It will remove comments and merge files that are included
 * as well as replace defined variables with their values
 * It also removes code that doesn't meet #ifdef conditions
 */

#define NUM1 5
#define NUM2 8

#define SUM(x,y) x+y
int main(int argc, const char *argv[]) {
  int i;
  int k;

  int sum;
#ifdef ADD
  sum = ADD(i,k);
#else
  i = NUM1;
  k = NUM2;

  sum = SUM(i,k);
#endif
  return 0;
}
