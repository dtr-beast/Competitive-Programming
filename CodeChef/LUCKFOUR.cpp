// https://www.codechef.com/problems/LUCKFOUR
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
        b = 0;
        cin >> a;
        while (a)
        {
            if (a % 10 == 4)
            {
                b++;
            }
            a /= 10;
        }
        cout << b << "\n";
	}

	return 0;
}