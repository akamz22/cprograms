
/*A
B C
D E F
G H I J
K L M N O
P Q R S T U*/
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

            printf("%c ",(c++));
        }
       
        printf("\n");
    }

    return 0;
}
