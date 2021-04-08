#include <stdio.h>
int rec(int a, int b);
void main()

{

    int a = 1189, b = 841, i;
    rec(a,b);

}
int rec(int a, int b)
{
    int i = 0;
    while (i < 8)
    {
        printf("%d mm x %d mm\n", a, b);
        if (a > b)
            return rec(a / 2, b);
        else
            return rec(a, b / 2);
            
    }
    i++;
}