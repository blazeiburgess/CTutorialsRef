#include <stdio.h>

/* will only compile with command: 
 *    `gcc -o main main.c -L. -ltestsharedlibrary` */
int addnumbers(int a, int b);

int main(int argc, char *argv[])
{
  int total;
  total = addnumbers(5,7);
  printf("total = %d\n", total);
  return 0;
}
