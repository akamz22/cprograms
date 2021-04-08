#include <stdio.h>

struct student
{
    char name[20];
    int Roll;
    int fee;
};

void main()
{
    int i;
    struct student s1[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter student name\n");
        gets(s1[i].name);
        printf("Enter the student roll number\n");
        scanf("%d", &s1[i].Roll);
        printf("Enter student fee\n");
        scanf("%d", &s1[i].fee);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Name of student : %s\n", s1[i].name);
        printf("Student Roll number : %d\n", s1[i].Roll);
        printf("Student Fee : %d\n", s1[i].fee);
    }
}