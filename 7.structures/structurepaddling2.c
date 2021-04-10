#include <stdio.h>

struct student
{
    char name[20];
    int Roll;
    int fee;
}__attribute__((packed));;

void main()
{
    struct student s1;
    printf("Enter student name\n");
    gets(s1.name);
    printf("Enter the student roll number\n");
    scanf("%d",&s1.Roll);
    printf("Enter student fee\n");
    scanf("%d",&s1.fee);
    printf("Name of student : %s\n", s1.name);
    printf("Student Roll number : %d\n", s1.Roll);
    printf("Student Fee : %d\n", s1.fee);
}