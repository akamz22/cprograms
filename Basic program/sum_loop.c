#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    int i =1;
    do
    {
        printf("enter a number");
        scanf("%d", &n);
        sum += n;
        i++;
    } while (i <= 5);
    printf("sum of digits=%d\n", sum);
    return 0;
}