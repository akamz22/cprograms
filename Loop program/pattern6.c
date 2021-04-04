// 01
// 02 03
// 04 05 06
// 07 08 09 10
// 11 12 13 14 15
#include <stdio.h>
int main()
{
    int i = 0, j = 0, c = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%02d ", (c++));
        }
        printf("\n");
    }
    return 0;
}