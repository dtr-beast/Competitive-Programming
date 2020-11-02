
// 
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

	int t, l, r, c;
	cin >> t;
	while (t--)
	{
		cin >> l >> r;
        if (2 * l >= r + 1)
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
	}
	return 0;
}