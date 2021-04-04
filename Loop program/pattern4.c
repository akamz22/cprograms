/*5
4  4
3  3  3
2  2  2  2
1  1  1  1  1
0  0  0  0  0  0*/
#include <stdio.h>
int main()
{
    int row = 0, column = 0, rows_num = 0, column_num = 0,c=65;

    printf("Enter the number of rows : ");
    scanf("%d", &rows_num);
    for (row = rows_num; row >= 0; row--)
    {
        for (column = row; column<=rows_num; column++)
        {

            printf("%d  ",row);
        }
       
        printf("\n");
    }

    return 0;
}

