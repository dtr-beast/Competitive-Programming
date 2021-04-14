// https://codeforces.com/problemset/problem/166/A
// Rank List
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

bool comp(pair<int, int>, pair<int, int>);
signed main()
{
	fastio

	int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    map <pair<int, int>, int> m;
    
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = make_pair(a, b);
        m[make_pair(a, b)]++;
    }
    sort(v.begin(), v.end(), comp);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i + 1 << " " <<  v[i].first << " " << v[i].second << " " << m[v[i]] << endl;
    // }

    cout << m[v[k - 1]];

	return 0;
}

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
    {
        return true;
    }
    else if (a.first == b.first && a.second < b.second)
    {
        return true;
    }
    return false;
}