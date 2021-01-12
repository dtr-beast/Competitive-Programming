// https://codeforces.com/problemset/problem/262/A
// Roma and Lucky Numbers
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long

using namespace std;

signed main()
{
	int n, k;
	cin >> n >> k;
	int x, count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		int c = 0;
		string s =  to_string(x);
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '7' || s[j] == '4')
			{
				c++;
			}
		}
		if (c <= k)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}