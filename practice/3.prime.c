#include <stdio.h>
#include <math.h>
int main()
{
    long int i, j;
    //int n;
    for (i = 2; i < 100000; i++)
    {
        int count;
        //scanf("%d", &n);
        for (j = 2; j <= i / 2; j++)
        {
            count = 0;
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
        {
            printf("%d is not prime\n", i);
        }
        else
        {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}