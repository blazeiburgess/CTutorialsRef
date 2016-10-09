#include <stdio.h>

int main(int argc, char *argv[]) {
  int myint;
  float mynum;
  double mydouble, mysumdouble;
  mynum = 24.4;

  printf("mynum is equal to %f\n", mynum);
  /* printf("size of integer is %d\n", sizeof(24)); */
  /* printf("size of float is %d\n", sizeof(mynum)); */

  mydouble = 243.95;
  mysumdouble = 3.5 + mydouble;

  printf("mysumdouble is equal to %f\n", mysumdouble);

  myint = 3;
  mysumdouble = mysumdouble + myint;

  printf("mysumdouble is now equal to %f\n", mysumdouble);
  return 0;
}
