// https://www.codechef.com/problems/ICL1902
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
	int t, a, b;
	cin >> t;
	while (t--)
	{
        int c = 0;
        cin >> a;
        while (a)
        {
            c++;
            b = sqrt(a);
            a -= b * b;
        }
        cout << c << "\n";
	}

	return 0;
}