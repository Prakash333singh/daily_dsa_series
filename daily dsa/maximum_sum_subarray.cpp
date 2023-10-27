
// all possible subarrays of array

// #include <bits\stdc++.h>

// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int size = 1; size <= n; ++size) // size=1 ; 1 <=3
//     {
//         for (int i = 0; i <= n - size; ++i) // i=0 ; 0<=2
//         {
//             for (int j = i; j < i + size; ++j) // j=0 ; j<0+1
//             {
//                 cout << arr[j] << " ";
//             }

//             cout << endl;
//         }
//     }
//     return 0;
// }

#include <bits\stdc++.h>
using namespace std;

int Maxsumsubarray(int arr[], int n)
{
    int maxi = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int prefix = 0;
        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    }
    return maxi;
}

int main()
{

    int arr[] = {10, -4, 5, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << Maxsumsubarray(arr, n);
}