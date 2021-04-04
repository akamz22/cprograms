#include <stdio.h>
int main(void)
{
    int a = -3;
    a = -a - a + !a;
    printf("%d\n", a);
    return 0;
}
// output 6
int main(void)
{
    int a = 2, b = 1, c, d;
    c = a < b;
    d = (a > b) && (c < b);
    printf("c=%d,d=%d\n", c, d);
    return 0;
}
// output c=0 ,d= 1
int main(void)
{
    int a = 9, b = 15, c = 16, d = 12, e, f;
    e = !(a > b || b < c);
    f = (a > b) ? a - b : b - a;
    printf("e=%d, f=%d\n", e, f);
    return 0;
}
//output e=0 ,f=6
int main(void)
{
    int a = 5;
    a = 6;
    a = a + 5 * a;
    printf("a=%d\n", a);
    return 0;
}
//output a=36
int main(void)
{
    int a = 5, b = 5;
    printf("%d,%d\t", ++a, b--);
    printf("%d,%d\t", a, b);
    printf("%d,%d\t", ++a, b++);
    printf("%d,%d\n", a, b);
    return 0;
}
//output
// 6,5
// 6,4
// 7,4
// 7,5
int main(void)
{
    int x, y, z;
    x = x++;
    y = ++x;
    y++;
    z = (x + y);
    z--;
    printf("x=%d,y=%d,z=%d,", x, y, z);
    return 0;
}
//output
int main(void)
{
    int a = 4, b = 8, c = 3, d = 9, z;
    z = a++ + ++b * c-- - --d;
    printf("a=%d, b=%d, c=%d,d=%d, z=%d\n", a, b, c, d, z);
    return 0;
}
//output
int main(void)
{
    int a = 14, b, c;
    a = a % 5;
    b = a / 3;
    c = a / a % 3;
    printf("a=%d, b=%d,c=%d\n", a, b, c);
    return 0;
}
// output a=4,b=1,c=1
int main()
{
    int a = 15, b = 13, c = 16, x, y;
    x = a - 3 % 2 + c * 2 / 4 % 2 + b / 4;
    y = a = b + 5 - b + 9 / 3;
    printf("x=%d, y=%d,\n", x, y);
    return 0;
}
//output ????????????????????????????
int main()
{
    int x, y, z, k = 10;
    k += (x = 5, y = x + 2, z = x + y);
    printf("%d ", (x = 5, y = x + 2, z = x + y));
    printf("x=%d, y=%d, z=%d, k=%d\n", x, y, z, k);
    return 0;
}
//output x=5,y=7,z=12,k=22
int main()
{
    float b;
    b = 15 / 2;
    printf("%f\t", b);
    b = (float)15 / 2 + (15 / 2);
    printf("%f\n", b);
    return 0;
}
//output b=7.00   b=14.5
int main()
{
    int a = 9;
    char ch = 'A';
    a = a + ch + 24;
    printf("%d,%c\t%d,%c\n", ch, ch, a, a);
    return 0;
}
//output 65,A   98,b
int main(void)
{
    int a, b, c, d;
    a = b = c = d = 4;
    a *= b + 1;
    c += d *= 3;
    printf("a=%d c=%d\n", a, c);
    return 0;
}
//output a=20 c=16
int main(void)
{
    int a = 5, b = 10, temp;
    temp = a, a = b, b = temp;
    printf("a=%d ,b=%d\n", a, b);
    return 0;
}
//output a=10 ,b=5
int main()
{
    int a = 10, b = 3, max;
    max = a > b ? a : b;
    printf("%d\n", max);
    return 0;
}
//output 10
int main()
{
    int a = 5, b = 6;
    printf("%d\t", a = b);
    printf("%d\t", a == b);
    printf("%d %d\n", a, b);
    return 0;
}
//output 6     1      6 6
int main()
{
    
}