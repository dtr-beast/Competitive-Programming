// https://codeforces.com/problemset/problem/373/A
// Collecting Beats is Fun
// A2OJ
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

    int n;
    cin >> n;
    n *= 2;

    map<int, int> m;

    char c;
    for (int i = 0; i < 16; i++)
    {
        cin >> c;
        if (isdigit(c))
        {
            m[c - '0']++;
        }
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > n)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}