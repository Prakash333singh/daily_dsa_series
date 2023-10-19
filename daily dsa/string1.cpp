#include <bits\stdc++.h>
using namespace std;
string convert_string(string s)
{
    int i = s.size();
    int j = 0;

    for (j = 0; j < s.size(); j++)
    {
        if (s[j] != '#')
        {
            cout << "hmm jii" << endl;
            break;
        }
    }

    cout << s.erase(0, j) << endl;
    int count = 0;
    while (i >= 0)
    {
        while (s[i] == '#')
        {
            count++;
            cout << s.erase(i, 1) << endl;
            i--;
        }
        if (count > 0)
        {

            cout << s.erase(i, 1) << endl;
            count--;
        }
        i--;
    }

    return s;
}

int main()
{
    string s, t;
    cin >> s >> t;
    if (convert_string(s) == convert_string(t))
    {
        cout << "Strings are equal after conversion." << endl;
        return 1;
    }
    else
    {
        cout << "Strings are not equal after conversion." << endl;
        return 0;
    }
}
