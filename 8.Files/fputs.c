#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fptr;
    char str[89];
    if ((fptr = fopen("test", "w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter the text\n");
    printf("Press Ctrl+z/Ctrl+d to stop reading character");
    while (gets(str) != NULL)
        fputs(str, fptr);
    fclose(fptr);
    return 0;
}