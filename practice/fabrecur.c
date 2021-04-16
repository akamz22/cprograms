// 0 1 2 3 o 4 5 6
// 0 1 1 2 3 5 8
#include <stdio.h>
int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}
int main()
{
    int n, i;
    //printf("determine the fibbonacci of ");
    //scanf("%d", &n);
    for (i = 0; i <= 5; i++)
    {
        printf("%d ", fibbonacci(i));
    }
}