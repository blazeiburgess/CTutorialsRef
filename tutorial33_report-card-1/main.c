#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int scienceGrade, historyGrade, mathGrade, englishGrade;
} reportCard;

void printReportCard(reportCard *rc);

int main()
{
    reportCard rc;
    char str[20];
    printf("Enter the student's last name: ");
    scanf("%s", str);
    rc.name = str;
    printf("Science Grade: ");
    scanf("%i", &rc.scienceGrade);
    printf("History Grade: ");
    scanf("%i", &rc.historyGrade);
    printf("Math Grade: ");
    scanf("%i", &rc.mathGrade);
    printf("English Grade: ");
    scanf("%i", &rc.englishGrade);
    printReportCard(&rc);
    return 0;
}

void printReportCard(reportCard *rc)
{
    int average = (rc->scienceGrade + rc->historyGrade + rc->mathGrade + rc->englishGrade)/4;
    printf("Student's Name: %s\nOverall Grade: %i\n", rc->name, average);
}
