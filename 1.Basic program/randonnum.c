#include <stdio.h>
#include <time.h>   // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h> // for sleep()
#include <stdlib.h>
#include <limits.h>
// main function to find the execution time of a C program
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1;
  
        // If x is smaller, ignore right half 
        else
            r = m - 1;
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 
int main()
{
    // to store execution time of code
    double time_spent = 0.0;
    long  size = 1000000;
    long  arr[size];
    long  i, j, temp = 0, flag = 0, search = 99244;
    clock_t begin = clock();

    // do some stuff here
    // sleep(3);
    for (i = 0; i < size; i++)
    {
        // arr[i] = rand();
        arr[i] = i;
        // printf(" %d ", rand());
    }
    //    for (i = 0; i < size - 1; i++)
    //     {
    //         for (j = 0; j < size - 1 - i; j++)
    //         {
    //             if (arr[j] > arr[j + 1])
    //             {
    //                 temp = arr[j];
    //                 arr[j] = arr[j + 1];
    //                 arr[j + 1] = temp;
    //             }
    //         }
    //     }
    // for (i = 0; i < size; i++)
    // {
    //     printf(" %d ", arr[i]);
    // }
    for (i = 0; i < size; i++)
    {

        if (arr[i] == search)
        {
            flag = 1;
             break;
        }
    }

    //flag=binarySearch(arr,0,size-1,search);
    if (flag)
    {
        //printf("Number found at position  %d \n", i + 1);
        printf("Number found at position  %d \n",flag);
    }
    else
    {
        printf("Number not found  \n");
    }
    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);

    return 0;
}