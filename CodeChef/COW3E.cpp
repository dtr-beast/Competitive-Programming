// https://www.codechef.com/COW42020/problems/COW3E/
// SIMPLE MODIFICATION
// Prefix Sum
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

    int n, m, u, q;
    cin >> n >> m >> u >> q;
    vector <vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int k, r1, c1, r2, c2;
    for (int i = 0; i < u; i++)
    {
        cin >> k >> r1 >> c1 >> r2 >> c2;
    }
    
    for (int i = 0; i < q; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
    }
    
    return 0;
}