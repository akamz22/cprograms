//Display reverse of any number
#include<stdio.h>
int main()
{
    int n,rem=0,rev=0;
    printf("Enter the value of n ");
    scanf("%d", &n);
    while (n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("Reversed number = %d",rev);
    return 0;
}        