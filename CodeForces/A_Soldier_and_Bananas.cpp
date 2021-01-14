// https://codeforces.com/problemset/problem/546/A
// Soldier and Bananas
// Random
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

    double k, n, w;
    cin >> k >> n >> w;
    // AP series, so to calculate the Sum at the Nth term, we use Sn
    double cost = ((w / 2) * (2 * k + (w - 1) * k)); // n/2[2a + (n-1)d]
    cout << max((int)(cost - n), 0LL); 

    return 0;
}