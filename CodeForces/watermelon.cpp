// https://codeforces.com/problemset/problem/4/A
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

	int a;
    cin >> a;
    if (a == 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << ((a & 1) ? "NO\n" : "YES\n");
    }
    

	return 0;
}