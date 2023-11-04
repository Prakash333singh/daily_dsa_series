#include <bits\stdc++.h>
using namespace std;

vector<int> getServerIndex(int n, vector<int> &brustTime, vector<int> &arrival)
{

    vector<int> ans(arrival.size(), -1);
    vector<int> res;
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    map<int, vector<int>> mp;
    vector<pair<int, int>> v;

    for (int i = 0; i < arrival.size(); i++)
    {
        v.push_back({arrival[i], i});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {

        while (mp.size() && mp.begin()->first <= v[i].first)
        {

            for (auto it : mp.begin()->second)
            {
                s.insert(it);
            }
            mp.erase(mp.begin());
        }

        if (s.size())
        {
            mp[v[i].first + brustTime[v[i].second]].push_back(*s.begin());
            ans[v[i].second] = *s.begin();
            res.push_back(*s.begin());
            s.erase(*s.begin());
        }
        else
        {

            res.push_back(-1);
        }
    }

    return ans;
}

int main()
{
    int n = 4;
    int m = 5;
    vector<int> arrival = {2, 4, 1, 8, 9};
    vector<int> burstTime = {7, 9, 2, 4, 5};

    vector<int> result = getServerIndex(n, burstTime, arrival);

    for (int i = 0; i < m; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}