//int strcmp(const char *_Str1, const char *_Str2)
#include <stdio.h>
#include <string.h>
int main()
{
    // char str1[]="Ashwini";
    // char str2[]="Ashwini";
    char str1[50];
    char str2[50];
    printf("Enter first  string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are same..\n");
        printf("The string is : %s\n", str1);
    }
    else
    {
        printf("Strings are not same..\n");
        printf("String 1 is : %s\n", str1);
        printf("String 2 is : %s\n", str1);
    }
    return 0;
}