#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    int *q;
    q=(&a+1);
    //pointer arithemetic
    printf("%d\n", p); //
    printf("%d\n", p + 1);
    printf("%d\n",q);
    printf("Value at address p is %d\n", *p);
    printf("Address p+1 is %d\n", p + 1);
    printf("Value at address p+1 is %d", *(p + 1));
    return 0;
}