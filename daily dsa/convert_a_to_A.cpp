#include <bits/stdc++.h>
using namespace std;
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char mansii;
    cin >> mansii;
    cout << convert(mansii);
    return 0;
}