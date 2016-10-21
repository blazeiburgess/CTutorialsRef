#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>


int main(int argc, const char *argv[]) {
  DIR *dir;
  struct dirent *sd;
  // opens current directory
  dir = opendir(".");
  if (dir == NULL) {
    printf("Error: Unable to open directory.\n");
    exit(1);
  }

  while ((sd=readdir(dir)) != NULL) {
    printf(">> %s\n", sd->d_name);
  }

  closedir(dir);
  return 0;
}
