#include <stdio.h>

// similar to inheritance, especially with structs, defining a generic parent
// with specific qualities
typedef int INT32;
typedef char MYCHR;

typedef struct mystruct_t {
  int a;
  int b;
} MYSTRX;

int main(int argc, const char *argv[]) {
  INT32 i;
  MYCHR mystr[20] = "Hello World";
  MYSTRX mystruct;

  mystruct.a = 2;
  mystruct.b = 4;

  printf("i = %d\n", i);
  printf("mystr = %s\n", mystr);
  printf("mystruct.a = %d, mystruct.b = %d\n", mystruct.a, mystruct.b);
  return 0;
}
