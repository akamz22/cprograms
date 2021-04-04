#include <stdio.h>
int main()
{
    int row = 0, column = 0, rows_num = 0, column_num = 0,c=1;

    printf("Enter the number of rows : ");
    scanf("%d", &rows_num);
    for (row = 0; row <=rows_num; row++)
    {
        for (column = 0; column<=row; column++)
        {

            printf("%d ",c);
       c++;
        }
        printf("\n");
    }

    return 0;
}