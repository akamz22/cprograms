/*A 
B B
C C C
D D D D
E E E E E
F F F F F F*/
#include <stdio.h>
int main()
{
    int row = 0, column = 0, rows_num = 0, column_num = 0,c=65;

    printf("Enter the number of rows : ");
    scanf("%d", &rows_num);
    for (row = 0; row <= rows_num; row++)
    {
        for (column = 0; column<=row; column++)
        {

            printf("%c ",c);
        }
       c++;
        printf("\n");
    }

    return 0;
}

