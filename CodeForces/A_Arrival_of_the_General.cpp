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

	int t, max = INT64_MIN, min = INT64_MAX, maxi, mini;
	cin >> t;
    vector <int> sol;
    sol.resize(t);
    for (int i = 0; i < t; i++)
    {
        cin >> sol[i];
        if (max < sol[i])
        {
            max = sol[i];
            maxi = i;
        }
        if (min >= sol[i])
        {
            min = sol[i];
            mini = i;
        }
    }
    t--;
    int time = (t - mini) + maxi;
    if (mini < maxi)
    {
        --time;
    }
    cout << time;

	return 0;
}