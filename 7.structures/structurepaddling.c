#include <stdio.h>
#pragma pack(1)  
void main()
{
    struct num
    {
        int a;
        int b;
        int c;
    };
    struct num n1;
    n1.a = 10;
    n1.b = 20;
    n1.c = 21;
    printf("The vale of a is %d \n", n1.a);
    printf("The vale of b is %d \n", n1.b);
    printf("The vale of c is %d \n", n1.c);
}