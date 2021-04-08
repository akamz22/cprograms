#include <stdio.h>
int main()
{
    int number = 0, remainder = 0, hundred = 0, ten = 0, coins = 0;

    printf("enter a number\n");
    scanf("%d", &number);

    hundred = number / 100;

    printf("Number of hundred rupee notes %d\n", hundred);
    remainder = number % 100;
    ten = remainder / 10;

    printf("number of ten rupee notes %d\n", ten);
    coins = remainder % 10;

    printf("number of coins %d\n", coins);
    return 0;
}