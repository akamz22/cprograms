#include <stdio.h>
int main()
{

    int arr[3][3] = {{0, 2, 3}, {0, 1, 3}, {0, 1, 3}};
    int i = 0, j = 0;

    /*for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" Enter value of element [%d] [%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }*/
    printf(" value of element \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" [%d] [%d] = %d ", /*i, j,*/ arr[i][j]);
        }
        printf("\n");
    }
}