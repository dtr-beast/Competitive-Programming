//
//
//
#include <bits/stdc++.h>
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio;

	int n;
	cin >> n;

	vector<int> q(n);
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		q[i] = temp;
	}
	int min_time = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		int time = q[i] * 15;
		for (int j = 0; j < q[i]; j++)
		{
			cin >> temp;
			time += temp * 5;
		}
		if (time < min_time)
		{
			min_time = time;
		}
	}
	cout << min_time;

	return 0;
}