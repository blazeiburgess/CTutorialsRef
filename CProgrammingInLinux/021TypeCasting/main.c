#include <stdio.h>

/* casting is converting one datatype to another */
int main(int argc, const char *argv[]) {
  int i;
  char c;

  char *ptr;
  char s;

  c = 'w';
  /* `(datatype) variable/expression` is casting syntax */
  i = (int) c;
  /* this will print an int, then char value for i */
  printf("i = %d, %c\n", i, i);

  s = 'x';
  ptr = &s;
  /* this assigns the memory address, not value, of `ptr` to `i` */
  i = (int) ptr;
  printf("i = %x\n", i);

  i = 3000;
  c = (char) i;
  printf("c = %c\n", c);

  return 0;
}
