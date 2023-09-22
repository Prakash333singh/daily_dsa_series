#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n__" << endl;
    cin >> n;
    int k;
    cout << "Enter value of k" << endl;
    cin >> k;
    vector<int> arr(n, 0);

    int i = 0;
    int cnt = 0;

    // while (i <= n) // 0<
    // {
    //     cin >> arr[i];
    //     i++;
    // }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
            cnt++;
            i++;
        }
    }
    cout << cnt;

    return 0;
}
