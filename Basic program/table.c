#include <stdio.h>
int main(void)
{
    int n = 0, i;
    printf("enter a number");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    return 0;
}
