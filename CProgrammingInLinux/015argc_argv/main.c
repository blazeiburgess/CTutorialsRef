#include <stdio.h>

// argc and argv are filled out by the system
// argc is number of arguments
// so for a compiled it counts all arguments after:
//  ```./main arg1 arg2 arg3``` this means argc = 4 (`./main` counts as an arg)
//
// argv is argument strings
//  ```./main arg1 arg2 arg3``` this means argv = ['arg1', 'arg2', 'arg3']
int main(int argc, const char *argv[]) {
  int i;
  printf("argc = %d.\n", argc);

  for (i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
