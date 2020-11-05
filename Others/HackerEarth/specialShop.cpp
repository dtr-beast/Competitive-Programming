// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/
// TODO
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

	int t, n, a, b, price;
	cin >> t;
	while (t--)
	{
		cin >> n >> a >> b;
		int min = INT64_MAX;
		for (int i = 0; i < n; i++)
		{
			price = a * i * i + b * (n - i) * (n - i);
			if (min > price)
			{
				min = price;
			}
		}
		cout << min << "\n";
	}
	return 0;
}