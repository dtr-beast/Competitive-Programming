// Link Missing
// Soldier and Bananas
// A2OJ 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

int max(int, int);
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    double k, n, w;
    cin >> k >> n >> w;
    // AP series, so to calculate the Sum at the Nth term, we use Sn
    double cost = ((w / 2) * (2 * k + (w - 1) * k)); // n/2[2a + (n-1)d]
    cout << max(cost - n, 0); 

    return 0;
}

int max(int a, int b)
{
    return (a > b ? a : b);
}