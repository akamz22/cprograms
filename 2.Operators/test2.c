#include <stdio.h>
int main()
{
    int j, n;
    
    for (n = 2; n <= 100; n++)
    {
        int count = 0;
        for (j = 2; j <= n-1; j++)
        {
            if (n % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", n);
        }
    }

    return 0;
}  