//program to print character of string and address of each string.
#include <stdio.h>
int main(void)
{
    //char str[]={'A','S','H','W','I','N','I','\0'};
    char str[] = "Ashwini";
    char *p;
    p=str;
    int i;
    for (i = 0; *(p+i) != '\0'; i++)
    {
        printf("Character = %c\t", *(p+i));
        printf("Address = %p\n", p+i);
    }
    return 0;
}