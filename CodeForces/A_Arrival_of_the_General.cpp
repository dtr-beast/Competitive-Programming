// https://codeforces.com/problemset/problem/144/A
// Arrival of the General
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

	int n, max = INT64_MIN, min = INT64_MAX, maxi, mini;
	cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (max < v[i])
        {
            max = v[i];
            maxi = i;
        }
        if (min >= v[i])
        {
            min = v[i];
            mini = i;
        }
    }
    n--;
    int time = (n - mini) + maxi;
    if (mini < maxi)
    {
        --time;
    }
    cout << time;

	return 0;
}