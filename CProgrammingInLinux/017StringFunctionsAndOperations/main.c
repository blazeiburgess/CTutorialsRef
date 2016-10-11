#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
  char str[24];
  char strtoo[24];
  int i;
  int n;

  sprintf(str, "Hello World!");
  printf("%s\n", str);

  i = 4;
  sprintf(str, "Value of i = %d", i);
  printf("%s\n", str);

  n = strlen(str);
  printf("length of `str` is %d\n", n);

  /* strcopy(destinaion, source) */
  strcpy(strtoo, str);
  printf("`strtoo` is: %s\n", strtoo);

  /* memset fills first n bytes of memory area *s with constant c */
  /* void *memset(void *s, int c, size_t n); */
  memset(str, 0, 24); 
  printf(">%s\n", str);


  memset(str, 'a', 10);
  printf(">%s\n", str);

  return 0;
}
