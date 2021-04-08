//Program to sum of digits of a number
#include <stdio.h>
int sum_digit_fun(int a);
int main()
{
    int num, sum;
    printf("Enter a number :");
    scanf("%d", &num);
    sum = sum_digit_fun(num);
    printf("%d", sum);
    return 0;
}
int sum_digit_fun(int a)
{
    int sum;
    while (a > 0)
    {
        sum = sum + (a % 10);
        a = a / 10;
    }
    return sum;
}