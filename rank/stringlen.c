#include <stdio.h>
#include<string.h>
int main()
{
    char ar[1001], i;
    int j, count;
    scanf("%s",&ar);
    for (i = 48; i <= 57; i++)
    {
        count = 0;
        for (j = 0; j < strlen(ar); j++)
        {
            if (ar[j] == i)
                count++;
        }
        printf("%d ", count);
    }
    return 0;
}