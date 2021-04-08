//Program to print fabonacii series
#include <stdio.h>
void fab();
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("fabonacii series upto given number is : ");
     fab(num);
}

void fab(int num)
{
    int i;
    int sum = 0, n1 = 0, n2 = 1;
    for (i = 1; i <= num; i++)
    {

        sum = n1 + n2;
        printf("%d ", sum);
        n1 = n2;
        n2 = sum;
    }
}

// 1 1 2 3 5 8 13 21..........