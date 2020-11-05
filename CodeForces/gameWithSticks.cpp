// https://codeforces.com/problemset/problem/451/A
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

	int m, n;
    cin >> m >> n;
    int x = (m < n) ? m : n; // Min Value
	cout << ((x & 1) ? "Akshat" : "Malvika"); // If x is odd then Akshat will win

	return 0;
}