#include <stdio.h>

struct student
{
    char name[20];
    int Roll;
    struct date
    {
        int dd;
        int mm;
        int yy;
    } dob;

    int fee;
};

void main()
{
    struct student s1;
    printf("Enter student name\n");
    gets(s1.name);
    printf("Enter the student roll number\n");
    scanf("%d", &s1.Roll);
    printf("Enter date of birth in format dd mm yy");
    scanf("%d%d%d", &s1.dob.dd, &s1.dob.mm, &s1.dob.yy);
    printf("Enter student fee\n");
    scanf("%d", &s1.fee);
    printf("Name of student : %s\n", s1.name);
    printf("Student Roll number : %d\n", s1.Roll);
    printf("Date of birth in format dd mm yy is %d %d %d\n", s1.dob.dd, s1.dob.mm, s1.dob.yy);
    printf("Student Fee : %d\n", s1.fee);
}