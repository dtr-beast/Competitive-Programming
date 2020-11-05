// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/holiday-season-ab957deb/
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

	int n;
	string s1;
	cin >> n;
	char c;
	map<char, int> smap;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (smap.find(c) == smap.end())
		{
			smap.insert(pair<char, int>(c, 1));
		}
		else
		{
			smap[c]++;
		}
	}
	// for (auto i = smap.begin(); i != smap.end(); i++)
	// {
	// 	cout << i->first << ": " << i->second << "\n";
	// }
	int count = 0;
	for (auto i = smap.begin(); i != smap.end(); i++)
	{
		count += i -> second / 2;
	}
	cout << count;
	return 0;
}