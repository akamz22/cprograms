#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("a is even");
    }
    else if(a%2!=0)
    {
        printf("a is odd");
    }

    return 0;
}