//display sum offirst 10 natural numbers
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("Sum of numbers  = %d ", sum);
    return 0;
}

