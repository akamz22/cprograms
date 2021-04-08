#include <stdio.h>
void main()
{
    int n1 = 0, n2 = 1, i, m = 20, sum = 0;
    for (i = 0; i < m; i++)
    {
        sum = n1 + n2;
        printf("%d ", sum);
        n1 = sum;
        n2 = n1;
    }
}