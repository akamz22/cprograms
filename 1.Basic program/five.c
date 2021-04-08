#include <stdio.h>
int main()
{
    int rows, col;
    char p;
    printf("Enter the number of rows = ");
    scanf("%d", &rows);

    while (rows >= 1)
    {
        col = rows;
        p = 'A';
        while (col >= 1)
        {
            printf("%c", p);
            col--;
            p++;
            printf("  ");
        }

        rows--;
        printf("\n\n");
    }

    return 0;
}