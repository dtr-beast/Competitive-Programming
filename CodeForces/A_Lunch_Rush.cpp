// https://codeforces.com/problemset/problem/276/A
// Lunch Rush
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

	int t, k, maxi = INT64_MIN;
    cin >> t >> k;

    int f, x, joy;
    for (int i = 0; i < t; i++)
    {
        cin >> f >> x;
        joy = f;
        if (x > k)
        {
            joy -= (x - k);
        }
        if (joy > maxi)
        {
            maxi = joy;
        }
    }
    
    cout << maxi << endl;

	return 0;
}