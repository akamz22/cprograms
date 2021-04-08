#include <stdio.h>
int main()
{
    int a=3, b=2, c=4;

    if (a>b)
    {
        if (a>c)
                printf("a is largest");
        else

        printf("c is largest");
    }
    else                          
    {
        if (b>c)
                printf("b is largest");
        else
            printf("c is largest");
    }
    return 0;
}
