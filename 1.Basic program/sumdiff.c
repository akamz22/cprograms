#include <stdio.h>
int main()
{
    int num1, num2, sum, diff;
    printf("Enter value of num1\n");
    scanf("%d", &num1);
    printf("Enter value of num2\n");
    scanf("%d", &num2);
    if (num1 < num2)
    {
        sum = num1 + num2;
        printf("sum of numbers%d", sum);
    }
    else
    {
        diff = num1 - num2;
        printf("diff of numbrs%d", diff);
    }
    return 0;
}
