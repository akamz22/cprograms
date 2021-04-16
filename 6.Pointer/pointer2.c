#include <stdio.h>
int main()
{
    int a = 37414;
    int *p;
    p = &a;
    printf("%p\n", p);//p=address of a
    printf("%p\n", &a);//addressof a
    printf("%p\n", &p);//address of p
    printf("%d\n", *p);//value at address p
    return 0;
}