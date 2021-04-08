#include <stdio.h>
int main()
{

    int i, sum = 0, sum1 = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {

            printf("%d ", i);
            sum = sum + i;
        }

        else if (i % 2 != 0)
        {

            sum1 = sum1 + i;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("%d", sum);
    printf("\n");
    printf("%d", sum1);

    return 0;
}