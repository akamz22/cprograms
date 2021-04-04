/* * * * *
* * * *
* * * 
* *
*/
#include <stdio.h>
int main()
{
    int i, j, c = 65;
    
    for (i = 20; i >=0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
       // c++;
         // printf("\n");
    }

    return 0;
}

