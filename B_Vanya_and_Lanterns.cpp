// https://codeforces.com/problemset/problem/492/B
// Vanya and Lanterns
// A2OJ
// TODO: Wrong answer on test 3
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int n, l;
    cin >> n >> l;

    vector <double> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());


    int diff = INT64_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > diff)
        {
            diff = v[i + 1] - v[i];
        }
    }

    // In case if v[0] != 0, or v[last] != l (last point)
    cout << max(max(v[0], diff / 2.0L), l - v.back());


	return 0;
}