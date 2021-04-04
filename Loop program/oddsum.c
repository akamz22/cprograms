#include <stdio.h>
int main()
{
    int n=0, i, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Odd numbers are : " );

    for (i = 0; i <= n; i++)
    {

        if (i % 2 != 0)
        
        {
            printf("\t%d ",i);
            sum = sum + i;
        }
        
    }
    printf("\nSum of first n odd numbers = %d  ", sum);

    return 0;
}