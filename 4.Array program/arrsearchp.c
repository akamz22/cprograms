#include <stdio.h>
int main()
{
    /*printf("Enter number of elements in array \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }*/
    int search = 0, i;
    int arr[10] = {8, 9, 17, 5, 14, 12, 16, 27, 15,25};
    int flag = 0;
    printf("Enter element for search : ");
    scanf("%d",&search);
    for (i = 0; i < 10; i++)
    {
        printf("arr of %d = %d\n",i,arr[i]);
        
    }
    for (i = 0; i < 10; i++)
    {
        
        if (arr[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number found at position  %dth index. ",i);
    }
    else
    {
        printf("Number not found  ");
    }
     return 0;
}
