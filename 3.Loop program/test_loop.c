#include<stdio.h>
void main()
{
    int i,j,n=6;
    char p='A';
    for (i = 0; i < n; i++)
    {  
        for ( j = 0; j <= i; j++)
        {
                printf("%c",p);
                p++;
  
        }
        printf("\n");
        
        
    }
    
}