// https://codeforces.com/problemset/problem/318/A
// Even Odds
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int n, k;
    cin >> n >> k;

    int middle = ceil(n / 2.0);
    if (k > middle)
    {
        cout << (k - middle) * 2; 
    }
    else
    {
        cout << (k * 2) - 1;
    }
    
    return 0;
}