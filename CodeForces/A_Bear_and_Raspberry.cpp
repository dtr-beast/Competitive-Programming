// https://codeforces.com/problemset/problem/385/A
// Bear and Raspberry
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

	int n, c, maxi = INT64_MIN;
    cin >> n >> c;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i <= n - 2; i++)
    {
        int p = a[i] - c - a[i + 1];
        if (p > maxi)
        {
            maxi = p;
        }        
    }
    cout << max(maxi, 0LL) << endl;


	return 0;
}