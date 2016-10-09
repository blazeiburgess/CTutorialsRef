#include <stdio.h>

int main(int argc, char *argv[]) {
  // integers are 4 bytes
  int k;
  int zznum;
  int sumnum;

  // chars are one byte
  char mychar;

  k = 24;
  printf("Value of k = %d\n", k);

  zznum = 4;
  printf("Value of zznum = %d\n", zznum);

  printf("k, zznum = %d, %d\n", k, zznum);

  sumnum = k + zznum;
  printf("+ Total is: %d\n", sumnum);
  // you can perform operations in printf 
  printf("+ Total is: %d\n", k + zznum);

  mychar = 'c';
  printf("I've set mychar equal to %c\n", mychar);
  // using `%d` prints the ascii value of the char
  printf("I've set mychar equal to %d\n", mychar);

  return 0;
}
