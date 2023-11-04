#include <bits\stdc++.h>
using namespace std;
int upperbound(vector<int> &arr, int x, int n)
{
    int s = 0, l = n - 1;
    int ans = n;
    while (s <= l)
    {
        int mid = (s) + (l - s) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperbound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}