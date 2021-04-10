#include <stdio.h>
struct student
{
    int roll;
    char name[21];
    int fee;
};
struct student s1[2];
void main()
{
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Enter student name\n");
        scanf("%s", &s1[i].name);
        printf("Enter the student roll number\n");
        scanf("%d", &s1[i].roll);
        printf("Enter student marks\n");
        scanf("%d", &s1[i].fee);
    }
    int r, f;
    printf("Enter search roll no :");
    scanf("%d", &r);
    for (i = 0; i < 2; i++)
    {
        if (s1[i].roll == r)
        {
            f = 1;
            
            if (f == 1)

            {

                printf("Roll : %d\n", s1[i].roll);
                printf("Name : %s\n", s1[i].name);
                printf("Fee: %d\n", s1[i].fee);
            }
            break;
        }

        else
            printf("Search roll no. not found\n");
    }
}