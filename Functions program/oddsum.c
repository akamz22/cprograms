//Program to print sum of all odd numbers from 1 to 25
#include <stdio.h>
int oddfun();
int main()
{
    printf("%d", oddfun());
    return 0;
}
int oddfun(void)
{
    int i, s;
    for (i = 1; i <= 25; i++)
    {
        if (i % 2 != 0)
        {
            s = s + i * i;
        }
    }

    return s;
}