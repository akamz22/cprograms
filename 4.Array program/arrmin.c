#include <stdio.h>
int main()
{

    int min = 0, max = 0, n, i;
    int arr[n];
    printf("Enter number of elements in array \n");
    scanf("%d", &n);
    printf("Enter elements  ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Min number is = %d  Max number is = %d ", max, min);
    return 0;
}






