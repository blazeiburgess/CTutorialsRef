#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fs;
  char buf[10];
  size_t sz;

  fs = fopen("mytext.txt", "r");

  if (fs == NULL) {
    perror("fopen error");
    exit(1);
  }

  while (!feof(fs)) {
    sz - fread((void *) buf, 9, 1, fs);
    printf("%s", buf);
  }

  fclose(fs);

  return 0;
}
