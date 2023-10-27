#include <bits\stdc++.h>
using namespace std;

int maxsubarray(int arr[], int n)
{
    int maxsum = INT32_MIN;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxsubarray(arr, n) << endl;
    return 0;
}