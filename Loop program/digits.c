#include <stdio.h>
int main()
{
    int num = 0, rem = 0, count = 0;
    printf("Enter a number  :  ");
    scanf("%d", &num);
    // do
    // {
    //     count++;
    //     num=num/10;
    // } while (num!=0);
    for (int i = 1; i != 0; i++)
    {
        i = num / 10;
        /* code */ printf("%d", i);
    }

    printf(" Number of digits is %d", count);
    return 0;
}