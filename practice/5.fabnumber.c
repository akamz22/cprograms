#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, temp, sum = 0;
    for (i = 0; i < 20; i++)
    {
        temp = b;
        sum = a + b;
        printf("%d ", sum);
        b = sum;
        a = temp;
    }
}