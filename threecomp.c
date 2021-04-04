#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);
    int max=0;
    max=a>b?a>c?a:c:b>c?b:c;
    printf("Largest number is %d",max);
    return 0;
}