#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    
    int arr[MAX_SIZE] = {8, 9, 17, 5, 14, 12, 16, 27, 15, 25,9};
    int i, arr2[MAX_SIZE];
    for (i = 0; i < 10; i++)
    {
       arr2[i] = arr[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("elements in arr2 = %d\n",arr2[i]);
        /* code */
    }
    
    return 0;
}