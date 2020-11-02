// https://www.codechef.com/problems/CHEFSTLT
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

	int t;
    string a, b;
	cin >> t;
    getline(cin, a);
	while (t--)
	{
		int c = 0, diff = 0;
        getline(cin, a);
        getline(cin, b);
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '?' || b[i] == '?')
            {
                c++;
            }
            else if (a[i] != b[i])
            {
                diff++;
            }
        }
        cout << diff << " " << diff + c << "\n";
	}
	return 0;
}