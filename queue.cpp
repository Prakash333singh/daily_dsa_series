// // queue implimentation

// #include <bits\stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ll n; // no of element in a queue
//     cin >> n;
//     queue<ll> q;
//     ll i = 1;
//     while (i <= n)
//     {
//         ll y;
//         cin >> y;
//         q.push(y);
//         i++;
//     }

//     cout << q.front() << endl;
//     cout << q.back() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     q.push(9);
//     cout << q.front() << endl;

//     return 0;
// }

// dequeue implimentaion

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    deque<ll> q;

    q.push_back(1);
    q.push_back(2);

    q.push_front(3);
    q.push_front(4);
    q.push_front(5);

    cout << q.front() << ' ';
    cout << q.back();
    cout << endl;
    while (!q.empty())
    {

        cout << q.front() << ' ';
        q.pop_front();
    }

    return 0;
}