#include <stdio.h>
void main()
{
    int  sum1=0,sum = 1, i, m = 20,t;
    
    for (i = 0; i < m; i++)
    {   
        t=sum1;
        sum1= sum1 + sum;
        printf("%d ", sum1);
        sum=t;
        
    }
    

        
       
    
}