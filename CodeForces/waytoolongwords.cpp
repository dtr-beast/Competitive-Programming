// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio

	int t, len;
	cin >> t;
    string a;
	while (t--)
	{
        cin >> a;
        if ((len = a.length()) > 10)
        {
            cout << a[0] << len - 2 << a[len - 1] << "\n";
        }
        else
        {
            cout << a << "\n";
        }
	}

	return 0;
}