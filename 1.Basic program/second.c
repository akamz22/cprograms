
#include <stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    printf("\n\n\n");

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
