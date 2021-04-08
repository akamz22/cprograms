#include <stdio.h>

struct num
{
    int a;
    int b;
    int c;
} n1 = {10, 20, 30};
void main()
{
    printf("The vale of a is %d \n", n1.a);
    printf("The vale of b is %d \n", n1.b);
    printf("The vale of c is %d \n", n1.c);
}