#include <stdio.h>
int main()
{

    int even = 0, odd = 0, i=0;
    printf("\n\n");
    int arr[10] = {8, 9, 17, 5, 14, 12, 16, 27, 15, 25};
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d", odd);
    printf("\n\n");
}