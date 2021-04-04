#include <stdio.h>
int main()

{
    int n, i, m=0;

    printf("Enter size of array ");
    scanf("%d", &n);
    //printf("size of array");
    //scanf("%d",&m);
    m = n-1;
    int arr1[m], arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        arr1[m] = arr[i];
        m--;
    }
    for (m = 0; m < n ; m++)
    {
        printf("%d ", arr1[m]);
    }

    return 0;
}

