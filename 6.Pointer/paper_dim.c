#include <stdio.h>
void main()
{

    int a = 1189, b = 841, i;
    for (i = 0; i < 8; i++)
    {
        printf("%d mm * %d mm\n", a, b);
        if (a > b)
            a = a / 2;
        else
            b = b / 2;
    }
}
