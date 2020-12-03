// https://codeforces.com/problemset/problem/439/A
// Devu, the Singer and Churu, the Joker
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

    int n, d;
    cin >> n >> d;
    int x, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s += x;
    }
    // If Devu can sing the songs in the time limit, the rest for the last song doesn't matter
    if ((10 * (n - 1) + s) <= d)
    {
        cout << (d - s) / 5;
    }
    else
    {
        cout << -1;
    }
    return 0;
}