#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    if ((fptr = fopen("myfile.txt", "w")) == NULL)
    {
        printf("Error in opening file :\n");
        exit(1);
    }
    printf("Enter text :\n");
    /*Press Ctrl+z/Ctrl+d to stop reading character*/
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fptr);
    }
    fclose(fptr);
    return 0;
}