#include <stdio.h>
int main()
{
    int a, b, i,mul=0;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter first number : ");
    scanf("%d", &b);
    for ( i = 1; i <= b; i++)
    {
        mul=mul+a;
    }
    printf("Multiplication of two numbers is : %d ",mul);
}