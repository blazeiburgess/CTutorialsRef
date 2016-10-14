#include <stdio.h>

int main(int argc, const char *argv[]) {
  /* same datatypes can be assigned in single line separated by commas */
  int a, b, sum;

  a = 4;
  a++;		  /* a = a + 1 */
  printf("a = %d\n", a); /* prints `a = 5` */

  a = 2;
  a += 4;	  /* a = a + 4 */
  printf("a = %d\n", a);

  a = 7;
  a--;			 // same concept as above
  printf("a = %d\n", a); // 6

  a = 4;
  a -= 3;
  printf("a = %d\n", a); // 1

  a = 4;
  a *= 3;
  printf("a = %d\n", a); // 12

  a = 20;
  a /= 4;
  printf("a = %d\n", a); // 5
  
  /* 
   * a++ gets the value first, then increments
   * ++a increments first, then gets the value 
   */
  a = 5;
  printf("a = %d\n", a++); // 5

  a = 5;
  printf("a = %d\n", ++a); // 6

  return 0;
}
