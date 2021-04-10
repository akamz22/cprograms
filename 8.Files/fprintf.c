#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char name[89];
    int age;
    if ((fp = fopen("rec", "w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter your name and age : ");
    scanf("%s%d", &name, &age);
    fprintf(fp,"My name is %s and my age is %d", name, age);
    fclose(fp);
    return 0;
}