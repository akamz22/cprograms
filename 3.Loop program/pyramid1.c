//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *


#include <stdio.h>

int main()
{
    int i=0, space=0, star=0;
    int row = 10;
    for (i = 1; i <= row; i++)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf(" ");
        }
        //printf("%d", i*2-1);
        for (star = 0; star < i * 2 - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
