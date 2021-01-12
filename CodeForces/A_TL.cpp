// https://codeforces.com/problemset/problem/350/A
// TL
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

    int n, m;
    vector<int> nv, mv;
    
    cin >> n >> m;
    
    nv.resize(n);
    mv.resize(m);

    int minv = INT64_MAX, minw = INT64_MAX;
    int maxv = INT64_MIN, maxw = INT64_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> nv[i];
        if (nv[i] > maxv)
        {
            maxv = nv[i];
        }
        if (nv[i] < minv)
        {
            minv = nv[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> mv[i];
        if (mv[i] > maxw)
        {
            maxw = mv[i];
        }
        if (mv[i] < minw)
        {
            minw = mv[i];
        }
    }

    int tl = minv * 2;
    int finaltl = 0;
    if (tl < maxv)
    {
        tl = maxv;
    }
    if (tl >= minw)
    {
        finaltl = -1;
    }
    else
    {
        finaltl = tl;
    }
    
    cout << finaltl;

	return 0;
}