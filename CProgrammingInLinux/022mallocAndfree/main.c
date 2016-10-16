#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
  char *ptr;
  // allocates 24 bytes, returns void, so must be casted
  ptr = (char *) malloc(24);

  if (ptr == NULL) {
    printf("Failed to get allocated memory.\n");
    exit(1);
  }

  strcpy(ptr, "Hello there!");

  printf("ptr: %s\n", ptr);

  free(ptr);

  return 0;
}
