// https://codeforces.com/problemset/problem/71/A
// Way Too Long Words
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
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