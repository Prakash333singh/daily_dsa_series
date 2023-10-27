#include <bits\stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int size = 1; size <= n; ++size) // size=1 ; 1 <=3
    {
        for (int i = 0; i <= n - size; ++i) // i=0 ; 0<=2
        {
            for (int j = i; j < i + size; ++j) // j=0 ; j<0+1
            {
                cout << arr[j] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}