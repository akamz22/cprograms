//Write a C program to find maximum and minimum between two numbers using functions.
#include <stdio.h>
int largernum(int x, int y);
void main()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d%d", &a, &b);
    largernum(a, b);
}
int largernum(int x, int y)
{
    if (x > y)
        printf("Larger number is %d", x);
    else
        printf("Larger number is %d", y);
}