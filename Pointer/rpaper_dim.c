#include <stdio.h>
int print_paper_dimension(int a, int b);
void main()

{
    int a = 1189, b = 841;
    print_paper_dimension(a, b);
    printf("%d mm * %d mm\n", a, b);
}

int print_paper_dimension(int a, int b)
{
    int i = 8;
    if (i > 0 && i <= 8)
        return 0;
    else
        return print_paper_dimension(a, b);

    if (a > b)
        a = a / 2;
    else
        b = b / 2;
    i--;
}