// https://codeforces.com/problemset/problem/388/A
// Fox and Box Accumulation
// A2OJ
// TODO: Solve
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int n;
    cin >> n;

    vector<int> v(n);
    set<int, greater<int>> s;
    map <int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.emplace(v[i]);
        m[v[i]]++;
    }
    sort(v.begin(), v.end(), greater<int>());

    int piles = 1;
    // cout << * s.begin() << endl;

    while (!s.empty())
    {
        auto it = s.begin();
        int c = *it;
        for (it++; it != s.end(); it++)
        {
            // c -=  
        }
    }

	return 0;
}