#include <stdio.h>
void main()
{

    int arr1[2][2] = {0}, Matrix_value = 0, i,r=2,c=2,j;
    printf("Enter elements of matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    
    Matrix_value = (arr1[0][0] * arr1[1][1]) - (arr1[1][0] * arr1[0][1]);
    printf("Value of matrix = %d", Matrix_value);
}