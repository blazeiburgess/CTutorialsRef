#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  int a;

  while (1) {
  scanf("%d", &a);
    switch (a) {
      case 0:
	printf("a = 0\n");
	break;
      case 1:
	printf("a = 1\n");
	break;
      case 2:
	printf("a = 2\n");
	break;
      default:
	printf("a is not 0, 1, or 2\n");
	exit(0);
	break;
    }
  }
  return 0;
}
