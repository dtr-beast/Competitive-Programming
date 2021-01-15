// https://codeforces.com/problemset/problem/114/A
// Cifera
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
    double a, b;
    cin >> a;
    cin >> b;

    double x = log(b) / log(a);
    if ((int) x == x)
    {
        cout << "YES\n";
        cout << x - 1;
    }
    else
    {
        cout << "NO";
    }

	return 0;
}