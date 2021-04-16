//int *strcat(const char *_Str1, const char *_Str2)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter first  string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    strcat(str1, str2);
    printf("First string is : %s \t\t Second string is : %s \n", str1, str2);
    strcat(str1, "_one");
    printf("Now the first string is : %s\n", str1, str2);
}
