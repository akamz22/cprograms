#include<stdio.h>
int main()
{
    int arr[]={3,45,3,-3,-322,-324,-24,-42,43,234};
    
       printf("Negative number is  :  \n");
    for (int  i = 0; i < 10; i++)
    {
        if (arr[i]<0)
        {
            
         printf("%d\n",arr[i]);
           
        }
        
    }
     return 0;
}