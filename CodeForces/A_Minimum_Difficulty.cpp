// https://codeforces.com/problemset/problem/496/A
// Minimum Difficulty
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

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mind = INT64_MAX;

    // Just replace a value with the previous value and calculate
    for (int i = 1; i < n - 1; i++)
    {
        int maxd = -1;
        int tmp = v[i];
        v[i] = v[i - 1];
        for (int j = 1; j < n; j++)
        {
            if (v[j] - v[j - 1] > maxd)
            {
                maxd = v[j] - v[j - 1];
            }
        }
        v[i] = tmp;
        if (mind > maxd)
        {
            mind = maxd;
        }
    }

    cout << mind;

	return 0;
}