// https://www.spoj.com/problems/CSUMQ/
// Cumulative Sum Query
// Prefix Sum
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int n, sum = 0;
    cin >> n;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        b[i] = sum;
    }
    cin >> n;

    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        
        if (x - 1 >= 0)
        {
            cout << b[y] - b[x - 1] << "\n";
        }
        else
        {
            cout << b[y] << "\n";
        }
    }
    
    return 0;
}