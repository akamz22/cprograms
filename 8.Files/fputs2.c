#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fptr;
    char str[89];
    if ((fptr = fopen("test1", "w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter the text\n");
    printf("Press Ctrl+c to stop reading character");
    while (gets(str) != NULL)
    {
        strcat(str, "\n");
        fputs(str, fptr);
    }

    fclose(fptr);
    return 0;
}