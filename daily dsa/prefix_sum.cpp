#include <bits\stdc++.h>
using namespace std;

void prefixsum(int arr[], int n, int prefix[])
{
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

void suffixsum(int arr[], int n, int suffix[])
{
    suffix[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }
}

int main()
{

    int arr[] = {10, 4, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];
    // function call
    prefixsum(arr, n, prefix);

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    cout << endl;
    // suffix sum

    cout << endl;

    int suffix[n];
    // function call
    suffixsum(arr, n, suffix);

    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }

    return 0;
}