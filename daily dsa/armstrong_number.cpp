#include <bits/stdc++.h>
using namespace std;
bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}
int countdigit(int num)
{
    int count = 0;
    while (num)
    {
        num /= 10; // n/=10
        count++;
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    int digit = countdigit(num);
    cout << armstrong(num, digit);
    return 0;
}