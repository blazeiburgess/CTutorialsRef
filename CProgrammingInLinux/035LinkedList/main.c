#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people_tag {
  char firstname[16];
  char lastname[16];
  unsigned int age;
  struct people_tag *next;
} people_t;


int main(int argc, const char *argv[]) {
  people_t *head = NULL;
  people_t *new;

  people_t *list;

  char *name[] = {"Andy", "John", "Peter", "Raul", NULL};
  char *last[] = {"Mans", "Doe", "Mars", "Gonzales", NULL};
  unsigned int age[] = {22, 34, 24, 18, 0};

  int i = 0;

  /* while (name[i] != NULL) */
  while (name[i]) {
    new = (people_t *) malloc(sizeof(people_t));
    if (new == NULL) {
      fprintf(stderr, "Unable to allocate memory.\n");
      exit(1);
    }
    strcpy(new->firstname, name[i]);
    strcpy(new->lastname, last[i]);
    new->age = age[i];
    new->next = head;
    head = new;
    i++;
  }

  list = head;

  while(list) {
    printf("Firstname: %s\n", list->firstname);
    printf("Lastname: %s\n", list->lastname);
    printf("Age: %d\n\n", list->age);

    list = list->next;
  }
  return 0;
}
