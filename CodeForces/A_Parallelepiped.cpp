// https://codeforces.com/problemset/problem/224/A
// Parallelepiped
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

    double x, y, z;

    cin >> x >> y >> z;

    double a = sqrt((x * y) / z),
    b = sqrt((z * x) / y),
    c = sqrt((z * y) / x);

    cout << 4 * (a + b + c);

	return 0;
}