// https://codeforces.com/problemset/problem/462/A
// Appleman and Easy Task
// A2OJ
// TODO
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

	// Important: Declare a 2D vector with size for both dimensions
	vector<vector<char>> v(n, vector<char>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}

	

	return 0;
}