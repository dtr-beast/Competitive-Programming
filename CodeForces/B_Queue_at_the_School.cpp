// https://codeforces.com/problemset/problem/266/B
// Queue at the School
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

	int n, t;
    cin >> n >> t;

    string s1;
    cin >> s1;

    while(t--)
    {
        for (int i = 0; i <= n - 2; i++)
        {
            if (s1[i] == 'B' && s1[i + 1] == 'G')
            {
                swap(s1[i], s1[i + 1]);
                i++;
            }
        }
    }

    cout << s1;

	return 0;
}