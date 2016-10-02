#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int score;
} Entry;

int main()
{
    FILE *file = fopen("/home/transvaal/Documents/example2.txt", "r");
    int entryCount;
    fscanf(file, "%i", &entryCount);

    Entry *entries = malloc(sizeof(Entry) * entryCount);

    for (int i = 0; i < entryCount; i++)
    {
        int nameLen;
        fscanf(file, "%i", &nameLen);

        entries[i].name = malloc(sizeof(char) * (nameLen + 1)); // need +1 for null terminating character
        fscanf(file, "%s %i", entries[i].name, &entries[i].score);
        printf("%i. %s - %i\n", i+1, entries[i].name, entries[i].score);
    }

    fclose(file);

    for (int i = 0; i < entryCount; i++)
        free(entries[i].name);

    free(entries);
    return 0;
}
