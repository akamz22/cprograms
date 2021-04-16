#include <stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;
    printf("Size of integer is %d Bytes\n", sizeof(int));
    printf("Address = %d , Value = %d\n", p, *p);
    printf("Address = %d ,Value = %d\n", p + 1, *p + 1);
    char *p0;
    p0 = (char *)p; //typecasting
    printf("Size of character is %d Bytes\n", sizeof(char));
    printf("Address = %d , Value = %d\n", p0, *p0);
    int c = *p0 * 400;
    printf("Address = %d , Value = %d  %d\n", p0 + 1, *p0 + 1, c);
    return 0;
}