// https://codeforces.com/problemset/problem/463/B
// Caisa and Pylons
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

    int temp, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (maxi < temp)
        {
            maxi = temp;
        }
    }

    cout << maxi;

	return 0;
}