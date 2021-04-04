#include <stdio.h>
int main()
{
    int i=0, j=0;
    int n;
    printf("Enter a odd number >=3 = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1){
                printf("*");
            }
            else if (j == i && j <= n / 2)// && j!= 0)
            {
                printf("*");
                /* code */
            // }else if(j == n - i - 1 && j < n - 1 && i < n / 2 && j != 0){
            }
            else if(j == n - i - 1 &&  i < n / 2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
