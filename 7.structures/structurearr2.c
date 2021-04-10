#include <stdio.h>

struct student
{
    char name[20];
    int Roll;
    int marks[4];
};

void main()
{
    int i;
    struct student s1[2];
    for (i = 1; i <= 2; i++)
    {
        printf("Enter student name\n");
        scanf("%s", &s1[i].name);
        printf("Enter the student roll number\n");
        scanf("%d", &s1[i].Roll);
        printf("Enter student marks\n");
        for (int j = 1; j <= 4; j++)
        {
            scanf("%d", &s1[i].marks[j]);
        }
    }
    for (i = 1; i <= 2; i++)
    {
        printf("Name of student %d : %s\n", i, s1[i].name);
        printf("Student %d Roll number : %d\n", i, s1[i].Roll);
        for (int j = 1; j <= 4; j++)
        {
            printf("Student marks in subject %d : %d\n", j, s1[i].marks[j]);
        }
    }
}