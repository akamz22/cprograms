#include <stdio.h>
void main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = a > b ? a : b;
    printf("Larger of %d and %d is %d\n", a, b, max);
}