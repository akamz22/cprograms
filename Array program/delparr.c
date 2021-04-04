#include <stdio.h>

int main()
{
    //int arr1[size] = {2, 21, 54, 54, 665, 56, 474, 64, 56, 10};
    int size = 0;
    int i = 0, pos = 0, num = 0;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements : \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("\nEnter element to be inserted...");
    // scanf("%d", &num);
    printf("Enter position at which element to be deleted : ");
    scanf("%d", &pos);
    if (pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;
        printf("Array with inserted element..\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
