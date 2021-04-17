#include <stdio.h>
#include <math.h>
int main()
{
    long int i;
    int n;
    scanf("%d", &n);
    for (n = 1; n < 500; n++)
    {

        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        }

    return 0;
}