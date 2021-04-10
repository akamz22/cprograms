#include <stdio.h>
#include <stdlib.h>
struct record
{
    char name[20];
    int roll;
    int marks;
};
void main(void)
{
    int i, n;
    FILE *fp;
    if ((fp = fopen("stu.txt", "w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    struct record student;
    printf("Enter number of records : ");
    scanf("%d", &n);
    // student.name = "Ashwini";
    // student.roll = 123;
    // student.marks = 123;
    printf("Name -> %s", student.name);
    for (i = 0; i < n; i++)
    {
        printf("Enter student name : \n");
        scanf("%s", student.name);
        printf("Enter Roll : ");
        scanf("%d", &student.roll);
        printf("Enter fee : ");
        scanf("%d", &student.marks);
        // printf("Name -> %s", student.name);
        // printf("Name -> %d", student.marks);
        // printf("Name -> %d", student.roll);

        fwrite(&student, sizeof(struct record), 1, fp);
    }
    fclose(fp);

    FILE *inf;
    struct record inp;
    inf = fopen("stu.txt", "r");
    if (inf == NULL)
    {
        fprintf(stderr, "\nError to open the file\n");
        exit(1);
    }
    while (fread(&inp, sizeof(struct record), 1, inf))
        printf("roll_no = %d name = %s marks = %d\n", inp.roll, inp.name, inp.marks);
    fclose(inf);
}
