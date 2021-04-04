//Program to reverse string....
#include <stdio.h>
void main()
{

    char name[100] = "My name is xyz";
    int count, n = 100, k;
    for (k = 0; name[k] != '\0'; ++k)
        ;
    printf("%d\n", k);
    char revname[n];
    int i, j = k - 1;
    for (i = 0; i < k; i++)
    {
        revname[j] = name[i];
        j--;
    }
    for (j = 0; j < k; j++)
    {
        printf("%c", revname[j]);
    }
}