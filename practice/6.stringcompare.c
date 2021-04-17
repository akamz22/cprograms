#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string : ");
    gets(str1);
    int i, j, len = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    printf("length of string is : %d\n", len);
    j = 0;
    for (i = len; i >= 0; i--)
    {

        str2[j] = str1[i];
        j++;
    }
    for (i = 0; i <= len; i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");
    for (i = 0; i <= len; i++)
    {
        if (str1[i] == str2[i])
        {
            printf("Same\n");
        }
        else
        {
            printf("Different\n");
        }
    }

    return 0;
}