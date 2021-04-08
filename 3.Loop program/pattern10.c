// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    for (i = 5; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
