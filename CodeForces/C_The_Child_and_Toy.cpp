// https://codeforces.com/problemset/problem/437/C
// The Child and Toy
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
    cin >> n >> m;

    vector<int> n_v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> n_v[i];
    }

    vector<pair<int, int>> m_v(m);
    int a, b;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        m_v[i] = make_pair(a, b);
    }

    int min_power = 0;

    for (int i = 0; i < m; i++)
    {
        min_power += min(n_v[m_v[i].first - 1], n_v[m_v[i].second - 1]);
    }

    cout << min_power;
    
	return 0;
}