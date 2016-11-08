#include <stdio.h>

/* First create the library file: */
  /* gcc -c sharedlib.c */
/* which outputs a `.o` file, then make static library file with `ar` */
/*   ar -cvq libsharedlib.a sharedlib.o */
/* finally compile with library file as an argument: */
  /*   gcc -o main main.c libsharedlib.a */
int addnumbers(int a, int b);

int main(int argc, char *argv[])
{
  int total;
  total = addnumbers(5,7);
  printf("total = %d\n", total);
  return 0;
}
