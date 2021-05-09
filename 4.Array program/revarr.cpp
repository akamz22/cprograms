#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    scanf("%d", &n);
    printf("Enter elements  ");
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int start = 0, end = n - 1, i;
    for (i = 0; i <= end; i++)
    {
        if (i != end)
        {
            int temp = A[i];
            A[i] = A[end];
            A[end] = temp;
            end--;
        }
    }
    for (i = 0; i < 6; i++)
    {
        cout << A[i] <<" ";
    }
return 0;
}