// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio

	int t, a, b, c;
	a = b = c = 0;
	int x, y, z;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y >> z;
		a += x;
		b += y;
		c += z;
	}
	if (!a && !b && !c)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}