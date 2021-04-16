#include <stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;
    int **p0;
    p0 = &p;
    int ***d;
    d = &p0;
    printf("%d\n",*p);
    printf("%d\n",*p0);
    printf("%d\n",*(*p0));
    printf("%d\n",*(*d));
    printf("%d\n",*(*(*d))+10);
    return 0;
}