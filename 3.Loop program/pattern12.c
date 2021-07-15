#include<stdio.h>

int main()
{
    int i, j;
    int n=6;
    for (int i =0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {   
            if(((i+j)==n)||((i+j)>n))
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
       
    }
    return 0;
}