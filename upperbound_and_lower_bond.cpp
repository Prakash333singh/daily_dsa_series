#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    int index = (upper_bound(nums.begin(), nums.end(), target) - nums.begin());
    cout << index << endl;
    int index1 = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    cout << index1 << endl;
    vector<int> ans;
    ans.push_back(index1);

    if (index1 != index)
    {
        ans.push_back(index - 1);
        return ans;
    }
    else
        return {-1, -1};
}
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    cout << "Enter vector element" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target;
    cout << "enter target element" << endl;
    cin >> target;
    vector<int> ans = searchRange(nums, target);
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}

// This happened to me. For some reason my origin got messed up without my realizing it:

// Check if your settings are still correct

// git remote -v
// the url needs to be something like ssh://git@github.com/YourDirectory/YourProject.git; if you don't see git@github.com, use

// git remote set-url origin git://github.com/YourDirectory/YourProject.git