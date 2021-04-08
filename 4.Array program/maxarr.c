#include<stdio.h>
int main()
{
    int arr[]={3,45,3,3,322,324,24,42,43,234};
    int min=0,max=0;
    for (int  i = 0; i < 10; i++)
    {
        printf("%d \n",arr[i]);
        if (arr[i]>max)
        {
            max=arr[i];
           
        }
        
    }
     printf("Max number is = %d  ",max);
     return 0;
}