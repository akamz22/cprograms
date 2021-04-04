#include<stdio.h>
int main()
{
    int i,arr[6]={12,4,7,63,4,7};
    int large;
    large=arr[0];
    for ( i = 1; i < 7; i++)
    {
        if (arr[i]>large)
        {
            large=arr[i];
        }
        
    }
    printf("%d",large);
    return 0;
}