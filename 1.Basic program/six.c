#include <stdio.h>
int main()
{    
    int t=0;
    char rows, col;
    rows='A';
    col='E';
   
    printf("Enter a number of rows = ");
    scanf("%d", &rows);
    
    while (rows <= 'E')
    {
        col = 'E';
        col= col-t;
        while (col >= 'A')
        {
            printf("%c", rows);
            col--;
            
            printf("  ");
        }

        rows++;
        printf("\n\n");
        t=t+1;
    }

    return 0;
}