/**
 * C program to swap two number using call by reference
 */
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p, *q;
    q = &b;
    p = &a;
    printf("Before swap value od a=%d , b=%d\n", a, b);
    int temp;
    temp = *p;
    a = *q;
    b = temp;
    printf("After swap value od a=%d , b=%d\n", a, b);
    return 0;
}