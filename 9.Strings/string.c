//program to print character of string and address of each string.
#include <stdio.h>
int main(void)
{
    //char str[]={'A','S','H','W','I','N','I','\0'};
    char str[] = "Ashwini";
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("Character = %c\t", str[i]);
        printf("Address = %p\n", &str[i]);
    }
    return 0;
}