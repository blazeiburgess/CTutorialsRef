#include <stdio.h>
#include <stdlib.h>

#include <string.h>

typedef struct
{
    char *name;
    int score;
} Entry;

int main()
{
    FILE *file = fopen("/home/transvaal/Documents/Ctest2.txt", "w");

    int studentCount;
    printf("How many students are there?\n");
    scanf("%i", &studentCount);
    fprintf(file, "%i\n", studentCount); //prints to file

    for (int i = 0; i < studentCount; i++)
    {
        char studentName[30] = {0};
        float gpa;
        printf("What is the student's last name?\n");
        scanf("%s", studentName);
        printf("What is the student's GPA?\n");
        scanf("%f", &gpa);

        fprintf(file, "%i %s %.2f\n", strlen(studentName), studentName, gpa);
    }

    printf("File generated succesfully.\n");

    fclose(file);

    return 0;
}
