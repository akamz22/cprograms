
#include <stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    printf("\n\n\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)

        {
            printf("%d", j);
            printf("   ");
        }
        printf("\n\n");
    }

    return 0;
}
