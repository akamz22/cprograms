#include <stdio.h>
int main()
{
    int row = 0, column = 0, rows_num = 0, column_num = 0,c=65;

    printf("Enter the number of rows : ");
    scanf("%d", &rows_num);
    for (row = 1; row <=rows_num; row++)
    {
        for (column = 1; column<=rows_num; column++)
        {

            printf("%d  ",column);
        }
       
        printf("\n");
    }

    return 0;
}
