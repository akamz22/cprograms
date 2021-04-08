#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a>0)
    {
        printf("a is +ve");
    }
    else if(a<0)
    {
        printf("a is -ve");
    }
    else
    {
        printf("a=o");
    }
    
    return 0;
}