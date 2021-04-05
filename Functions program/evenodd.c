//Write a C program to check whether a number is even or odd using functions
#include <stdio.h>
int check_even_odd(int x);
void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    check_even_odd(a);
}
int check_even_odd(int x)
{
    if (x % 2 == 0)
        printf("%d is an even number", x);
    else
        printf("%d is an odd number", x);
    return 0;
}