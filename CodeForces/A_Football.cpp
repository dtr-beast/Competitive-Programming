// https://codeforces.com/problemset/problem/43/A
// Football
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

    map<string, int> m;

    string s1;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        m[s1]++;
    }

    int maxi = -1;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (maxi < i->second)
        {
            maxi = i->second;
        }
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (maxi == i->second)
        {
            cout << i->first;
            break;
        }
    }

    return 0;
}