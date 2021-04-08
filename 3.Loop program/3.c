//display sum of first n natural numbers
#include <stdio.h>
int main()
{
    int i, sum = 0,n=0;
    printf("Enter the value of n ");
    scanf("%d", &n);

    for (i=1;i <= n; i++)
    {
    
        sum = sum + i;
    }
    printf("Sum of numbers  = %d ", sum);
    return 0;
}
