#include <stdio.h>
int dim(int, int);
void main()
{

    int a = 1189, b = 841, i;
    dim(a, b);
    printf("%d mm * %d mm\n", a, b);
}
int dim(int a, int b)
{
    int i = 8;

    i--;
    if (a > b)

    {
        return a / 2;
    }
    else
        return b / 2;
    if (i>0)
    {
        return dim(a, b);
    }
}
