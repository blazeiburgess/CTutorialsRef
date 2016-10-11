#include <stdio.h>

int main(int argc, const char *argv[]) {
  /* both can be assigned strings */
  /* but the char array stores the locations of the string characters */
  /* while the ptr stores the location of a kind of implicit char array */
  char str[24] = "First string";
  char *ptr = "Second string";

  printf("str = %s\n", str);
  printf("ptr = %s\n", ptr); 

  /* this code only words with a pointer */
  ptr = ++ptr;
  printf("ptr = %s\n", ptr);
  return 0;
}
