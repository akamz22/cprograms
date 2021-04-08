#include <stdio.h>

struct student
{
    char name[20];
    int Roll;
    int fee;
};

void main()
{
    struct student *ptr,s1;
    ptr = &s1;
    printf("Enter student name : \n");
    gets(s1.name);
    printf("Enter Roll : ");
    scanf("%d",&s1.Roll);
    printf("Enter fee : ");
    scanf("%d",&s1.fee);
    printf("Roll is %d");
    printf("Name of student : %s\n", ptr->name);
    printf("Student Roll number : %d\n", ptr->Roll);
    printf("Student Fee : %d\n", ptr->fee);
}