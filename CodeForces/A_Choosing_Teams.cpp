// https://codeforces.com/problemset/problem/432/A
// Choosing Teams
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

	int n, k, x;

    cin >> n >> k;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x += k;
        if (x <= 5)
        {
            v.push_back(x);
        }
    }
    cout << (v.size() / 3) << endl;

	return 0;
}