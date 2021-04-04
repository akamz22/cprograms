#include<stdio.h>
int main()
{
    int number, remainder, devisor=3;
    printf("enter a number\n");
    scanf("%d",&number);
    remainder=number%devisor;
    printf("value of remainder  %d \a",remainder);
    return 0;


} 